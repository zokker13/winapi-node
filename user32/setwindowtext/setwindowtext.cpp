#include <nan.h>
#include <Windows.h>

using namespace v8;

void SetWindowTextSync(const Nan::FunctionCallbackInfo<Value> &args) {
    Isolate *isolate = Isolate::GetCurrent();
    HandleScope scope(isolate);

    if (args.Length() != 2) {
        args.GetReturnValue().Set(Nan::False());
    } else {



        if (args[0]->IsNumber() &&
            args[1]->IsString()) {

            HWND handle = (HWND)args[0]->Int32Value();
            String::Utf8Value targetWindowName(args[1]->ToString());

            bool result = SetWindowText(handle, *targetWindowName);

            args.GetReturnValue().Set(result);

        } else {
            args.GetReturnValue().Set(Nan::False());
        }
    }
}

void Init(Handle<Object> exports, Handle<Object> module) {
  Nan::SetMethod(exports, "SetWindowTextSync", SetWindowTextSync);
}

NODE_MODULE(SetWindowText, Init)
