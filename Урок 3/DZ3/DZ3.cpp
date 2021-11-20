#include <iostream>
using namespace std;

// Задание 1. Использование CStyle cast + вывод на экран;
/*
int main()
{
    
    const int a = 2;
    const int b = 3;
    const int c = 5; 
    const int d = 4;
    float sum = a * (b + (float(c) / d));
    
    cout << sum << endl;
   
    return 0;
}
*/

// Задание 2. Использование тернарного оператора ? + вывод;
/*
int main()
{
    setlocale(LC_ALL, "ru");
    
    int a, b;
    cout << "Введите число: " << endl;
    cin >> a;
    b = (a <= 21) ? 21 - a : (21 - a) * -2; // я сделал сразу умножение на отрицательное число, 
                                            // что бы удвоеная разница разница была позитивным числом; 

    cout << "Результат: " << b << endl;

    return 0;
}
*/

// Задание 3. Использование 3-х мерного масива с указателем на центральную ячейку;
/*
int main()
{
    setlocale(LC_ALL, "ru");
    const int Arr = 3;
    int arr[Arr][Arr][Arr];
    int* pArr = nullptr;
    pArr = &arr[1][1][1];
    *pArr = 10000;
    cout << *pArr << endl;

    return 0;
}
*/

// Задание 4. Использование extern на переменные объявленые и инициализирование в Sourse.cpp + выражение; 
/*
extern int a, b, c, d;

int main()
{
    float sum = a * (b + (float(c) / d));

    cout << sum << endl;

    return 0;

return 0;
}
*/