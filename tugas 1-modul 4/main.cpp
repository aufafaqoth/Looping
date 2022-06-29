#include <iostream>

using namespace std;

int main()
{
    int bil_040, hasil;

    cout << "Masukkan bilangan : ";
    cin >> bil_040;

    cout  << "Total NIlai = ";


    for (int i=bil_040; i>0; i--){
        hasil += i;

        if (i!= 1){
            cout << i << " + ";
        } else {
            cout << i << " = ";

        }
    }  cout << hasil;



    return 0;
}
