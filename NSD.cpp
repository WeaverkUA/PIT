/*Знайти Найбільший спільний дільник*/


#include <iostream>
using namespace std;

int NSD(int x, int y)
{
   while(x!=y)
    if(x>y) x -= y;
    else y -= x;
   return x;

}

int main()
{
    int N, a, b;
    cin >> N >> a;
    for (int i = 0; i < N-1; i++)
    {
       cin >> b;
       a=NSD(a, b);
    }
    cout << a;
    return 0;
}