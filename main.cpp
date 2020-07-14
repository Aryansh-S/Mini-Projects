#include "project-headers.h"

str fin;  
const bool cmpnd = 1; 

template<class T> inline size_t get(T var) { return rand(0, var.size() - 1); }

inline str sent() {
  const auto sb = subject[get(subject)];
  const str sb_str = sb.f; 
  const auto vb = verb[get(verb)]; 
  const str vb_str = sb.s == 1 ? vb.f : vb.s; 
  const str ob_str = object[get(object)]; 
  return sb_str + vb_str + ob_str; 
}

int main() {
  std::cin.tie(0)->sync_with_stdio(0); 
  
  fin = sent(); 
  if(cmpnd) fin += ", but ", fin += sent(); 
  
  std::cout << fin << "\n"; 
}
