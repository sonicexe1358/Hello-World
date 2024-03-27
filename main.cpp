#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    int N = 10;
    int *A = new int [N];

   	for (int i = 0; i < N; i++)
       A[i] = 10 + rand () % (50 - 10 + 1);

    	for (int i = 0; i < N; i++)
        cout << A[i] << " ";
        cout << "\n";
    return 0;
}