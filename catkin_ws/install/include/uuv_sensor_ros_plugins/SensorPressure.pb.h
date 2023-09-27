// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SensorPressure.proto

#ifndef PROTOBUF_SensorPressure_2eproto__INCLUDED
#define PROTOBUF_SensorPressure_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace sensor_msgs {
namespace msgs {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_SensorPressure_2eproto();
void protobuf_AssignDesc_SensorPressure_2eproto();
void protobuf_ShutdownFile_SensorPressure_2eproto();

class Pressure;

// ===================================================================

class Pressure : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:sensor_msgs.msgs.Pressure) */ {
 public:
  Pressure();
  virtual ~Pressure();

  Pressure(const Pressure& from);

  inline Pressure& operator=(const Pressure& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Pressure& default_instance();

  void Swap(Pressure* other);

  // implements Message ----------------------------------------------

  inline Pressure* New() const { return New(NULL); }

  Pressure* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Pressure& from);
  void MergeFrom(const Pressure& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Pressure* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required double pressure = 1 [default = 0];
  bool has_pressure() const;
  void clear_pressure();
  static const int kPressureFieldNumber = 1;
  double pressure() const;
  void set_pressure(double value);

  // required double stddev = 2 [default = -1];
  bool has_stddev() const;
  void clear_stddev();
  static const int kStddevFieldNumber = 2;
  double stddev() const;
  void set_stddev(double value);

  // optional double depth = 3 [default = -1];
  bool has_depth() const;
  void clear_depth();
  static const int kDepthFieldNumber = 3;
  double depth() const;
  void set_depth(double value);

  // @@protoc_insertion_point(class_scope:sensor_msgs.msgs.Pressure)
 private:
  inline void set_has_pressure();
  inline void clear_has_pressure();
  inline void set_has_stddev();
  inline void clear_has_stddev();
  inline void set_has_depth();
  inline void clear_has_depth();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  double pressure_;
  double stddev_;
  double depth_;
  friend void  protobuf_AddDesc_SensorPressure_2eproto();
  friend void protobuf_AssignDesc_SensorPressure_2eproto();
  friend void protobuf_ShutdownFile_SensorPressure_2eproto();

  void InitAsDefaultInstance();
  static Pressure* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Pressure

// required double pressure = 1 [default = 0];
inline bool Pressure::has_pressure() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Pressure::set_has_pressure() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Pressure::clear_has_pressure() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Pressure::clear_pressure() {
  pressure_ = 0;
  clear_has_pressure();
}
inline double Pressure::pressure() const {
  // @@protoc_insertion_point(field_get:sensor_msgs.msgs.Pressure.pressure)
  return pressure_;
}
inline void Pressure::set_pressure(double value) {
  set_has_pressure();
  pressure_ = value;
  // @@protoc_insertion_point(field_set:sensor_msgs.msgs.Pressure.pressure)
}

// required double stddev = 2 [default = -1];
inline bool Pressure::has_stddev() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Pressure::set_has_stddev() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Pressure::clear_has_stddev() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Pressure::clear_stddev() {
  stddev_ = -1;
  clear_has_stddev();
}
inline double Pressure::stddev() const {
  // @@protoc_insertion_point(field_get:sensor_msgs.msgs.Pressure.stddev)
  return stddev_;
}
inline void Pressure::set_stddev(double value) {
  set_has_stddev();
  stddev_ = value;
  // @@protoc_insertion_point(field_set:sensor_msgs.msgs.Pressure.stddev)
}

// optional double depth = 3 [default = -1];
inline bool Pressure::has_depth() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Pressure::set_has_depth() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Pressure::clear_has_depth() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Pressure::clear_depth() {
  depth_ = -1;
  clear_has_depth();
}
inline double Pressure::depth() const {
  // @@protoc_insertion_point(field_get:sensor_msgs.msgs.Pressure.depth)
  return depth_;
}
inline void Pressure::set_depth(double value) {
  set_has_depth();
  depth_ = value;
  // @@protoc_insertion_point(field_set:sensor_msgs.msgs.Pressure.depth)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace sensor_msgs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_SensorPressure_2eproto__INCLUDED
