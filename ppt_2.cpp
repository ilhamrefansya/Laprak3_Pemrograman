#include <iostream>
using namespace std;
int main(){
  int a, b, op;
cout << "masukkan bilangan 1: " << endl;
  cin >> a;
cout << "masukkan bilangan 2: " << endl;
  cin >> b;
cout << "masukkan operasi 1(+), 2(-), 3(*), 4(/): " << endl;
cin >> op;
  switch  (op) {
    case 1:
    cout << "hasil: " << a + b << endl;
    break;
    case 2:
    cout << "hasil: " << a - b << endl;
    break;
    case 3:
    cout << "hasil: " << a * b << endl;
    break;
    case 4:
    cout << "hasil: " << a / b << endl;
    break;
    default:
    cout << "operasi tidak valid" << endl;  
}
}
