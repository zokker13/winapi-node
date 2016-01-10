#include <nan.h>
#include <Windows.h>
#include <iostream>
#include <thread>

using namespace v8;

//TODO: Add actual asynchronous solution
void FindWindow(const Nan::FunctionCallbackInfo<Value> &args) {

  Local<Function> cb = args[0].As<Function>();

  if (args.Length() != 3) {
      Local<Value> argv[1] = { Nan::TypeError("Wrong number of arguments") };
      Nan::MakeCallback(Nan::GetCurrentContext()->Global(), cb, 1, argv);
  } else {

      String::Utf8Value className(args[1]->ToString());
      String::Utf8Value windowName(args[2]->ToString());

      auto lpClassName = *className;
      auto lpWindowName = *windowName;

      if (args[1]->IsNull()) {
          lpClassName = NULL;
      }

      if (args[2]->IsNull()) {
          lpWindowName = NULL;
      }

      HWND result = FindWindow(lpClassName, lpWindowName);

      Local<Value> cbValues[2] = {
        Nan::Null(),
        Nan::New((int)result)
      };

      Nan::MakeCallback(Nan::GetCurrentContext()->Global(), cb, 2, cbValues);
  }
}

void FindWindowSync(const Nan::FunctionCallbackInfo<Value> &args) {
  Isolate *isolate = Isolate::GetCurrent();
  HandleScope scope(isolate);

  if (args.Length() != 2) {
      args.GetReturnValue().Set(Null(isolate));
  } else {

      String::Utf8Value className(args[0]->ToString());
      String::Utf8Value windowName(args[1]->ToString());

      auto lpClassName = *className;
      auto lpWindowName = *windowName;

      if (args[0]->IsNull()) {
          lpClassName = NULL;
      }

      if (args[1]->IsNull()) {
          lpWindowName = NULL;
      }

      HWND result = FindWindow(lpClassName, lpWindowName);

      //HWND is internally an int. Casting is valid.
      args.GetReturnValue().Set((int)result);
  }
}

void Init(Handle<Object> exports, Handle<Object> module) {
  Nan::SetMethod(exports, "findWindowSync", FindWindowSync);
  Nan::SetMethod(exports, "findWindow", FindWindow);
}

NODE_MODULE(findWindow, Init)
