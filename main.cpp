#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;

void copyArray (int *A, int N, int *B, int N1)
void reverseArray (int *A, int N)

void fillArray (int *A, int N)
{
    for (int i = 0; i < N; i++)
        *(A + i) = 10 + rand () % (50 - 10 + 1);
}

void showArray (int *A, int N)
{
    for (int i = 0; i < N; i++)
        cout << *(A + i) << " ";
        cout << "\n";
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    int N = 10;
    int *A = new int [N];

    fillArray(A, N);
    showArray(A, N);

    delete [] A;
    return 0;
}