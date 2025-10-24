#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cout << "masukkan jumlah angka 1: " << endl;
    cin >> x;
    cout << "masukkan jumlah angka 2: " << endl;
    cin >> y;
    if (x == 0) {
        if (y % 2 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    else if (x % 2 != 0) {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
    }

    return 0;
}
