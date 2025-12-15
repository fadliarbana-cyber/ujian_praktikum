#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "masukkan tinggi segitiga: ";
    cin >> n;

    for (int i = n; i >= 1; i--) {
        for (int s = 0; s < n - i; s++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}