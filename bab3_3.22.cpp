#include <iostream>
using namespace std;
int main(){
int x;
  cout << "masukkan angka: ";
  cin >> x;
if (0 <= x < 200) {
   if ( x % 2 == 0 || x % 3 == 0 || x % 5 == 0 || x % 7 == 0 || x % 11 == 0 || x % 13 == 0){
   cout << "bukan prima";}
   else {
   cout << "prima";}
else {
  "input bukan bilangan asli dibawah 200"}
}
