// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/unittest_arena.proto

#include "google/protobuf/unittest_arena.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_google_2fprotobuf_2funittest_5fno_5farena_5fimport_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ImportNoArenaNestedMessage_google_2fprotobuf_2funittest_5fno_5farena_5fimport_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_google_2fprotobuf_2funittest_5farena_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_NestedMessage_google_2fprotobuf_2funittest_5farena_2eproto;
namespace proto2_arena_unittest {
class NestedMessageDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<NestedMessage> _instance;
} _NestedMessage_default_instance_;
class ArenaMessageDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ArenaMessage> _instance;
} _ArenaMessage_default_instance_;
}  // namespace proto2_arena_unittest
static void InitDefaultsscc_info_ArenaMessage_google_2fprotobuf_2funittest_5farena_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::proto2_arena_unittest::_ArenaMessage_default_instance_;
    new (ptr) ::proto2_arena_unittest::ArenaMessage();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::proto2_arena_unittest::ArenaMessage::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_ArenaMessage_google_2fprotobuf_2funittest_5farena_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, 0, InitDefaultsscc_info_ArenaMessage_google_2fprotobuf_2funittest_5farena_2eproto}, {
      &scc_info_NestedMessage_google_2fprotobuf_2funittest_5farena_2eproto.base,
      &scc_info_ImportNoArenaNestedMessage_google_2fprotobuf_2funittest_5fno_5farena_5fimport_2eproto.base,}};

static void InitDefaultsscc_info_NestedMessage_google_2fprotobuf_2funittest_5farena_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::proto2_arena_unittest::_NestedMessage_default_instance_;
    new (ptr) ::proto2_arena_unittest::NestedMessage();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::proto2_arena_unittest::NestedMessage::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_NestedMessage_google_2fprotobuf_2funittest_5farena_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_NestedMessage_google_2fprotobuf_2funittest_5farena_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_google_2fprotobuf_2funittest_5farena_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_google_2fprotobuf_2funittest_5farena_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_google_2fprotobuf_2funittest_5farena_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_google_2fprotobuf_2funittest_5farena_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::proto2_arena_unittest::NestedMessage, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::proto2_arena_unittest::NestedMessage, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::proto2_arena_unittest::NestedMessage, d_),
  0,
  PROTOBUF_FIELD_OFFSET(::proto2_arena_unittest::ArenaMessage, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::proto2_arena_unittest::ArenaMessage, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::proto2_arena_unittest::ArenaMessage, repeated_nested_message_),
  PROTOBUF_FIELD_OFFSET(::proto2_arena_unittest::ArenaMessage, repeated_import_no_arena_message_),
  ~0u,
  ~0u,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 6, sizeof(::proto2_arena_unittest::NestedMessage)},
  { 7, 14, sizeof(::proto2_arena_unittest::ArenaMessage)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::proto2_arena_unittest::_NestedMessage_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::proto2_arena_unittest::_ArenaMessage_default_instance_),
};

const char descriptor_table_protodef_google_2fprotobuf_2funittest_5farena_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n$google/protobuf/unittest_arena.proto\022\025"
  "proto2_arena_unittest\032.google/protobuf/u"
  "nittest_no_arena_import.proto\"\032\n\rNestedM"
  "essage\022\t\n\001d\030\001 \001(\005\"\262\001\n\014ArenaMessage\022E\n\027re"
  "peated_nested_message\030\001 \003(\0132$.proto2_are"
  "na_unittest.NestedMessage\022[\n repeated_im"
  "port_no_arena_message\030\002 \003(\01321.proto2_are"
  "na_unittest.ImportNoArenaNestedMessageB\003"
  "\370\001\001"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_google_2fprotobuf_2funittest_5farena_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2funittest_5fno_5farena_5fimport_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_google_2fprotobuf_2funittest_5farena_2eproto_sccs[2] = {
  &scc_info_ArenaMessage_google_2fprotobuf_2funittest_5farena_2eproto.base,
  &scc_info_NestedMessage_google_2fprotobuf_2funittest_5farena_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_google_2fprotobuf_2funittest_5farena_2eproto_once;
static bool descriptor_table_google_2fprotobuf_2funittest_5farena_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fprotobuf_2funittest_5farena_2eproto = {
  &descriptor_table_google_2fprotobuf_2funittest_5farena_2eproto_initialized, descriptor_table_protodef_google_2fprotobuf_2funittest_5farena_2eproto, "google/protobuf/unittest_arena.proto", 323,
  &descriptor_table_google_2fprotobuf_2funittest_5farena_2eproto_once, descriptor_table_google_2fprotobuf_2funittest_5farena_2eproto_sccs, descriptor_table_google_2fprotobuf_2funittest_5farena_2eproto_deps, 2, 1,
  schemas, file_default_instances, TableStruct_google_2fprotobuf_2funittest_5farena_2eproto::offsets,
  file_level_metadata_google_2fprotobuf_2funittest_5farena_2eproto, 2, file_level_enum_descriptors_google_2fprotobuf_2funittest_5farena_2eproto, file_level_service_descriptors_google_2fprotobuf_2funittest_5farena_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_google_2fprotobuf_2funittest_5farena_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_google_2fprotobuf_2funittest_5farena_2eproto), true);
namespace proto2_arena_unittest {

// ===================================================================

void NestedMessage::InitAsDefaultInstance() {
}
class NestedMessage::_Internal {
 public:
  using HasBits = decltype(std::declval<NestedMessage>()._has_bits_);
  static void set_has_d(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

NestedMessage::NestedMessage()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:proto2_arena_unittest.NestedMessage)
}
NestedMessage::NestedMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
  _internal_metadata_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:proto2_arena_unittest.NestedMessage)
}
NestedMessage::NestedMessage(const NestedMessage& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  d_ = from.d_;
  // @@protoc_insertion_point(copy_constructor:proto2_arena_unittest.NestedMessage)
}

void NestedMessage::SharedCtor() {
  d_ = 0;
}

NestedMessage::~NestedMessage() {
  // @@protoc_insertion_point(destructor:proto2_arena_unittest.NestedMessage)
  SharedDtor();
}

void NestedMessage::SharedDtor() {
  GOOGLE_DCHECK(GetArenaNoVirtual() == nullptr);
}

void NestedMessage::ArenaDtor(void* object) {
  NestedMessage* _this = reinterpret_cast< NestedMessage* >(object);
  (void)_this;
}
void NestedMessage::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void NestedMessage::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const NestedMessage& NestedMessage::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_NestedMessage_google_2fprotobuf_2funittest_5farena_2eproto.base);
  return *internal_default_instance();
}


void NestedMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:proto2_arena_unittest.NestedMessage)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  d_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* NestedMessage::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArenaNoVirtual(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional int32 d = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_d(&has_bits);
          d_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* NestedMessage::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:proto2_arena_unittest.NestedMessage)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int32 d = 1;
  if (cached_has_bits & 0x00000001u) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_d(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto2_arena_unittest.NestedMessage)
  return target;
}

size_t NestedMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto2_arena_unittest.NestedMessage)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional int32 d = 1;
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_d());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void NestedMessage::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:proto2_arena_unittest.NestedMessage)
  GOOGLE_DCHECK_NE(&from, this);
  const NestedMessage* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<NestedMessage>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:proto2_arena_unittest.NestedMessage)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:proto2_arena_unittest.NestedMessage)
    MergeFrom(*source);
  }
}

void NestedMessage::MergeFrom(const NestedMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:proto2_arena_unittest.NestedMessage)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_d()) {
    _internal_set_d(from._internal_d());
  }
}

void NestedMessage::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:proto2_arena_unittest.NestedMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void NestedMessage::CopyFrom(const NestedMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:proto2_arena_unittest.NestedMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool NestedMessage::IsInitialized() const {
  return true;
}

void NestedMessage::InternalSwap(NestedMessage* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(d_, other->d_);
}

::PROTOBUF_NAMESPACE_ID::Metadata NestedMessage::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void ArenaMessage::InitAsDefaultInstance() {
}
class ArenaMessage::_Internal {
 public:
  using HasBits = decltype(std::declval<ArenaMessage>()._has_bits_);
};

void ArenaMessage::clear_repeated_import_no_arena_message() {
  repeated_import_no_arena_message_.Clear();
}
ArenaMessage::ArenaMessage()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:proto2_arena_unittest.ArenaMessage)
}
ArenaMessage::ArenaMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
  _internal_metadata_(arena),
  repeated_nested_message_(arena),
  repeated_import_no_arena_message_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:proto2_arena_unittest.ArenaMessage)
}
ArenaMessage::ArenaMessage(const ArenaMessage& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_),
      repeated_nested_message_(from.repeated_nested_message_),
      repeated_import_no_arena_message_(from.repeated_import_no_arena_message_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:proto2_arena_unittest.ArenaMessage)
}

void ArenaMessage::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ArenaMessage_google_2fprotobuf_2funittest_5farena_2eproto.base);
}

ArenaMessage::~ArenaMessage() {
  // @@protoc_insertion_point(destructor:proto2_arena_unittest.ArenaMessage)
  SharedDtor();
}

void ArenaMessage::SharedDtor() {
  GOOGLE_DCHECK(GetArenaNoVirtual() == nullptr);
}

void ArenaMessage::ArenaDtor(void* object) {
  ArenaMessage* _this = reinterpret_cast< ArenaMessage* >(object);
  (void)_this;
}
void ArenaMessage::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ArenaMessage::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ArenaMessage& ArenaMessage::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ArenaMessage_google_2fprotobuf_2funittest_5farena_2eproto.base);
  return *internal_default_instance();
}


void ArenaMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:proto2_arena_unittest.ArenaMessage)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  repeated_nested_message_.Clear();
  repeated_import_no_arena_message_.Clear();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* ArenaMessage::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArenaNoVirtual(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated .proto2_arena_unittest.NestedMessage repeated_nested_message = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_repeated_nested_message(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else goto handle_unusual;
        continue;
      // repeated .proto2_arena_unittest.ImportNoArenaNestedMessage repeated_import_no_arena_message = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_repeated_import_no_arena_message(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
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
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* ArenaMessage::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:proto2_arena_unittest.ArenaMessage)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto2_arena_unittest.NestedMessage repeated_nested_message = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_repeated_nested_message_size()); i < n; i++) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(1, this->_internal_repeated_nested_message(i), target, stream);
  }

  // repeated .proto2_arena_unittest.ImportNoArenaNestedMessage repeated_import_no_arena_message = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_repeated_import_no_arena_message_size()); i < n; i++) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(2, this->_internal_repeated_import_no_arena_message(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto2_arena_unittest.ArenaMessage)
  return target;
}

size_t ArenaMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto2_arena_unittest.ArenaMessage)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .proto2_arena_unittest.NestedMessage repeated_nested_message = 1;
  total_size += 1UL * this->_internal_repeated_nested_message_size();
  for (const auto& msg : this->repeated_nested_message_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated .proto2_arena_unittest.ImportNoArenaNestedMessage repeated_import_no_arena_message = 2;
  total_size += 1UL * this->_internal_repeated_import_no_arena_message_size();
  for (const auto& msg : this->repeated_import_no_arena_message_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ArenaMessage::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:proto2_arena_unittest.ArenaMessage)
  GOOGLE_DCHECK_NE(&from, this);
  const ArenaMessage* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ArenaMessage>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:proto2_arena_unittest.ArenaMessage)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:proto2_arena_unittest.ArenaMessage)
    MergeFrom(*source);
  }
}

void ArenaMessage::MergeFrom(const ArenaMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:proto2_arena_unittest.ArenaMessage)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  repeated_nested_message_.MergeFrom(from.repeated_nested_message_);
  repeated_import_no_arena_message_.MergeFrom(from.repeated_import_no_arena_message_);
}

void ArenaMessage::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:proto2_arena_unittest.ArenaMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ArenaMessage::CopyFrom(const ArenaMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:proto2_arena_unittest.ArenaMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ArenaMessage::IsInitialized() const {
  return true;
}

void ArenaMessage::InternalSwap(ArenaMessage* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  repeated_nested_message_.InternalSwap(&other->repeated_nested_message_);
  repeated_import_no_arena_message_.InternalSwap(&other->repeated_import_no_arena_message_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ArenaMessage::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto2_arena_unittest
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::proto2_arena_unittest::NestedMessage* Arena::CreateMaybeMessage< ::proto2_arena_unittest::NestedMessage >(Arena* arena) {
  return Arena::CreateMessageInternal< ::proto2_arena_unittest::NestedMessage >(arena);
}
template<> PROTOBUF_NOINLINE ::proto2_arena_unittest::ArenaMessage* Arena::CreateMaybeMessage< ::proto2_arena_unittest::ArenaMessage >(Arena* arena) {
  return Arena::CreateMessageInternal< ::proto2_arena_unittest::ArenaMessage >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>