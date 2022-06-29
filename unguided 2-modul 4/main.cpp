#include <iostream>

using namespace std;

int main()
{
    int angka_040, faktorial = 1;

    cout << "Masukkan bilangan yang akan dihitung: ";
    cin >> angka_040;

    cout << angka_040 << " ! = ";

    for (int i=angka_040; i>0; i--) {
     faktorial *= i;

     if (i !=1){
        cout << i << " x ";
     } else {
    cout << i << " = ";
    }
  } cout << faktorial << endl;


   int i;

  cout << "masukkan : ";
  cin >> angka_040;

     cout << angka_040 << "! = ";
    i = angka_040;

    while (i >= 1) {
        faktorial *= i;

        if (i != 1){
            cout << i << " x ";
        } else {
            cout << i << " = ";
        }
        i--;
    }
        cout << faktorial << endl;


     return 0;
}
