#include <iostream>
using namespace std;

int main(){
	int x;
	cout << "masukkan bilangan: ";
	cin >> x;
	if (x % 2 == 0) {
		cout << "genap";
	}
	else if (x % 2 == 1) {
		cout << "ganjil";
	}
	else if (x < 0) {
		cout << "negatif";
	}
	else {
		cout << "nol";
	}
		
}
