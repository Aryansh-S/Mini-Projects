#include <iostream>
#include <fstream>
#include <string> 
using namespace std;

string yr, dif, sub, bar = "|"; 
int fs = 75;

int main() {
  string qry; cin >> qry; 
  ifstream fin("tabularFma.txt");
  while(fs--) {
    fin >> yr >> dif; 
    while(1) {
      fin >> sub; if(sub == bar) break; 
      if(sub == qry) cout << yr << "\n";  
    }
  }
}
