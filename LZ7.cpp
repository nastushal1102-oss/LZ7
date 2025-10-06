#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int n = 5;
    int a[n][n];

    cout << "Введіть елементи матриці " << n << "x" << n << ":\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }

    // Неголовна діагональ — елементи, де i + j = n - 1
    int min = a[0][n - 1]; // перший елемент неголовної діагоналі

    for (int i = 0; i < n; i++)
    {
        int j = n - 1 - i;
        if (a[i][j] < min)
            min = a[i][j];
    }

    cout << "\nМінімальний елемент неголовної діагоналі: " << min << endl;

    return 0;
}
