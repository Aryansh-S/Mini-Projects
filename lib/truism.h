#include <iostream>
#include <string> 
#include <pair> 

using str = std::string; 

using std::pair; 
  #define f first
  #define s second

inline namespace v1 { 
  const pair<str,int> subject[] = { {"you", 1}, {"the universe", 2}, {"existence", 2}, {"god", 2}, {"the soul", 2}, {"subjects", 2}};
    // 1 second person, 2 third person (subjects)
    
  const pair<str,str> verb[] = { {"embody", "embodies"}, {"create", "creates"}, {"emit", "emits"}, {"run", "runs"}};
    // f second person, s third person (action verbs)
  
  const str object[] = {"everything", "nothing", "something", "the force within", "the universe", "ideologies", "objects"};
    // (objects)
}
