#include <iostream>
using namespace std;

int main(){
	string nama;
	int pin;
    cout << "masukkan nama: ";
    cin >> nama;
    cout << "masukkan pin: ";
    cin >> pin;
    
	if (nama == "ugo"){
		if (0000 <= pin <= 9999){
			cout << "akses diterima";
		}
		else {
			cout << "pin invalid";
		}
		}
	else {
		cout << "user tidak dikenal";
	}
}
