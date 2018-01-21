// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: greeter

#include "greeter_generated.h"
#include "greeter.grpc.fb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/channel_interface.h>
#include <grpc++/impl/codegen/client_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/rpc_service_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/sync_stream.h>

static const char* Greeter_method_names[] = {
  "/Greeter/SayHello",
  "/Greeter/SayManyHellos",
};

std::unique_ptr< Greeter::Stub> Greeter::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  std::unique_ptr< Greeter::Stub> stub(new Greeter::Stub(channel));
  return stub;
}

Greeter::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel)  , rpcmethod_SayHello_(Greeter_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SayManyHellos_(Greeter_method_names[1], ::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  {}
  
::grpc::Status Greeter::Stub::SayHello(::grpc::ClientContext* context, const flatbuffers::grpc::Message<HelloRequest>& request, flatbuffers::grpc::Message<HelloReply>* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_SayHello_, context, request, response);
}

::grpc::ClientAsyncResponseReader< flatbuffers::grpc::Message<HelloReply>>* Greeter::Stub::AsyncSayHelloRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<HelloRequest>& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< flatbuffers::grpc::Message<HelloReply>>::Create(channel_.get(), cq, rpcmethod_SayHello_, context, request, true);
}

::grpc::ClientAsyncResponseReader< flatbuffers::grpc::Message<HelloReply>>* Greeter::Stub::PrepareAsyncSayHelloRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<HelloRequest>& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< flatbuffers::grpc::Message<HelloReply>>::Create(channel_.get(), cq, rpcmethod_SayHello_, context, request, false);
}

::grpc::ClientReader< flatbuffers::grpc::Message<HelloReply>>* Greeter::Stub::SayManyHellosRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<ManyHellosRequest>& request) {
  return ::grpc::internal::ClientReaderFactory< flatbuffers::grpc::Message<HelloReply>>::Create(channel_.get(), rpcmethod_SayManyHellos_, context, request);
}

::grpc::ClientAsyncReader< flatbuffers::grpc::Message<HelloReply>>* Greeter::Stub::AsyncSayManyHellosRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<ManyHellosRequest>& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< flatbuffers::grpc::Message<HelloReply>>::Create(channel_.get(), cq, rpcmethod_SayManyHellos_, context, request, true, tag);
}

::grpc::ClientAsyncReader< flatbuffers::grpc::Message<HelloReply>>* Greeter::Stub::PrepareAsyncSayManyHellosRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<ManyHellosRequest>& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< flatbuffers::grpc::Message<HelloReply>>::Create(channel_.get(), cq, rpcmethod_SayManyHellos_, context, request, false, nullptr);
}

Greeter::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Greeter_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Greeter::Service, flatbuffers::grpc::Message<HelloRequest>, flatbuffers::grpc::Message<HelloReply>>(
          std::mem_fn(&Greeter::Service::SayHello), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Greeter_method_names[1],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< Greeter::Service, flatbuffers::grpc::Message<ManyHellosRequest>, flatbuffers::grpc::Message<HelloReply>>(
          std::mem_fn(&Greeter::Service::SayManyHellos), this)));
}

Greeter::Service::~Service() {
}

::grpc::Status Greeter::Service::SayHello(::grpc::ServerContext* context, const flatbuffers::grpc::Message<HelloRequest>* request, flatbuffers::grpc::Message<HelloReply>* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Greeter::Service::SayManyHellos(::grpc::ServerContext* context, const flatbuffers::grpc::Message<ManyHellosRequest>* request, ::grpc::ServerWriter< flatbuffers::grpc::Message<HelloReply>>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


