#pragma once

#include <map>
#include <string>
#include <vector>

#include "mapkey.h"
#include "types.h"

namespace bpftrace {

class Map {
public:
  Map(const std::string &name, const SizedType &type, const MapKey &key);
  Map(const std::string &name);
  ~Map();
  Map(const Map &) = delete;
  Map& operator=(const Map &) = delete;

  int mapfd_;
  std::string name_;
  SizedType type_;
  MapKey key_;
};

} // namespace bpftrace
