#include <iostream>
#include <clocale>
using namespace std;
// Создание и инициализация переменной + вивод

/* int main()
{
    setlocale(LC_ALL,"ru");
    short int a = 2;
    int  b = 3;
    long long c = 4;
    char d = 'z';
    bool i = true == 1;
    float  f = 10.5f;
    double g = 10.8488;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << i << endl;
    cout << f << endl;
    cout << g << endl;

    return 0;
} */


// Cоздание enum (крестики нолики) + массив + вивод

enum ME { z, c, e };

int main()
{
    ME arr[3][3] = { {z,c,e}, { c,e,z }, { e,z,c } };
    for (int z = 0; z < 3; z++)
    {
        for (int c = 0; c < 3; c++)
        {
            cout << arr[z][c] << " ";
        }
        cout << endl;
    }
    return 0;
}