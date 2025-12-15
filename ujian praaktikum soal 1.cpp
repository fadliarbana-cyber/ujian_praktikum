#include <iostream>

using namespace std;

int main() {
    cout << "maukkan bilangan: ";
    int a = 0;
    cin >> a;

    if (a > 10) {
        cout << "di atas 10";
    } else {
        cout << "dibawah 10";
    }

    if (a % 2 == 0) {
        cout << "genap";
    }
    else {
        cout << "ganjil";
    }
}