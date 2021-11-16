#include <iostream>
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
    double g = 10.0;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << i << endl;
    cout << f << endl;
    cout << g << endl;

    return 0;
} */


// создание enum (крестики нолики)
enum tic_tac_toe { 
    zero = 0, 
    cross = 1, 
    empty = 2
};

int mian()
{
    int tic_tac_toe[3][3] = { { 0, 0, 0 }, { 1, 1, 1 }, { 2, 2, 2 } };
    cout << tic_tac_toe[1][1] << endl;
    return 0;
}

