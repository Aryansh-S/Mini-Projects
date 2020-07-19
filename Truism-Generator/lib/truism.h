#include <iostream>
#include <string> 
#include <utility>
#include <vector>

using str = std::string; 

using std::pair; 
  #define f first
  #define s second
  #define mp std::make_pair

template<class T> using vec = std::vector<T>; 

inline namespace v1 { 
  const vec<pair<str,int>> subject = { mp("you", 1), mp("the universe", 2), mp("existence", 2), mp("god", 2), mp("the soul", 2), mp("subjects", 2) };
    // 1 second person, 2 third person (subjects)
    
  const vec<pair<str,str>> verb = { mp("embody", "embodies"), mp("create", "creates"), mp("emit", "emits"), mp("run", "runs") };
    // f second person, s third person (action verbs)
  
  const vec<str> object = { "everything", "nothing", "something", "the force within", "the universe", "ideologies", "objects" };
    // (objects)
}
