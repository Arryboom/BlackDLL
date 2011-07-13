// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: objects.proto

#ifndef PROTOBUF_objects_2eproto__INCLUDED
#define PROTOBUF_objects_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

namespace eveobjects {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_objects_2eproto();
void protobuf_AssignDesc_objects_2eproto();
void protobuf_ShutdownFile_objects_2eproto();

class BooleanObject;
class Interface;

// ===================================================================

class BooleanObject : public ::google::protobuf::Message {
 public:
  BooleanObject();
  virtual ~BooleanObject();
  
  BooleanObject(const BooleanObject& from);
  
  inline BooleanObject& operator=(const BooleanObject& from) {
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
  static const BooleanObject& default_instance();
  
  void Swap(BooleanObject* other);
  
  // implements Message ----------------------------------------------
  
  BooleanObject* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const BooleanObject& from);
  void MergeFrom(const BooleanObject& from);
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
  
  // required bool istrue = 1;
  inline bool has_istrue() const;
  inline void clear_istrue();
  static const int kIstrueFieldNumber = 1;
  inline bool istrue() const;
  inline void set_istrue(bool value);
  
  // @@protoc_insertion_point(class_scope:eveobjects.BooleanObject)
 private:
  inline void set_has_istrue();
  inline void clear_has_istrue();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  bool istrue_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_objects_2eproto();
  friend void protobuf_AssignDesc_objects_2eproto();
  friend void protobuf_ShutdownFile_objects_2eproto();
  
  void InitAsDefaultInstance();
  static BooleanObject* default_instance_;
};
// -------------------------------------------------------------------

class Interface : public ::google::protobuf::Message {
 public:
  Interface();
  virtual ~Interface();
  
  Interface(const Interface& from);
  
  inline Interface& operator=(const Interface& from) {
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
  static const Interface& default_instance();
  
  void Swap(Interface* other);
  
  // implements Message ----------------------------------------------
  
  Interface* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Interface& from);
  void MergeFrom(const Interface& from);
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
  
  // required string name = 1;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 1;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  
  // required int32 topleftX = 2;
  inline bool has_topleftx() const;
  inline void clear_topleftx();
  static const int kTopleftXFieldNumber = 2;
  inline ::google::protobuf::int32 topleftx() const;
  inline void set_topleftx(::google::protobuf::int32 value);
  
  // required int32 topleftY = 3;
  inline bool has_toplefty() const;
  inline void clear_toplefty();
  static const int kTopleftYFieldNumber = 3;
  inline ::google::protobuf::int32 toplefty() const;
  inline void set_toplefty(::google::protobuf::int32 value);
  
  // optional bool hasCloseButton = 4;
  inline bool has_hasclosebutton() const;
  inline void clear_hasclosebutton();
  static const int kHasCloseButtonFieldNumber = 4;
  inline bool hasclosebutton() const;
  inline void set_hasclosebutton(bool value);
  
  // optional int32 closeTopLeftX = 5;
  inline bool has_closetopleftx() const;
  inline void clear_closetopleftx();
  static const int kCloseTopLeftXFieldNumber = 5;
  inline ::google::protobuf::int32 closetopleftx() const;
  inline void set_closetopleftx(::google::protobuf::int32 value);
  
  // optional int32 closeTopLeftY = 6;
  inline bool has_closetoplefty() const;
  inline void clear_closetoplefty();
  static const int kCloseTopLeftYFieldNumber = 6;
  inline ::google::protobuf::int32 closetoplefty() const;
  inline void set_closetoplefty(::google::protobuf::int32 value);
  
  // optional bool hasContinueButton = 7;
  inline bool has_hascontinuebutton() const;
  inline void clear_hascontinuebutton();
  static const int kHasContinueButtonFieldNumber = 7;
  inline bool hascontinuebutton() const;
  inline void set_hascontinuebutton(bool value);
  
  // optional int32 continueTopLeftX = 8;
  inline bool has_continuetopleftx() const;
  inline void clear_continuetopleftx();
  static const int kContinueTopLeftXFieldNumber = 8;
  inline ::google::protobuf::int32 continuetopleftx() const;
  inline void set_continuetopleftx(::google::protobuf::int32 value);
  
  // optional int32 continueTopLeftY = 9;
  inline bool has_continuetoplefty() const;
  inline void clear_continuetoplefty();
  static const int kContinueTopLeftYFieldNumber = 9;
  inline ::google::protobuf::int32 continuetoplefty() const;
  inline void set_continuetoplefty(::google::protobuf::int32 value);
  
  // @@protoc_insertion_point(class_scope:eveobjects.Interface)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_topleftx();
  inline void clear_has_topleftx();
  inline void set_has_toplefty();
  inline void clear_has_toplefty();
  inline void set_has_hasclosebutton();
  inline void clear_has_hasclosebutton();
  inline void set_has_closetopleftx();
  inline void clear_has_closetopleftx();
  inline void set_has_closetoplefty();
  inline void clear_has_closetoplefty();
  inline void set_has_hascontinuebutton();
  inline void clear_has_hascontinuebutton();
  inline void set_has_continuetopleftx();
  inline void clear_has_continuetopleftx();
  inline void set_has_continuetoplefty();
  inline void clear_has_continuetoplefty();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* name_;
  ::google::protobuf::int32 topleftx_;
  ::google::protobuf::int32 toplefty_;
  ::google::protobuf::int32 closetopleftx_;
  bool hasclosebutton_;
  bool hascontinuebutton_;
  ::google::protobuf::int32 closetoplefty_;
  ::google::protobuf::int32 continuetopleftx_;
  ::google::protobuf::int32 continuetoplefty_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(9 + 31) / 32];
  
  friend void  protobuf_AddDesc_objects_2eproto();
  friend void protobuf_AssignDesc_objects_2eproto();
  friend void protobuf_ShutdownFile_objects_2eproto();
  
  void InitAsDefaultInstance();
  static Interface* default_instance_;
};
// ===================================================================


// ===================================================================

// BooleanObject

// required bool istrue = 1;
inline bool BooleanObject::has_istrue() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void BooleanObject::set_has_istrue() {
  _has_bits_[0] |= 0x00000001u;
}
inline void BooleanObject::clear_has_istrue() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void BooleanObject::clear_istrue() {
  istrue_ = false;
  clear_has_istrue();
}
inline bool BooleanObject::istrue() const {
  return istrue_;
}
inline void BooleanObject::set_istrue(bool value) {
  set_has_istrue();
  istrue_ = value;
}

// -------------------------------------------------------------------

// Interface

// required string name = 1;
inline bool Interface::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Interface::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Interface::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Interface::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& Interface::name() const {
  return *name_;
}
inline void Interface::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void Interface::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void Interface::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Interface::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* Interface::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required int32 topleftX = 2;
inline bool Interface::has_topleftx() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Interface::set_has_topleftx() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Interface::clear_has_topleftx() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Interface::clear_topleftx() {
  topleftx_ = 0;
  clear_has_topleftx();
}
inline ::google::protobuf::int32 Interface::topleftx() const {
  return topleftx_;
}
inline void Interface::set_topleftx(::google::protobuf::int32 value) {
  set_has_topleftx();
  topleftx_ = value;
}

// required int32 topleftY = 3;
inline bool Interface::has_toplefty() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Interface::set_has_toplefty() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Interface::clear_has_toplefty() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Interface::clear_toplefty() {
  toplefty_ = 0;
  clear_has_toplefty();
}
inline ::google::protobuf::int32 Interface::toplefty() const {
  return toplefty_;
}
inline void Interface::set_toplefty(::google::protobuf::int32 value) {
  set_has_toplefty();
  toplefty_ = value;
}

// optional bool hasCloseButton = 4;
inline bool Interface::has_hasclosebutton() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Interface::set_has_hasclosebutton() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Interface::clear_has_hasclosebutton() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Interface::clear_hasclosebutton() {
  hasclosebutton_ = false;
  clear_has_hasclosebutton();
}
inline bool Interface::hasclosebutton() const {
  return hasclosebutton_;
}
inline void Interface::set_hasclosebutton(bool value) {
  set_has_hasclosebutton();
  hasclosebutton_ = value;
}

// optional int32 closeTopLeftX = 5;
inline bool Interface::has_closetopleftx() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Interface::set_has_closetopleftx() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Interface::clear_has_closetopleftx() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Interface::clear_closetopleftx() {
  closetopleftx_ = 0;
  clear_has_closetopleftx();
}
inline ::google::protobuf::int32 Interface::closetopleftx() const {
  return closetopleftx_;
}
inline void Interface::set_closetopleftx(::google::protobuf::int32 value) {
  set_has_closetopleftx();
  closetopleftx_ = value;
}

// optional int32 closeTopLeftY = 6;
inline bool Interface::has_closetoplefty() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Interface::set_has_closetoplefty() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Interface::clear_has_closetoplefty() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Interface::clear_closetoplefty() {
  closetoplefty_ = 0;
  clear_has_closetoplefty();
}
inline ::google::protobuf::int32 Interface::closetoplefty() const {
  return closetoplefty_;
}
inline void Interface::set_closetoplefty(::google::protobuf::int32 value) {
  set_has_closetoplefty();
  closetoplefty_ = value;
}

// optional bool hasContinueButton = 7;
inline bool Interface::has_hascontinuebutton() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Interface::set_has_hascontinuebutton() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Interface::clear_has_hascontinuebutton() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Interface::clear_hascontinuebutton() {
  hascontinuebutton_ = false;
  clear_has_hascontinuebutton();
}
inline bool Interface::hascontinuebutton() const {
  return hascontinuebutton_;
}
inline void Interface::set_hascontinuebutton(bool value) {
  set_has_hascontinuebutton();
  hascontinuebutton_ = value;
}

// optional int32 continueTopLeftX = 8;
inline bool Interface::has_continuetopleftx() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void Interface::set_has_continuetopleftx() {
  _has_bits_[0] |= 0x00000080u;
}
inline void Interface::clear_has_continuetopleftx() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void Interface::clear_continuetopleftx() {
  continuetopleftx_ = 0;
  clear_has_continuetopleftx();
}
inline ::google::protobuf::int32 Interface::continuetopleftx() const {
  return continuetopleftx_;
}
inline void Interface::set_continuetopleftx(::google::protobuf::int32 value) {
  set_has_continuetopleftx();
  continuetopleftx_ = value;
}

// optional int32 continueTopLeftY = 9;
inline bool Interface::has_continuetoplefty() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void Interface::set_has_continuetoplefty() {
  _has_bits_[0] |= 0x00000100u;
}
inline void Interface::clear_has_continuetoplefty() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void Interface::clear_continuetoplefty() {
  continuetoplefty_ = 0;
  clear_has_continuetoplefty();
}
inline ::google::protobuf::int32 Interface::continuetoplefty() const {
  return continuetoplefty_;
}
inline void Interface::set_continuetoplefty(::google::protobuf::int32 value) {
  set_has_continuetoplefty();
  continuetoplefty_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace eveobjects

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_objects_2eproto__INCLUDED
