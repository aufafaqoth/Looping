#include <iostream>

using namespace std;

int main()
{
    int bil1, bil2, sisa_040;

    cout << "Masukkan bilangan 1 :"; cin >> bil1;
    cout <<"Masukkan bilangan 2: "; cin >> bil2;

    if (bil1 < bil2){
    int temp = bil1;
        bil1 = bil2;
        bil2 = temp;
    }
    do {
        sisa_040 = bil1 % bil2;
        bil1 = bil2;
        bil2 = sisa_040;
    } while (sisa_040 != 0);
    cout << "Faktor Persekutuan Terbesar : " << bil1;
    return 0;
}
