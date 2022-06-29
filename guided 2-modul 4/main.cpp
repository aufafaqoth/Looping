#include <iostream>

using namespace std;

int main()
{
    int kelipatan_040, angka;

    cout << "Masukkan kelipatan: ";
    cin >> kelipatan_040;

    angka = kelipatan_040;

    while (angka <=15) {
        cout << angka << endl;
        angka += kelipatan_040; // angka = angka + kelipatan
    }

    cout << "\n\nIni program do while" <<endl;

    cout <<" Masukkan Kelipatan: ";
    cin >> kelipatan_040;

    angka = kelipatan_040;

    do {
        cout << angka << endl;

        angka+= kelipatan_040;

    } while (angka<=15);
    return 0;
}
