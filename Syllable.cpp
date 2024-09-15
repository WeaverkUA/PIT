#include <iostream>
using namespace std;

int main()
{
    int num, res, dig, dec;
    cin >> num;
    res=0;
    dig=num % 10;
    dec=num / 10;
    if ((dig == 2) or (dig == 3) or (dig == 5)or (dig == 6)or (dig == 7)) res++;
    if ((dig == 1) or (dig == 8) or (dig == 9)) res=res+2;
    if ((dig == 4)) res=res+3;

    if ((dec == 1) or (dec == 2) or (dec == 3)or (dec == 4)) res=res+2;
    if ((dec == 5) or (dec == 6) or (dec == 7)) res=res+3;
    if ((dec == 8) or (dec == 9)) res=res+4;
    
    if ((num == 100) or (num == 0)) res=1;
    if (num == 14) res=4;

    cout << res;
    return 0;
}