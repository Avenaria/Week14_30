#include <iomanip>
#include<algorithm>
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


void MassA(int*arr2, int n  ) {
    int n;
    cin >> n;
    int* arr2 = new int[n];
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        arr2[i] = rand() % 89;
        cout << arr2[i] << " ";
    }
}

void MassB(int* arr1, int m) {
    int m;
    cin >> m;
    int* arr1 = new int[m];
    srand(time(NULL));
    for (int i = 0; i < m; i++) {
        arr1[i] = rand() % 89;
        cout << arr1[i] << " ";
    }

}

void F1(int* Arr1, int m, int* Arr2, int n, int* Arr3, int c)
{
    int temp;
    for (int i = 0; i < m; i++)
    {
        temp = 0;
        for (int j = 0; j < n; j++)
        {
            if (Arr1[i] != Arr2[j])
            {
                temp++;
            }
            cout << "temp = " << temp << endl;
            if (temp == n) { Arr3[c] = Arr1[i]; c++; }
        }
        cout << endl;
    }
    delete[]Arr1;
    delete[]Arr2;
    delete[]Arr3;
}
void F2(int* Arr1, int m, int* Arr2, int n, int* Arr3, int c)
{
    int temp;
    for (int i = 0; i < m; i++)
    {
        temp = 0;
        for (int j = 0; j < n; j++)
        {
            if (Arr1[i] = Arr2[j])
            {
                temp++;
            }
            cout << "temp = " << temp << endl;
            if (temp == n) { Arr3[c] = Arr1[i]; c++; }
        }
        cout << endl;
    }
    delete[]Arr1;
    delete[]Arr2;
    delete[]Arr3;
}


int main()
{
    int n, m, c;
    cout << "Введите размер массива 1 ";
    cin >> m;
    cout << "Введите размер массива 2 ";
    cin >> n;
    int C = 0;
    int* Arr1 = new int[m];
    int* Arr2 = new int[n];
    int* Arr3 = new int[C];
    MassA(Arr2, n);
    MassB(Arr1, m);
    F1(Arr1, m, Arr2, n, Arr3, c);

    delete[]Arr1;
    delete[]Arr2;
    delete[]Arr3;


}

