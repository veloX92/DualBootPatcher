// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_SELINUXSETLABEL_MBTOOL_DAEMON_V2_H_
#define FLATBUFFERS_GENERATED_SELINUXSETLABEL_MBTOOL_DAEMON_V2_H_

#include "flatbuffers/flatbuffers.h"

namespace mbtool {
namespace daemon {
namespace v2 {
struct GetVersionRequest;
struct GetVersionResponse;
}  // namespace v2
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v2 {
struct Rom;
struct GetRomsListRequest;
struct GetRomsListResponse;
}  // namespace v2
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v2 {
struct GetBuiltinRomIdsRequest;
struct GetBuiltinRomIdsResponse;
}  // namespace v2
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v2 {
struct GetCurrentRomRequest;
struct GetCurrentRomResponse;
}  // namespace v2
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v2 {
struct SwitchRomRequest;
struct SwitchRomResponse;
}  // namespace v2
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v2 {
struct SetKernelRequest;
struct SetKernelResponse;
}  // namespace v2
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v2 {
struct RebootRequest;
struct RebootResponse;
}  // namespace v2
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v2 {
struct OpenRequest;
struct OpenResponse;
}  // namespace v2
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v2 {
struct CopyRequest;
struct CopyResponse;
}  // namespace v2
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v2 {
struct ChmodRequest;
struct ChmodResponse;
}  // namespace v2
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v2 {
struct LokiPatchRequest;
struct LokiPatchResponse;
}  // namespace v2
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v2 {
struct WipeRomRequest;
struct WipeRomResponse;
}  // namespace v2
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v2 {
struct SELinuxGetLabelRequest;
struct SELinuxGetLabelResponse;
}  // namespace v2
}  // namespace daemon
}  // namespace mbtool

namespace mbtool {
namespace daemon {
namespace v2 {

struct SELinuxSetLabelRequest;
struct SELinuxSetLabelResponse;

struct SELinuxSetLabelRequest FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  const flatbuffers::String *path() const { return GetPointer<const flatbuffers::String *>(4); }
  const flatbuffers::String *label() const { return GetPointer<const flatbuffers::String *>(6); }
  uint8_t follow_symlinks() const { return GetField<uint8_t>(8, 0); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 4 /* path */) &&
           verifier.Verify(path()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 6 /* label */) &&
           verifier.Verify(label()) &&
           VerifyField<uint8_t>(verifier, 8 /* follow_symlinks */) &&
           verifier.EndTable();
  }
};

struct SELinuxSetLabelRequestBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_path(flatbuffers::Offset<flatbuffers::String> path) { fbb_.AddOffset(4, path); }
  void add_label(flatbuffers::Offset<flatbuffers::String> label) { fbb_.AddOffset(6, label); }
  void add_follow_symlinks(uint8_t follow_symlinks) { fbb_.AddElement<uint8_t>(8, follow_symlinks, 0); }
  SELinuxSetLabelRequestBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  SELinuxSetLabelRequestBuilder &operator=(const SELinuxSetLabelRequestBuilder &);
  flatbuffers::Offset<SELinuxSetLabelRequest> Finish() {
    auto o = flatbuffers::Offset<SELinuxSetLabelRequest>(fbb_.EndTable(start_, 3));
    return o;
  }
};

inline flatbuffers::Offset<SELinuxSetLabelRequest> CreateSELinuxSetLabelRequest(flatbuffers::FlatBufferBuilder &_fbb,
   flatbuffers::Offset<flatbuffers::String> path = 0,
   flatbuffers::Offset<flatbuffers::String> label = 0,
   uint8_t follow_symlinks = 0) {
  SELinuxSetLabelRequestBuilder builder_(_fbb);
  builder_.add_label(label);
  builder_.add_path(path);
  builder_.add_follow_symlinks(follow_symlinks);
  return builder_.Finish();
}

struct SELinuxSetLabelResponse FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  uint8_t success() const { return GetField<uint8_t>(4, 0); }
  const flatbuffers::String *error_msg() const { return GetPointer<const flatbuffers::String *>(6); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, 4 /* success */) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 6 /* error_msg */) &&
           verifier.Verify(error_msg()) &&
           verifier.EndTable();
  }
};

struct SELinuxSetLabelResponseBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_success(uint8_t success) { fbb_.AddElement<uint8_t>(4, success, 0); }
  void add_error_msg(flatbuffers::Offset<flatbuffers::String> error_msg) { fbb_.AddOffset(6, error_msg); }
  SELinuxSetLabelResponseBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  SELinuxSetLabelResponseBuilder &operator=(const SELinuxSetLabelResponseBuilder &);
  flatbuffers::Offset<SELinuxSetLabelResponse> Finish() {
    auto o = flatbuffers::Offset<SELinuxSetLabelResponse>(fbb_.EndTable(start_, 2));
    return o;
  }
};

inline flatbuffers::Offset<SELinuxSetLabelResponse> CreateSELinuxSetLabelResponse(flatbuffers::FlatBufferBuilder &_fbb,
   uint8_t success = 0,
   flatbuffers::Offset<flatbuffers::String> error_msg = 0) {
  SELinuxSetLabelResponseBuilder builder_(_fbb);
  builder_.add_error_msg(error_msg);
  builder_.add_success(success);
  return builder_.Finish();
}

}  // namespace v2
}  // namespace daemon
}  // namespace mbtool

#endif  // FLATBUFFERS_GENERATED_SELINUXSETLABEL_MBTOOL_DAEMON_V2_H_
