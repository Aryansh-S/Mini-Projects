#pragma once

#include "lib/truism.h"
#include <random> 

inline namespace rando {
  template<class T> inline T rand(T l, T r) {
    std::random_device device;
    std::mt19937 generator(device());
    std::uniform_int_distribution<T> distribution(l,r); 
    return distribution(generator); 
  }
}
