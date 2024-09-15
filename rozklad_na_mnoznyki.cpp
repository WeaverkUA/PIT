/*Напишіть програму, яка розкладає натуральне число на прості множники.*/


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, divider;
    cin >> N;
    divider=2;
    while(divider<=sqrt(N))
    {
        if(N%divider==0)
        {
            cout<<divider<<'*';
            N/=divider;
        }
        else divider++;

    }

    cout << N;
    return 0;
}