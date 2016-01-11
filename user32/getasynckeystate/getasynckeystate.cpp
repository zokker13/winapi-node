#include <nan.h>
#include <Windows.h>

using namespace v8;

void GetAsyncKeyStateSync(const Nan::FunctionCallbackInfo<Value> &args) {
    Isolate *isolate = Isolate::GetCurrent();
    HandleScope scope(isolate);

    if (args.Length() != 1) {
        args.GetReturnValue().Set(Null(isolate));
    } else {
        if (!args[0]->IsNumber()) {
            args.GetReturnValue().Set(Nan::Null());
        } else {
            args.GetReturnValue().Set(GetAsyncKeyState(args[0]->Int32Value()));
        }
    }
}

void Init(Handle<Object> exports, Handle<Object> module) {
  Nan::SetMethod(exports, "GetAsyncKeyStateSync", GetAsyncKeyStateSync);
}

NODE_MODULE(GetAsyncKeyState, Init)
