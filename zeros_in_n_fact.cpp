/*Отже завдання: по заданому числу n
визначити, якою кількістю нулів закінчується десятковий запис
числа n!*/


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, cnt;
    cin >> N;
    cnt = 0;
    for (int i = 1; pow(5, i) <= N; i++)
    {
        cnt+=N/pow(5, i);
    }

    cout << cnt;
    return 0;
}