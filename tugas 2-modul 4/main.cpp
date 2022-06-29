#include <iostream>

using namespace std;

int main()
{
    int bil_040, pencacah, hasil = 1;

    cout << "Masukkan bilangan : ";
    cin >> bil_040;

    cout << "Masukkan pencacah : ";
    cin >> pencacah;

    cout << "Hasil pangkat : ";

    for (int i=1; i<=pencacah; i++){
        hasil*= bil_040;

    } cout << hasil;
    return 0;
}

