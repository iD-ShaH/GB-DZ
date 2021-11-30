/*
#include <iostream>
using namespace std;

// Задание 1. 
void somefoo(const double arr[], const size_t someSize)

{
    for (size_t i = 0; i < someSize; i++)
    {
        cout << arr[i] << endl;
    }
}

inline void DZ1()
{
    const size_t someSize = 5;
    double arr[someSize] = { 1.11, 2.22, 3.33, 4.44, 5.55 };
    
    somefoo(arr, someSize);

    cout << endl;
}
*/
/*
// Задание 2.
#include <iostream>
using namespace std;

void __fastcall somefoo(const int arr[], const size_t size)

{
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

void __fastcall inverseBinArray(int arr[], const size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        arr[i] = (arr[i] == 1) ? 0 : 1;
    }
}

inline void DZ2()
{
    const size_t someSize = 4;
    int arr[someSize] = { 1, 0, 1, 0,};

    somefoo(arr, someSize);
    inverseBinArray(arr, someSize);
    somefoo(arr, someSize);

    cout << endl;

}

*/
// Задание 3. 
#include <iostream>
using namespace std;

void __fastcall somefoo(const int arr[], const size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

bool fillArray(int* arr, const size_t size)
{
    const int S = 3;
    for (size_t i = 0; i < size; i++) 
    {
        arr[i] = i * S + 1;
        return true;
    }
}

inline void DZ3()
{
    const size_t T = 8;
    int arr[T];

    for (fillArray(arr, T))
    {
        cout << "Array successfull filled" << endl;
        somefoo(arr, T);
        cout << endl;
    }


}