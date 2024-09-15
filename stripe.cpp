/*Смужка паперу має розміри А х В. Кожного разу від неї
відрізається квадрат максимального можливого розміру доти,
доки не залишиться квадрат. Скільки усього квадратів буде
отримано?*/


#include <iostream>
using namespace std;


int main()
{
    int a, b, cnt;
    cin >> a >> b;
    cnt = 0;
    while(a != 0 && b != 0)
    {
        if (a > b)
        {
            cnt=cnt + a/b;
            a%=b;
        }
        else
        {
            cnt=cnt + b/a;
            b%=a;
        }
    }
    cout << cnt;
    return 0;
}