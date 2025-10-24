#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, s, a, p, q;
    cout << "masukkan jumlah roti: " << endl;
    cin >> r;
    cout << "masukkan jumlah daging sapi: " << endl;
    cin >> s;
    cout << "masukkan jumlah daging ayam: " << endl;
    cin >> a;
    cout << "masukkan harga burger sapi: " << endl;
    cin >> p;
    cout << "masukkan harga burger ayam: " << endl;
    cin >> q;
    
    int untung = 0;
    int roti = r / 2;
    if (p > q) {
        int burger_sapi = min(s, roti);
        untung += burger_sapi * p;
        roti -= burger_sapi;
        
        int burger_ayam = min(a, roti);
        untung += burger_ayam * q;
    } else {
        int burger_ayam = min(a, roti);
        untung += burger_ayam * q;
        roti -= burger_ayam;

        int burger_sapi = min(s, roti);
        untung += burger_sapi * p;
    }
    cout << "keuntungan maksimal adalah: " << untung << endl;

    return 0;
}
