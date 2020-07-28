#include <iostream>
#include <fstream>
#include <string> 
using namespace std;

string yr, dif, sub, bar = "|"; 

int main() {
  string qry; cin >> qry; 
  ifstream fin("tabularFma.txt");
  while(1) {
    fin >> yr; if(yr == "EOF") break; 
    fin >> dif; 
    while(1) {
      fin >> sub; if(sub == bar) break; 
      if(sub == qry) cout << yr << "\n";
    }
  }
}
