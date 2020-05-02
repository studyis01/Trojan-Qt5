// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: trojangoapi.proto

#include "trojangoapi.pb.h"
#include "trojangoapi.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace api {

static const char* TrojanClientService_method_names[] = {
  "/api.TrojanClientService/GetTraffic",
};

std::unique_ptr< TrojanClientService::Stub> TrojanClientService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< TrojanClientService::Stub> stub(new TrojanClientService::Stub(channel));
  return stub;
}

TrojanClientService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_GetTraffic_(TrojanClientService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status TrojanClientService::Stub::GetTraffic(::grpc::ClientContext* context, const ::api::GetTrafficRequest& request, ::api::GetTrafficResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetTraffic_, context, request, response);
}

void TrojanClientService::Stub::experimental_async::GetTraffic(::grpc::ClientContext* context, const ::api::GetTrafficRequest* request, ::api::GetTrafficResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetTraffic_, context, request, response, std::move(f));
}

void TrojanClientService::Stub::experimental_async::GetTraffic(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::api::GetTrafficResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetTraffic_, context, request, response, std::move(f));
}

void TrojanClientService::Stub::experimental_async::GetTraffic(::grpc::ClientContext* context, const ::api::GetTrafficRequest* request, ::api::GetTrafficResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetTraffic_, context, request, response, reactor);
}

void TrojanClientService::Stub::experimental_async::GetTraffic(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::api::GetTrafficResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetTraffic_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::api::GetTrafficResponse>* TrojanClientService::Stub::AsyncGetTrafficRaw(::grpc::ClientContext* context, const ::api::GetTrafficRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::api::GetTrafficResponse>::Create(channel_.get(), cq, rpcmethod_GetTraffic_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::api::GetTrafficResponse>* TrojanClientService::Stub::PrepareAsyncGetTrafficRaw(::grpc::ClientContext* context, const ::api::GetTrafficRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::api::GetTrafficResponse>::Create(channel_.get(), cq, rpcmethod_GetTraffic_, context, request, false);
}

TrojanClientService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      TrojanClientService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< TrojanClientService::Service, ::api::GetTrafficRequest, ::api::GetTrafficResponse>(
          std::mem_fn(&TrojanClientService::Service::GetTraffic), this)));
}

TrojanClientService::Service::~Service() {
}

::grpc::Status TrojanClientService::Service::GetTraffic(::grpc::ServerContext* context, const ::api::GetTrafficRequest* request, ::api::GetTrafficResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


static const char* TrojanServerService_method_names[] = {
  "/api.TrojanServerService/ListUsers",
  "/api.TrojanServerService/GetTraffic",
  "/api.TrojanServerService/SetUsers",
};

std::unique_ptr< TrojanServerService::Stub> TrojanServerService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< TrojanServerService::Stub> stub(new TrojanServerService::Stub(channel));
  return stub;
}

TrojanServerService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_ListUsers_(TrojanServerService_method_names[0], ::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_GetTraffic_(TrojanServerService_method_names[1], ::grpc::internal::RpcMethod::BIDI_STREAMING, channel)
  , rpcmethod_SetUsers_(TrojanServerService_method_names[2], ::grpc::internal::RpcMethod::BIDI_STREAMING, channel)
  {}

::grpc::ClientReader< ::api::ListUserResponse>* TrojanServerService::Stub::ListUsersRaw(::grpc::ClientContext* context, const ::api::ListUserRequest& request) {
  return ::grpc_impl::internal::ClientReaderFactory< ::api::ListUserResponse>::Create(channel_.get(), rpcmethod_ListUsers_, context, request);
}

void TrojanServerService::Stub::experimental_async::ListUsers(::grpc::ClientContext* context, ::api::ListUserRequest* request, ::grpc::experimental::ClientReadReactor< ::api::ListUserResponse>* reactor) {
  ::grpc_impl::internal::ClientCallbackReaderFactory< ::api::ListUserResponse>::Create(stub_->channel_.get(), stub_->rpcmethod_ListUsers_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::api::ListUserResponse>* TrojanServerService::Stub::AsyncListUsersRaw(::grpc::ClientContext* context, const ::api::ListUserRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc_impl::internal::ClientAsyncReaderFactory< ::api::ListUserResponse>::Create(channel_.get(), cq, rpcmethod_ListUsers_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::api::ListUserResponse>* TrojanServerService::Stub::PrepareAsyncListUsersRaw(::grpc::ClientContext* context, const ::api::ListUserRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncReaderFactory< ::api::ListUserResponse>::Create(channel_.get(), cq, rpcmethod_ListUsers_, context, request, false, nullptr);
}

::grpc::ClientReaderWriter< ::api::GetTrafficRequest, ::api::GetTrafficResponse>* TrojanServerService::Stub::GetTrafficRaw(::grpc::ClientContext* context) {
  return ::grpc_impl::internal::ClientReaderWriterFactory< ::api::GetTrafficRequest, ::api::GetTrafficResponse>::Create(channel_.get(), rpcmethod_GetTraffic_, context);
}

void TrojanServerService::Stub::experimental_async::GetTraffic(::grpc::ClientContext* context, ::grpc::experimental::ClientBidiReactor< ::api::GetTrafficRequest,::api::GetTrafficResponse>* reactor) {
  ::grpc_impl::internal::ClientCallbackReaderWriterFactory< ::api::GetTrafficRequest,::api::GetTrafficResponse>::Create(stub_->channel_.get(), stub_->rpcmethod_GetTraffic_, context, reactor);
}

::grpc::ClientAsyncReaderWriter< ::api::GetTrafficRequest, ::api::GetTrafficResponse>* TrojanServerService::Stub::AsyncGetTrafficRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc_impl::internal::ClientAsyncReaderWriterFactory< ::api::GetTrafficRequest, ::api::GetTrafficResponse>::Create(channel_.get(), cq, rpcmethod_GetTraffic_, context, true, tag);
}

::grpc::ClientAsyncReaderWriter< ::api::GetTrafficRequest, ::api::GetTrafficResponse>* TrojanServerService::Stub::PrepareAsyncGetTrafficRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncReaderWriterFactory< ::api::GetTrafficRequest, ::api::GetTrafficResponse>::Create(channel_.get(), cq, rpcmethod_GetTraffic_, context, false, nullptr);
}

::grpc::ClientReaderWriter< ::api::SetUserRequest, ::api::SetUserResponse>* TrojanServerService::Stub::SetUsersRaw(::grpc::ClientContext* context) {
  return ::grpc_impl::internal::ClientReaderWriterFactory< ::api::SetUserRequest, ::api::SetUserResponse>::Create(channel_.get(), rpcmethod_SetUsers_, context);
}

void TrojanServerService::Stub::experimental_async::SetUsers(::grpc::ClientContext* context, ::grpc::experimental::ClientBidiReactor< ::api::SetUserRequest,::api::SetUserResponse>* reactor) {
  ::grpc_impl::internal::ClientCallbackReaderWriterFactory< ::api::SetUserRequest,::api::SetUserResponse>::Create(stub_->channel_.get(), stub_->rpcmethod_SetUsers_, context, reactor);
}

::grpc::ClientAsyncReaderWriter< ::api::SetUserRequest, ::api::SetUserResponse>* TrojanServerService::Stub::AsyncSetUsersRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc_impl::internal::ClientAsyncReaderWriterFactory< ::api::SetUserRequest, ::api::SetUserResponse>::Create(channel_.get(), cq, rpcmethod_SetUsers_, context, true, tag);
}

::grpc::ClientAsyncReaderWriter< ::api::SetUserRequest, ::api::SetUserResponse>* TrojanServerService::Stub::PrepareAsyncSetUsersRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncReaderWriterFactory< ::api::SetUserRequest, ::api::SetUserResponse>::Create(channel_.get(), cq, rpcmethod_SetUsers_, context, false, nullptr);
}

TrojanServerService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      TrojanServerService_method_names[0],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< TrojanServerService::Service, ::api::ListUserRequest, ::api::ListUserResponse>(
          std::mem_fn(&TrojanServerService::Service::ListUsers), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      TrojanServerService_method_names[1],
      ::grpc::internal::RpcMethod::BIDI_STREAMING,
      new ::grpc::internal::BidiStreamingHandler< TrojanServerService::Service, ::api::GetTrafficRequest, ::api::GetTrafficResponse>(
          std::mem_fn(&TrojanServerService::Service::GetTraffic), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      TrojanServerService_method_names[2],
      ::grpc::internal::RpcMethod::BIDI_STREAMING,
      new ::grpc::internal::BidiStreamingHandler< TrojanServerService::Service, ::api::SetUserRequest, ::api::SetUserResponse>(
          std::mem_fn(&TrojanServerService::Service::SetUsers), this)));
}

TrojanServerService::Service::~Service() {
}

::grpc::Status TrojanServerService::Service::ListUsers(::grpc::ServerContext* context, const ::api::ListUserRequest* request, ::grpc::ServerWriter< ::api::ListUserResponse>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status TrojanServerService::Service::GetTraffic(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::api::GetTrafficResponse, ::api::GetTrafficRequest>* stream) {
  (void) context;
  (void) stream;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status TrojanServerService::Service::SetUsers(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::api::SetUserResponse, ::api::SetUserRequest>* stream) {
  (void) context;
  (void) stream;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace api
