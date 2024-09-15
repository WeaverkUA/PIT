/*Олексій Красний іде на битву зі Змієм Гориничем. У Змія
всього на початку битви M голів. Красний за один удар зрубає
N голів, але після удару Змій регенерує К голів. Далі процес
повторюється, поки голови в Змія не закінчуються. Напишіть
програму, яка визначить, чи зможе Олексій перемогти Змія, і
скільки ударів йому доведеться зробити.*/


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int hit, heads, regen, cnt;
    cin >> hit >> heads >> regen;
    if (hit>=heads)
    {
        cout << 1;
        return 0;
    }
    else
    {
        if (hit<=regen)
        {
            cout << "NO";
            return 0;
        }
        else
        {
            cnt=1+(heads-regen)/(hit-regen);
        }
        if ((heads-regen)%(hit-regen)!=0) cnt++;

    }

    cout << cnt;
    return 0;
}