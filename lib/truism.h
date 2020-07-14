#include <iostream>
#include <string> 
#include <pair> 
#include <array> 

using str = std::string; 

using std::pair; 
  #define f first
  #define s second

template<class T, int SZ> using ar = std::array<T,SZ>; 

inline namespace v1 { 
  const ar<pair<str,int>, 6> subject = { {"you", 1}, {"the universe", 2}, {"existence", 2}, {"god", 2}, {"the soul", 2}, {"subjects", 2} };
    // 1 second person, 2 third person (subjects)
    
  const ar<pair<str,str>, 4> verb = { {"embody", "embodies"}, {"create", "creates"}, {"emit", "emits"}, {"run", "runs"} };
    // f second person, s third person (action verbs)
  
  const ar<str, 7> object = { "everything", "nothing", "something", "the force within", "the universe", "ideologies", "objects" };
    // (objects)
}
