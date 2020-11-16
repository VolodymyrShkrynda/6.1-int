// ����������� �����
// 22 ������
#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;

void Create(int* t, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        t[i] = Low + rand() % (High - Low + 1);
}

void Print(int* t, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << t[i];
    cout << endl;
}

int Sum(int* t, const int size)
{
    int j = 0;
    int S = 0;
    for (int i = 0; i < size; i++)
        if ((t[i] % 2 == 0) || (t[i] > 0))
            S += t[i];
    return S;
}

void Replacing(int* t, const int size)
{
    for (int i = 0; i < size; i++)
        if ((t[i] % 2 == 0) || (t[i] > 0))
            cout << 0 << "  ";
        else
            cout << t[i] << "  ";
}

int Count(int* t, const int size)
{
    int j = 0;
    for (int i = 0; i < size; i++)
        if ((t[i] % 2 == 0) || (t[i] > 0))
            j++;
    return j;
}

int main()
{
    setlocale(LC_ALL, "Ukrainian");
    srand((unsigned)time(NULL));

    const int n = 25;
    int t[n];

    int Low = -5;
    int High = 12;

    Create(t, n, Low, High);
    cout << "���������� �����" << endl;
    Print(t, n);
    cout << endl;

    cout << "���� ����i���� �������i�" << endl;
    cout << "S = " << Sum(t, n) << endl;
    cout << endl;

    cout << "�i���i��� ����i���� �������i�" << endl;
    cout << "j = " << Count(t, n) << endl;
    cout << endl;

    cout << "���i�� ����i���� �������i�" << endl;
    Replacing(t, n);
    cout << endl;

    system("pause");
    return 0;
}