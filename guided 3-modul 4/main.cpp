#include <iostream>

using namespace std;

int main()
{
    int menu_040;

    do{
        cout << "Pilih Makanan: " << endl;
        cout << "1. Ayam Goreng" << endl;
        cout << "2. Ayam Bakar" << endl;
        cout << "3. Keluar" << endl;

        cout << "Pilih makanan: ";
        cin >> menu_040;

        switch (menu_040){
        case 1 :
            cout << "Anda memilih ayam goreng" << endl;
            break;
        case 2 :
            cout << "Anda memilih ayam bakar" << endl;
            break;
        default:
            break;
        }
    } while (menu_040 != 3);
    return 0;
}
