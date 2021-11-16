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
/*
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
*/
// Создание обычной структуры структуры + вывод
/*
struct Product // тип данных "Продукт"
{
    string title;             // Название товара;
    long barcode;             // Штрих-код товара;
    unsigned int quantity;    // Количество товара; 
    double price;             // Цена товара; 
};
int main()
{
    setlocale(LC_ALL, "ru");

    Product n1;
    n1.title = "Coca - Cola";
    n1.barcode = 101;
    n1.quantity = 2;
    n1.price = 1.3;
    int a;
    cout << "Введите штрих-код товара: " << endl;
    cin >> a;
    if (a == n1.barcode)
    {
        cout << "Название товара: " << n1.title << endl;
        cout << "Остаток: " << n1.quantity << endl;
        cout << "Цена за едницу: " << n1.price << endl;
    }
    else
        cout << "Ошибка. Такого товара не существует!" << endl;

    return 0;
}
*/
