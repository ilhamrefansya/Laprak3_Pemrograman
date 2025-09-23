#include <iostream>
using namespace std;
int main(){
int x;
  cout << "masukkan bilangan bulat positif: ";
  cin >> x;
if (x >= 2) {
    if (x % 2 == 0 && x != 2) {
    cout << "bukan prima" << endl;
    }
    else {
      cout << "mungkin prima" << endl;
    }
}
else {
cout << "input tidak valid" << endl;
}
}   
