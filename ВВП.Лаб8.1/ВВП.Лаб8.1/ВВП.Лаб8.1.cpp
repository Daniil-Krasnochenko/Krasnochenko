#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    cout << "Введите размер файла в байтах:" << endl;
    int  a;
    cin >> a;
    cout << "Размер в килобайтах равен\n";
    if( a%1024==0)
        cout << a / 1024  ;
    else
        cout << a / 1024 + 1;
    return 0;
}
