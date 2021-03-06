/**
 * Autogenerated by Thrift Compiler (0.12.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef dgiFolderLockTypes_TYPES_H
#define dgiFolderLockTypes_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/TBase.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/stdcxx.h>
#include "dgiCommonTypes_types.h"


namespace dgi {

struct FLockObjectType {
  enum type {
    FLock_Unknown = 0,
    FLock_File = 1,
    FLock_Directory = 2,
    FLock_HardDisk = 3
  };
};

extern const std::map<int, const char*> _FLockObjectType_VALUES_TO_NAMES;

std::ostream& operator<<(std::ostream& out, const FLockObjectType::type& val);

struct FLockState {
  enum type {
    FLock_UnknownState = 0,
    FLock_Missed = 1,
    FLock_Locked = 2,
    FLock_Unlocked = 3,
    FLock_Hidden = 4,
    FLock_HiddenAndLocked = 5
  };
};

extern const std::map<int, const char*> _FLockState_VALUES_TO_NAMES;

std::ostream& operator<<(std::ostream& out, const FLockState::type& val);

typedef std::vector<class FLockObject>  FLockList;

typedef std::vector<class FLockObjectError>  FLockErrorList;

typedef std::vector<class FLockInfo>  FLockInfoList;

class FLockObject;

class FLockObjectError;

class FLockInfo;

class FLockStateResponse;

class FLockListResponse;

class FLockCacheInfo;

typedef struct _FLockObject__isset {
  _FLockObject__isset() : type(false), flockId(false), path(false) {}
  bool type :1;
  bool flockId :1;
  bool path :1;
} _FLockObject__isset;

class FLockObject : public virtual ::apache::thrift::TBase {
 public:

  FLockObject(const FLockObject&);
  FLockObject& operator=(const FLockObject&);
  FLockObject() : type((FLockObjectType::type)0), flockId(), path() {
  }

  virtual ~FLockObject() throw();
  FLockObjectType::type type;
  std::string flockId;
  std::string path;

  _FLockObject__isset __isset;

  void __set_type(const FLockObjectType::type val);

  void __set_flockId(const std::string& val);

  void __set_path(const std::string& val);

  bool operator == (const FLockObject & rhs) const
  {
    if (!(type == rhs.type))
      return false;
    if (!(flockId == rhs.flockId))
      return false;
    if (!(path == rhs.path))
      return false;
    return true;
  }
  bool operator != (const FLockObject &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const FLockObject & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(FLockObject &a, FLockObject &b);

std::ostream& operator<<(std::ostream& out, const FLockObject& obj);

typedef struct _FLockObjectError__isset {
  _FLockObjectError__isset() : erObject(false), status(false), description(false) {}
  bool erObject :1;
  bool status :1;
  bool description :1;
} _FLockObjectError__isset;

class FLockObjectError : public virtual ::apache::thrift::TBase {
 public:

  FLockObjectError(const FLockObjectError&);
  FLockObjectError& operator=(const FLockObjectError&);
  FLockObjectError() : status(( ::dgi::DgiStatus::type)0), description() {
  }

  virtual ~FLockObjectError() throw();
  FLockObject erObject;
   ::dgi::DgiStatus::type status;
  std::string description;

  _FLockObjectError__isset __isset;

  void __set_erObject(const FLockObject& val);

  void __set_status(const  ::dgi::DgiStatus::type val);

  void __set_description(const std::string& val);

  bool operator == (const FLockObjectError & rhs) const
  {
    if (!(erObject == rhs.erObject))
      return false;
    if (!(status == rhs.status))
      return false;
    if (!(description == rhs.description))
      return false;
    return true;
  }
  bool operator != (const FLockObjectError &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const FLockObjectError & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(FLockObjectError &a, FLockObjectError &b);

std::ostream& operator<<(std::ostream& out, const FLockObjectError& obj);

typedef struct _FLockInfo__isset {
  _FLockInfo__isset() : obj(false), state(false) {}
  bool obj :1;
  bool state :1;
} _FLockInfo__isset;

class FLockInfo : public virtual ::apache::thrift::TBase {
 public:

  FLockInfo(const FLockInfo&);
  FLockInfo& operator=(const FLockInfo&);
  FLockInfo() : state((FLockState::type)0) {
  }

  virtual ~FLockInfo() throw();
  FLockObject obj;
  FLockState::type state;

  _FLockInfo__isset __isset;

  void __set_obj(const FLockObject& val);

  void __set_state(const FLockState::type val);

  bool operator == (const FLockInfo & rhs) const
  {
    if (!(obj == rhs.obj))
      return false;
    if (!(state == rhs.state))
      return false;
    return true;
  }
  bool operator != (const FLockInfo &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const FLockInfo & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(FLockInfo &a, FLockInfo &b);

std::ostream& operator<<(std::ostream& out, const FLockInfo& obj);

typedef struct _FLockStateResponse__isset {
  _FLockStateResponse__isset() : result(false), flinf(false) {}
  bool result :1;
  bool flinf :1;
} _FLockStateResponse__isset;

class FLockStateResponse : public virtual ::apache::thrift::TBase {
 public:

  FLockStateResponse(const FLockStateResponse&);
  FLockStateResponse& operator=(const FLockStateResponse&);
  FLockStateResponse() {
  }

  virtual ~FLockStateResponse() throw();
   ::dgi::DgiResult result;
  FLockInfo flinf;

  _FLockStateResponse__isset __isset;

  void __set_result(const  ::dgi::DgiResult& val);

  void __set_flinf(const FLockInfo& val);

  bool operator == (const FLockStateResponse & rhs) const
  {
    if (!(result == rhs.result))
      return false;
    if (!(flinf == rhs.flinf))
      return false;
    return true;
  }
  bool operator != (const FLockStateResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const FLockStateResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(FLockStateResponse &a, FLockStateResponse &b);

std::ostream& operator<<(std::ostream& out, const FLockStateResponse& obj);

typedef struct _FLockListResponse__isset {
  _FLockListResponse__isset() : result(false), flocks(false) {}
  bool result :1;
  bool flocks :1;
} _FLockListResponse__isset;

class FLockListResponse : public virtual ::apache::thrift::TBase {
 public:

  FLockListResponse(const FLockListResponse&);
  FLockListResponse& operator=(const FLockListResponse&);
  FLockListResponse() {
  }

  virtual ~FLockListResponse() throw();
   ::dgi::DgiResult result;
  FLockInfoList flocks;

  _FLockListResponse__isset __isset;

  void __set_result(const  ::dgi::DgiResult& val);

  void __set_flocks(const FLockInfoList& val);

  bool operator == (const FLockListResponse & rhs) const
  {
    if (!(result == rhs.result))
      return false;
    if (!(flocks == rhs.flocks))
      return false;
    return true;
  }
  bool operator != (const FLockListResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const FLockListResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(FLockListResponse &a, FLockListResponse &b);

std::ostream& operator<<(std::ostream& out, const FLockListResponse& obj);

typedef struct _FLockCacheInfo__isset {
  _FLockCacheInfo__isset() : totalEntries(false), freeEntries(false), maxCollisionLength(false) {}
  bool totalEntries :1;
  bool freeEntries :1;
  bool maxCollisionLength :1;
} _FLockCacheInfo__isset;

class FLockCacheInfo : public virtual ::apache::thrift::TBase {
 public:

  FLockCacheInfo(const FLockCacheInfo&);
  FLockCacheInfo& operator=(const FLockCacheInfo&);
  FLockCacheInfo() : totalEntries(0), freeEntries(0), maxCollisionLength(0) {
  }

  virtual ~FLockCacheInfo() throw();
  int32_t totalEntries;
  int32_t freeEntries;
  int32_t maxCollisionLength;

  _FLockCacheInfo__isset __isset;

  void __set_totalEntries(const int32_t val);

  void __set_freeEntries(const int32_t val);

  void __set_maxCollisionLength(const int32_t val);

  bool operator == (const FLockCacheInfo & rhs) const
  {
    if (!(totalEntries == rhs.totalEntries))
      return false;
    if (!(freeEntries == rhs.freeEntries))
      return false;
    if (!(maxCollisionLength == rhs.maxCollisionLength))
      return false;
    return true;
  }
  bool operator != (const FLockCacheInfo &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const FLockCacheInfo & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(FLockCacheInfo &a, FLockCacheInfo &b);

std::ostream& operator<<(std::ostream& out, const FLockCacheInfo& obj);

} // namespace

#endif
