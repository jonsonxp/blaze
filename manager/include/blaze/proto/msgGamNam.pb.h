// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: msgGamNam.proto

#ifndef PROTOBUF_msgGamNam_2eproto__INCLUDED
#define PROTOBUF_msgGamNam_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace blaze {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_msgGamNam_2eproto();
void protobuf_AssignDesc_msgGamNam_2eproto();
void protobuf_ShutdownFile_msgGamNam_2eproto();

class Gam2NamRequest;
class Accelerator;
class Nam2GamAccNames;

enum Gam2NamRequest_MsgType {
  Gam2NamRequest_MsgType_ACCNAMES = 0,
  Gam2NamRequest_MsgType_SHARERATE = 1
};
bool Gam2NamRequest_MsgType_IsValid(int value);
const Gam2NamRequest_MsgType Gam2NamRequest_MsgType_MsgType_MIN = Gam2NamRequest_MsgType_ACCNAMES;
const Gam2NamRequest_MsgType Gam2NamRequest_MsgType_MsgType_MAX = Gam2NamRequest_MsgType_SHARERATE;
const int Gam2NamRequest_MsgType_MsgType_ARRAYSIZE = Gam2NamRequest_MsgType_MsgType_MAX + 1;

const ::google::protobuf::EnumDescriptor* Gam2NamRequest_MsgType_descriptor();
inline const ::std::string& Gam2NamRequest_MsgType_Name(Gam2NamRequest_MsgType value) {
  return ::google::protobuf::internal::NameOfEnum(
    Gam2NamRequest_MsgType_descriptor(), value);
}
inline bool Gam2NamRequest_MsgType_Parse(
    const ::std::string& name, Gam2NamRequest_MsgType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Gam2NamRequest_MsgType>(
    Gam2NamRequest_MsgType_descriptor(), name, value);
}
// ===================================================================

class Gam2NamRequest : public ::google::protobuf::Message {
 public:
  Gam2NamRequest();
  virtual ~Gam2NamRequest();

  Gam2NamRequest(const Gam2NamRequest& from);

  inline Gam2NamRequest& operator=(const Gam2NamRequest& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Gam2NamRequest& default_instance();

  void Swap(Gam2NamRequest* other);

  // implements Message ----------------------------------------------

  Gam2NamRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Gam2NamRequest& from);
  void MergeFrom(const Gam2NamRequest& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef Gam2NamRequest_MsgType MsgType;
  static const MsgType ACCNAMES = Gam2NamRequest_MsgType_ACCNAMES;
  static const MsgType SHARERATE = Gam2NamRequest_MsgType_SHARERATE;
  static inline bool MsgType_IsValid(int value) {
    return Gam2NamRequest_MsgType_IsValid(value);
  }
  static const MsgType MsgType_MIN =
    Gam2NamRequest_MsgType_MsgType_MIN;
  static const MsgType MsgType_MAX =
    Gam2NamRequest_MsgType_MsgType_MAX;
  static const int MsgType_ARRAYSIZE =
    Gam2NamRequest_MsgType_MsgType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  MsgType_descriptor() {
    return Gam2NamRequest_MsgType_descriptor();
  }
  static inline const ::std::string& MsgType_Name(MsgType value) {
    return Gam2NamRequest_MsgType_Name(value);
  }
  static inline bool MsgType_Parse(const ::std::string& name,
      MsgType* value) {
    return Gam2NamRequest_MsgType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required .blaze.Gam2NamRequest.MsgType type = 1;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline ::blaze::Gam2NamRequest_MsgType type() const;
  inline void set_type(::blaze::Gam2NamRequest_MsgType value);

  // optional bool pull = 2 [default = false];
  inline bool has_pull() const;
  inline void clear_pull();
  static const int kPullFieldNumber = 2;
  inline bool pull() const;
  inline void set_pull(bool value);

  // @@protoc_insertion_point(class_scope:blaze.Gam2NamRequest)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_pull();
  inline void clear_has_pull();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  int type_;
  bool pull_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_msgGamNam_2eproto();
  friend void protobuf_AssignDesc_msgGamNam_2eproto();
  friend void protobuf_ShutdownFile_msgGamNam_2eproto();

  void InitAsDefaultInstance();
  static Gam2NamRequest* default_instance_;
};
// -------------------------------------------------------------------

class Accelerator : public ::google::protobuf::Message {
 public:
  Accelerator();
  virtual ~Accelerator();

  Accelerator(const Accelerator& from);

  inline Accelerator& operator=(const Accelerator& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Accelerator& default_instance();

  void Swap(Accelerator* other);

  // implements Message ----------------------------------------------

  Accelerator* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Accelerator& from);
  void MergeFrom(const Accelerator& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string acc_name = 1;
  inline bool has_acc_name() const;
  inline void clear_acc_name();
  static const int kAccNameFieldNumber = 1;
  inline const ::std::string& acc_name() const;
  inline void set_acc_name(const ::std::string& value);
  inline void set_acc_name(const char* value);
  inline void set_acc_name(const char* value, size_t size);
  inline ::std::string* mutable_acc_name();
  inline ::std::string* release_acc_name();
  inline void set_allocated_acc_name(::std::string* acc_name);

  // optional string device_name = 2;
  inline bool has_device_name() const;
  inline void clear_device_name();
  static const int kDeviceNameFieldNumber = 2;
  inline const ::std::string& device_name() const;
  inline void set_device_name(const ::std::string& value);
  inline void set_device_name(const char* value);
  inline void set_device_name(const char* value, size_t size);
  inline ::std::string* mutable_device_name();
  inline ::std::string* release_device_name();
  inline void set_allocated_device_name(::std::string* device_name);

  // @@protoc_insertion_point(class_scope:blaze.Accelerator)
 private:
  inline void set_has_acc_name();
  inline void clear_has_acc_name();
  inline void set_has_device_name();
  inline void clear_has_device_name();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* acc_name_;
  ::std::string* device_name_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_msgGamNam_2eproto();
  friend void protobuf_AssignDesc_msgGamNam_2eproto();
  friend void protobuf_ShutdownFile_msgGamNam_2eproto();

  void InitAsDefaultInstance();
  static Accelerator* default_instance_;
};
// -------------------------------------------------------------------

class Nam2GamAccNames : public ::google::protobuf::Message {
 public:
  Nam2GamAccNames();
  virtual ~Nam2GamAccNames();

  Nam2GamAccNames(const Nam2GamAccNames& from);

  inline Nam2GamAccNames& operator=(const Nam2GamAccNames& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Nam2GamAccNames& default_instance();

  void Swap(Nam2GamAccNames* other);

  // implements Message ----------------------------------------------

  Nam2GamAccNames* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Nam2GamAccNames& from);
  void MergeFrom(const Nam2GamAccNames& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional bool isUpdated = 1 [default = false];
  inline bool has_isupdated() const;
  inline void clear_isupdated();
  static const int kIsUpdatedFieldNumber = 1;
  inline bool isupdated() const;
  inline void set_isupdated(bool value);

  // repeated .blaze.Accelerator acc_names = 2;
  inline int acc_names_size() const;
  inline void clear_acc_names();
  static const int kAccNamesFieldNumber = 2;
  inline const ::blaze::Accelerator& acc_names(int index) const;
  inline ::blaze::Accelerator* mutable_acc_names(int index);
  inline ::blaze::Accelerator* add_acc_names();
  inline const ::google::protobuf::RepeatedPtrField< ::blaze::Accelerator >&
      acc_names() const;
  inline ::google::protobuf::RepeatedPtrField< ::blaze::Accelerator >*
      mutable_acc_names();

  // @@protoc_insertion_point(class_scope:blaze.Nam2GamAccNames)
 private:
  inline void set_has_isupdated();
  inline void clear_has_isupdated();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::blaze::Accelerator > acc_names_;
  bool isupdated_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_msgGamNam_2eproto();
  friend void protobuf_AssignDesc_msgGamNam_2eproto();
  friend void protobuf_ShutdownFile_msgGamNam_2eproto();

  void InitAsDefaultInstance();
  static Nam2GamAccNames* default_instance_;
};
// ===================================================================


// ===================================================================

// Gam2NamRequest

// required .blaze.Gam2NamRequest.MsgType type = 1;
inline bool Gam2NamRequest::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Gam2NamRequest::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Gam2NamRequest::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Gam2NamRequest::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::blaze::Gam2NamRequest_MsgType Gam2NamRequest::type() const {
  return static_cast< ::blaze::Gam2NamRequest_MsgType >(type_);
}
inline void Gam2NamRequest::set_type(::blaze::Gam2NamRequest_MsgType value) {
  assert(::blaze::Gam2NamRequest_MsgType_IsValid(value));
  set_has_type();
  type_ = value;
}

// optional bool pull = 2 [default = false];
inline bool Gam2NamRequest::has_pull() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Gam2NamRequest::set_has_pull() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Gam2NamRequest::clear_has_pull() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Gam2NamRequest::clear_pull() {
  pull_ = false;
  clear_has_pull();
}
inline bool Gam2NamRequest::pull() const {
  return pull_;
}
inline void Gam2NamRequest::set_pull(bool value) {
  set_has_pull();
  pull_ = value;
}

// -------------------------------------------------------------------

// Accelerator

// optional string acc_name = 1;
inline bool Accelerator::has_acc_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Accelerator::set_has_acc_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Accelerator::clear_has_acc_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Accelerator::clear_acc_name() {
  if (acc_name_ != &::google::protobuf::internal::kEmptyString) {
    acc_name_->clear();
  }
  clear_has_acc_name();
}
inline const ::std::string& Accelerator::acc_name() const {
  return *acc_name_;
}
inline void Accelerator::set_acc_name(const ::std::string& value) {
  set_has_acc_name();
  if (acc_name_ == &::google::protobuf::internal::kEmptyString) {
    acc_name_ = new ::std::string;
  }
  acc_name_->assign(value);
}
inline void Accelerator::set_acc_name(const char* value) {
  set_has_acc_name();
  if (acc_name_ == &::google::protobuf::internal::kEmptyString) {
    acc_name_ = new ::std::string;
  }
  acc_name_->assign(value);
}
inline void Accelerator::set_acc_name(const char* value, size_t size) {
  set_has_acc_name();
  if (acc_name_ == &::google::protobuf::internal::kEmptyString) {
    acc_name_ = new ::std::string;
  }
  acc_name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Accelerator::mutable_acc_name() {
  set_has_acc_name();
  if (acc_name_ == &::google::protobuf::internal::kEmptyString) {
    acc_name_ = new ::std::string;
  }
  return acc_name_;
}
inline ::std::string* Accelerator::release_acc_name() {
  clear_has_acc_name();
  if (acc_name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = acc_name_;
    acc_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Accelerator::set_allocated_acc_name(::std::string* acc_name) {
  if (acc_name_ != &::google::protobuf::internal::kEmptyString) {
    delete acc_name_;
  }
  if (acc_name) {
    set_has_acc_name();
    acc_name_ = acc_name;
  } else {
    clear_has_acc_name();
    acc_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string device_name = 2;
inline bool Accelerator::has_device_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Accelerator::set_has_device_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Accelerator::clear_has_device_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Accelerator::clear_device_name() {
  if (device_name_ != &::google::protobuf::internal::kEmptyString) {
    device_name_->clear();
  }
  clear_has_device_name();
}
inline const ::std::string& Accelerator::device_name() const {
  return *device_name_;
}
inline void Accelerator::set_device_name(const ::std::string& value) {
  set_has_device_name();
  if (device_name_ == &::google::protobuf::internal::kEmptyString) {
    device_name_ = new ::std::string;
  }
  device_name_->assign(value);
}
inline void Accelerator::set_device_name(const char* value) {
  set_has_device_name();
  if (device_name_ == &::google::protobuf::internal::kEmptyString) {
    device_name_ = new ::std::string;
  }
  device_name_->assign(value);
}
inline void Accelerator::set_device_name(const char* value, size_t size) {
  set_has_device_name();
  if (device_name_ == &::google::protobuf::internal::kEmptyString) {
    device_name_ = new ::std::string;
  }
  device_name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Accelerator::mutable_device_name() {
  set_has_device_name();
  if (device_name_ == &::google::protobuf::internal::kEmptyString) {
    device_name_ = new ::std::string;
  }
  return device_name_;
}
inline ::std::string* Accelerator::release_device_name() {
  clear_has_device_name();
  if (device_name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = device_name_;
    device_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Accelerator::set_allocated_device_name(::std::string* device_name) {
  if (device_name_ != &::google::protobuf::internal::kEmptyString) {
    delete device_name_;
  }
  if (device_name) {
    set_has_device_name();
    device_name_ = device_name;
  } else {
    clear_has_device_name();
    device_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// -------------------------------------------------------------------

// Nam2GamAccNames

// optional bool isUpdated = 1 [default = false];
inline bool Nam2GamAccNames::has_isupdated() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Nam2GamAccNames::set_has_isupdated() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Nam2GamAccNames::clear_has_isupdated() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Nam2GamAccNames::clear_isupdated() {
  isupdated_ = false;
  clear_has_isupdated();
}
inline bool Nam2GamAccNames::isupdated() const {
  return isupdated_;
}
inline void Nam2GamAccNames::set_isupdated(bool value) {
  set_has_isupdated();
  isupdated_ = value;
}

// repeated .blaze.Accelerator acc_names = 2;
inline int Nam2GamAccNames::acc_names_size() const {
  return acc_names_.size();
}
inline void Nam2GamAccNames::clear_acc_names() {
  acc_names_.Clear();
}
inline const ::blaze::Accelerator& Nam2GamAccNames::acc_names(int index) const {
  return acc_names_.Get(index);
}
inline ::blaze::Accelerator* Nam2GamAccNames::mutable_acc_names(int index) {
  return acc_names_.Mutable(index);
}
inline ::blaze::Accelerator* Nam2GamAccNames::add_acc_names() {
  return acc_names_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::blaze::Accelerator >&
Nam2GamAccNames::acc_names() const {
  return acc_names_;
}
inline ::google::protobuf::RepeatedPtrField< ::blaze::Accelerator >*
Nam2GamAccNames::mutable_acc_names() {
  return &acc_names_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace blaze

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::blaze::Gam2NamRequest_MsgType>() {
  return ::blaze::Gam2NamRequest_MsgType_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_msgGamNam_2eproto__INCLUDED
