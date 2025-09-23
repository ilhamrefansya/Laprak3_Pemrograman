#include <iostream>
using namespace std;

int main(){
	int x;
	cout << "masukkan bilangan: ";
	cin >> x;
	
	if (x < 200) {
		if (x % 2 == 0 || x % 3 == 0  || x % 5 == 0 || x % 7 == 0 || x % 11 == 0 || x % 13 == 0 ){
			cout << "bukan prima";
		}
		else{
			cout << "prima";
		}
	}
	else {
		cout << "input salah";
	}
}
