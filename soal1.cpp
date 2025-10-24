#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b, c;
    cout << "masukkan kapasitas wadah a: " << endl;
    cin >> a;
    cout << "masukkan kapasitas wadah b: " << endl;
    cin >> b;
    cout << "masukkan kapasitas gelas c: " << endl;
    cin >> c;
    
    if (c <= 0) {
        cout << "kapasitas c harus positif" << endl;
        return 1;
    }
    if (a == b) {
        cout << "jumlah langkah minimal: 0" << endl;
        return 0;
    }
    double target = (a + b) / 2.0; 
    double pindah = abs(a - target);
    double langkah = pindah / c;
    int langkahminimal = ceil(langkah);
    
    cout << "jumlah langkah minimal: " << langkahminimal << endl;

    return 0;
}
