#include <iostream>
using namespace std;

int main() {
	float x;
	cout << "masukkan angka: ";
	cin >> x;
	
	
		if (x >= 80) {
			cout << "A";
		}
		else if (60 <= x < 80) {
			cout << "B";
		}
		else if (40 <= x < 60){
			cout << "C";
		}
		else if (20 <= x < 40) {
			cout << "D";
	    }
		else if (x < 20) {
			cout << "E";
	    }
	}
                    
