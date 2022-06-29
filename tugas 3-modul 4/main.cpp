#include <iostream>

using namespace std;

int main()
{
    int bil1, bil2, temp_040;

    cout << "Masukkan bilangan ke-1 : "; cin >> bil1;
    cout << "Masukkan bilangan ke-2 : "; cin >> bil2;

    if (bil1 < bil2){
        temp_040 = bil1;
        bil1 = bil2;
        bil2 = temp_040;
    }

    while (bil1 % bil2 != 0){
        bil1 += bil1;
    }
     cout << "KPK : " << bil1;
    return 0;
}
