// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/unittest_no_arena_lite.proto

#include "google/protobuf/unittest_no_arena_lite.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace protobuf_unittest_no_arena {
class ForeignMessageLiteDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ForeignMessageLite> _instance;
} _ForeignMessageLite_default_instance_;
}  // namespace protobuf_unittest_no_arena
static void InitDefaultsscc_info_ForeignMessageLite_google_2fprotobuf_2funittest_5fno_5farena_5flite_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::protobuf_unittest_no_arena::_ForeignMessageLite_default_instance_;
    new (ptr) ::protobuf_unittest_no_arena::ForeignMessageLite();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::protobuf_unittest_no_arena::ForeignMessageLite::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ForeignMessageLite_google_2fprotobuf_2funittest_5fno_5farena_5flite_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_ForeignMessageLite_google_2fprotobuf_2funittest_5fno_5farena_5flite_2eproto}, {}};

namespace protobuf_unittest_no_arena {

// ===================================================================

void ForeignMessageLite::InitAsDefaultInstance() {
}
class ForeignMessageLite::_Internal {
 public:
  using HasBits = decltype(std::declval<ForeignMessageLite>()._has_bits_);
  static void set_has_c(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

ForeignMessageLite::ForeignMessageLite()
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protobuf_unittest_no_arena.ForeignMessageLite)
}
ForeignMessageLite::ForeignMessageLite(const ForeignMessageLite& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  c_ = from.c_;
  // @@protoc_insertion_point(copy_constructor:protobuf_unittest_no_arena.ForeignMessageLite)
}

void ForeignMessageLite::SharedCtor() {
  c_ = 0;
}

ForeignMessageLite::~ForeignMessageLite() {
  // @@protoc_insertion_point(destructor:protobuf_unittest_no_arena.ForeignMessageLite)
  SharedDtor();
}

void ForeignMessageLite::SharedDtor() {
}

void ForeignMessageLite::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ForeignMessageLite& ForeignMessageLite::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ForeignMessageLite_google_2fprotobuf_2funittest_5fno_5farena_5flite_2eproto.base);
  return *internal_default_instance();
}


void ForeignMessageLite::Clear() {
// @@protoc_insertion_point(message_clear_start:protobuf_unittest_no_arena.ForeignMessageLite)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  c_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* ForeignMessageLite::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional int32 c = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_c(&has_bits);
          c_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* ForeignMessageLite::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:protobuf_unittest_no_arena.ForeignMessageLite)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int32 c = 1;
  if (cached_has_bits & 0x00000001u) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_c(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields().data(),
        static_cast<int>(_internal_metadata_.unknown_fields().size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:protobuf_unittest_no_arena.ForeignMessageLite)
  return target;
}

size_t ForeignMessageLite::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:protobuf_unittest_no_arena.ForeignMessageLite)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional int32 c = 1;
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_c());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields().size();
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ForeignMessageLite::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::PROTOBUF_NAMESPACE_ID::internal::DownCast<const ForeignMessageLite*>(
      &from));
}

void ForeignMessageLite::MergeFrom(const ForeignMessageLite& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protobuf_unittest_no_arena.ForeignMessageLite)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_c()) {
    _internal_set_c(from._internal_c());
  }
}

void ForeignMessageLite::CopyFrom(const ForeignMessageLite& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protobuf_unittest_no_arena.ForeignMessageLite)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ForeignMessageLite::IsInitialized() const {
  return true;
}

void ForeignMessageLite::InternalSwap(ForeignMessageLite* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(c_, other->c_);
}

std::string ForeignMessageLite::GetTypeName() const {
  return "protobuf_unittest_no_arena.ForeignMessageLite";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protobuf_unittest_no_arena
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::protobuf_unittest_no_arena::ForeignMessageLite* Arena::CreateMaybeMessage< ::protobuf_unittest_no_arena::ForeignMessageLite >(Arena* arena) {
  return Arena::CreateInternal< ::protobuf_unittest_no_arena::ForeignMessageLite >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>