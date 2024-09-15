/*Увага було оголошено сигнал повітряної тривоги*/


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long N, cnt, dig;
    cin >> N;
    cnt=0;
    dig=N%10;
    while(dig==0)
    {
        N=N/10;
        dig=N%10;
    }

    while(N!=0)
    {
        N=N/10;
        dig=N%10;
        if (dig==0) cnt++;
    }

    cout << cnt-1;
    return 0;
}