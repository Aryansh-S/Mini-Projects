#include <iostream>
#include <fstream>
#include <string> 
using namespace std;

string yr, dif, sub, bar = "|"; 
const int fs = 75;
string qry; 

int main() {
  cin >> qry; 
  ifstream fin("tabularFma.txt");
  while(fs--) {
    fin >> yr >> dif; 
    while(1) {
      cin >> sub; if(sub == bar) break; 
      if(sub == qry) cout << yr << "\n";  
    }
  }
}
