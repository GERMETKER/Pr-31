#include <iostream>
#include <Windows.h>
#include <random>
void RandZn(int num1, int num2, int* ykch);
void RandChToArr(int* arr, int chislo);
void ArrPrint(int* arr, int chislo);
int Ymn(int num1, int num2);
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));
    int num1, num2;
    std::cout << "Введите первое число\n";
    std::cin >> num1;
    std::cout << "Введите второе число\n";
    std::cin >> num2;
    int chislo;
    int sum;
    int* ykch = &chislo;
    std::cout << Ymn(num1, num2) << "\n";
    //RandZn(num1, num2, ykch);
    int* arr = new int(chislo);
    //RandChToArr(arr, chislo);
    //(arr, chislo);
    delete[]arr;
    return 0;
}
void RandZn(int num1, int num2, int* ykch)
{
    *ykch = num1 + rand() % num2;
}
void RandChToArr(int* arr, int chislo)
{
    for (int i = 0; i < chislo; i++)
    {
        arr[i] = 1 + rand() % 100;
    }
}
void ArrPrint(int* arr, int chislo)
{
    for (int i = 0; i < chislo; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}
int Ymn(int num1, int num2)
{
    int pl = num1;
    int n = num2;
    if (n == 1)
    {
        return pl;
    }
    else
    {
        num1 = num1 + Ymn(pl, n - 1);
    }
}
