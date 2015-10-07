// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_REQUEST_MBTOOL_DAEMON_V2_H_
#define FLATBUFFERS_GENERATED_REQUEST_MBTOOL_DAEMON_V2_H_

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
}  // namespace v2
}  // namespace daemon
}  // namespace mbtool

namespace mbtool {
namespace daemon {
namespace v2 {

struct Request;

enum RequestType {
  RequestType_GET_VERSION = 0,
  RequestType_GET_ROMS_LIST = 1,
  RequestType_GET_BUILTIN_ROM_IDS = 2,
  RequestType_GET_CURRENT_ROM = 3,
  RequestType_SWITCH_ROM = 4,
  RequestType_SET_KERNEL = 5,
  RequestType_REBOOT = 6,
  RequestType_OPEN = 7,
  RequestType_COPY = 8,
  RequestType_CHMOD = 9,
  RequestType_LOKI_PATCH = 10,
  RequestType_WIPE_ROM = 11,
  RequestType_SELINUX_GET_LABEL = 12,
  RequestType_SELINUX_SET_LABEL = 13
};

inline const char **EnumNamesRequestType() {
  static const char *names[] = { "GET_VERSION", "GET_ROMS_LIST", "GET_BUILTIN_ROM_IDS", "GET_CURRENT_ROM", "SWITCH_ROM", "SET_KERNEL", "REBOOT", "OPEN", "COPY", "CHMOD", "LOKI_PATCH", "WIPE_ROM", "SELINUX_GET_LABEL", "SELINUX_SET_LABEL", nullptr };
  return names;
}

inline const char *EnumNameRequestType(RequestType e) { return EnumNamesRequestType()[e]; }

struct Request FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  RequestType type() const { return static_cast<RequestType>(GetField<int16_t>(4, 0)); }
  const mbtool::daemon::v2::GetVersionRequest *get_version_request() const { return GetPointer<const mbtool::daemon::v2::GetVersionRequest *>(6); }
  const mbtool::daemon::v2::GetRomsListRequest *get_roms_list_request() const { return GetPointer<const mbtool::daemon::v2::GetRomsListRequest *>(8); }
  const mbtool::daemon::v2::GetBuiltinRomIdsRequest *get_builtin_rom_ids_request() const { return GetPointer<const mbtool::daemon::v2::GetBuiltinRomIdsRequest *>(10); }
  const mbtool::daemon::v2::GetCurrentRomRequest *get_current_rom_request() const { return GetPointer<const mbtool::daemon::v2::GetCurrentRomRequest *>(12); }
  const mbtool::daemon::v2::SwitchRomRequest *switch_rom_request() const { return GetPointer<const mbtool::daemon::v2::SwitchRomRequest *>(14); }
  const mbtool::daemon::v2::SetKernelRequest *set_kernel_request() const { return GetPointer<const mbtool::daemon::v2::SetKernelRequest *>(16); }
  const mbtool::daemon::v2::RebootRequest *reboot_request() const { return GetPointer<const mbtool::daemon::v2::RebootRequest *>(18); }
  const mbtool::daemon::v2::OpenRequest *open_request() const { return GetPointer<const mbtool::daemon::v2::OpenRequest *>(20); }
  const mbtool::daemon::v2::CopyRequest *copy_request() const { return GetPointer<const mbtool::daemon::v2::CopyRequest *>(22); }
  const mbtool::daemon::v2::ChmodRequest *chmod_request() const { return GetPointer<const mbtool::daemon::v2::ChmodRequest *>(24); }
  const mbtool::daemon::v2::WipeRomRequest *wipe_rom_request() const { return GetPointer<const mbtool::daemon::v2::WipeRomRequest *>(28); }
  const mbtool::daemon::v2::SELinuxGetLabelRequest *selinux_get_label_request() const { return GetPointer<const mbtool::daemon::v2::SELinuxGetLabelRequest *>(30); }
  const mbtool::daemon::v2::SELinuxSetLabelRequest *selinux_set_label_request() const { return GetPointer<const mbtool::daemon::v2::SELinuxSetLabelRequest *>(32); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int16_t>(verifier, 4 /* type */) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 6 /* get_version_request */) &&
           verifier.VerifyTable(get_version_request()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 8 /* get_roms_list_request */) &&
           verifier.VerifyTable(get_roms_list_request()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 10 /* get_builtin_rom_ids_request */) &&
           verifier.VerifyTable(get_builtin_rom_ids_request()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 12 /* get_current_rom_request */) &&
           verifier.VerifyTable(get_current_rom_request()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 14 /* switch_rom_request */) &&
           verifier.VerifyTable(switch_rom_request()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 16 /* set_kernel_request */) &&
           verifier.VerifyTable(set_kernel_request()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 18 /* reboot_request */) &&
           verifier.VerifyTable(reboot_request()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 20 /* open_request */) &&
           verifier.VerifyTable(open_request()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 22 /* copy_request */) &&
           verifier.VerifyTable(copy_request()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 24 /* chmod_request */) &&
           verifier.VerifyTable(chmod_request()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 28 /* wipe_rom_request */) &&
           verifier.VerifyTable(wipe_rom_request()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 30 /* selinux_get_label_request */) &&
           verifier.VerifyTable(selinux_get_label_request()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 32 /* selinux_set_label_request */) &&
           verifier.VerifyTable(selinux_set_label_request()) &&
           verifier.EndTable();
  }
};

struct RequestBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_type(RequestType type) { fbb_.AddElement<int16_t>(4, static_cast<int16_t>(type), 0); }
  void add_get_version_request(flatbuffers::Offset<mbtool::daemon::v2::GetVersionRequest> get_version_request) { fbb_.AddOffset(6, get_version_request); }
  void add_get_roms_list_request(flatbuffers::Offset<mbtool::daemon::v2::GetRomsListRequest> get_roms_list_request) { fbb_.AddOffset(8, get_roms_list_request); }
  void add_get_builtin_rom_ids_request(flatbuffers::Offset<mbtool::daemon::v2::GetBuiltinRomIdsRequest> get_builtin_rom_ids_request) { fbb_.AddOffset(10, get_builtin_rom_ids_request); }
  void add_get_current_rom_request(flatbuffers::Offset<mbtool::daemon::v2::GetCurrentRomRequest> get_current_rom_request) { fbb_.AddOffset(12, get_current_rom_request); }
  void add_switch_rom_request(flatbuffers::Offset<mbtool::daemon::v2::SwitchRomRequest> switch_rom_request) { fbb_.AddOffset(14, switch_rom_request); }
  void add_set_kernel_request(flatbuffers::Offset<mbtool::daemon::v2::SetKernelRequest> set_kernel_request) { fbb_.AddOffset(16, set_kernel_request); }
  void add_reboot_request(flatbuffers::Offset<mbtool::daemon::v2::RebootRequest> reboot_request) { fbb_.AddOffset(18, reboot_request); }
  void add_open_request(flatbuffers::Offset<mbtool::daemon::v2::OpenRequest> open_request) { fbb_.AddOffset(20, open_request); }
  void add_copy_request(flatbuffers::Offset<mbtool::daemon::v2::CopyRequest> copy_request) { fbb_.AddOffset(22, copy_request); }
  void add_chmod_request(flatbuffers::Offset<mbtool::daemon::v2::ChmodRequest> chmod_request) { fbb_.AddOffset(24, chmod_request); }
  void add_wipe_rom_request(flatbuffers::Offset<mbtool::daemon::v2::WipeRomRequest> wipe_rom_request) { fbb_.AddOffset(28, wipe_rom_request); }
  void add_selinux_get_label_request(flatbuffers::Offset<mbtool::daemon::v2::SELinuxGetLabelRequest> selinux_get_label_request) { fbb_.AddOffset(30, selinux_get_label_request); }
  void add_selinux_set_label_request(flatbuffers::Offset<mbtool::daemon::v2::SELinuxSetLabelRequest> selinux_set_label_request) { fbb_.AddOffset(32, selinux_set_label_request); }
  RequestBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  RequestBuilder &operator=(const RequestBuilder &);
  flatbuffers::Offset<Request> Finish() {
    auto o = flatbuffers::Offset<Request>(fbb_.EndTable(start_, 15));
    return o;
  }
};

inline flatbuffers::Offset<Request> CreateRequest(flatbuffers::FlatBufferBuilder &_fbb,
   RequestType type = RequestType_GET_VERSION,
   flatbuffers::Offset<mbtool::daemon::v2::GetVersionRequest> get_version_request = 0,
   flatbuffers::Offset<mbtool::daemon::v2::GetRomsListRequest> get_roms_list_request = 0,
   flatbuffers::Offset<mbtool::daemon::v2::GetBuiltinRomIdsRequest> get_builtin_rom_ids_request = 0,
   flatbuffers::Offset<mbtool::daemon::v2::GetCurrentRomRequest> get_current_rom_request = 0,
   flatbuffers::Offset<mbtool::daemon::v2::SwitchRomRequest> switch_rom_request = 0,
   flatbuffers::Offset<mbtool::daemon::v2::SetKernelRequest> set_kernel_request = 0,
   flatbuffers::Offset<mbtool::daemon::v2::RebootRequest> reboot_request = 0,
   flatbuffers::Offset<mbtool::daemon::v2::OpenRequest> open_request = 0,
   flatbuffers::Offset<mbtool::daemon::v2::CopyRequest> copy_request = 0,
   flatbuffers::Offset<mbtool::daemon::v2::ChmodRequest> chmod_request = 0,
   flatbuffers::Offset<mbtool::daemon::v2::WipeRomRequest> wipe_rom_request = 0,
   flatbuffers::Offset<mbtool::daemon::v2::SELinuxGetLabelRequest> selinux_get_label_request = 0,
   flatbuffers::Offset<mbtool::daemon::v2::SELinuxSetLabelRequest> selinux_set_label_request = 0) {
  RequestBuilder builder_(_fbb);
  builder_.add_selinux_set_label_request(selinux_set_label_request);
  builder_.add_selinux_get_label_request(selinux_get_label_request);
  builder_.add_wipe_rom_request(wipe_rom_request);
  builder_.add_chmod_request(chmod_request);
  builder_.add_copy_request(copy_request);
  builder_.add_open_request(open_request);
  builder_.add_reboot_request(reboot_request);
  builder_.add_set_kernel_request(set_kernel_request);
  builder_.add_switch_rom_request(switch_rom_request);
  builder_.add_get_current_rom_request(get_current_rom_request);
  builder_.add_get_builtin_rom_ids_request(get_builtin_rom_ids_request);
  builder_.add_get_roms_list_request(get_roms_list_request);
  builder_.add_get_version_request(get_version_request);
  builder_.add_type(type);
  return builder_.Finish();
}

inline const Request *GetRequest(const void *buf) { return flatbuffers::GetRoot<Request>(buf); }

inline bool VerifyRequestBuffer(flatbuffers::Verifier &verifier) { return verifier.VerifyBuffer<Request>(); }

inline void FinishRequestBuffer(flatbuffers::FlatBufferBuilder &fbb, flatbuffers::Offset<Request> root) { fbb.Finish(root); }

}  // namespace v2
}  // namespace daemon
}  // namespace mbtool

#endif  // FLATBUFFERS_GENERATED_REQUEST_MBTOOL_DAEMON_V2_H_
