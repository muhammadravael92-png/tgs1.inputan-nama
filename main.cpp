#include <iostream>
using namespace std;
int main()
{
string nama;
string ulang;

    do{
    cout << "Masukkan nama   ";
    cin >> nama;
    cout << "Namamu adalah   ";
    cout << nama <<endl;
    cout << "Apakah anda";
    cout << "mengulangkan, tekan y atau Y   ";
    cin >> ulang;
}
        while(ulang=="Y" || ulang=="y");
    
    return 0;
  system ("pause");
    }
