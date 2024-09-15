/*Як відомо, на сесії студенти сплять дуже мало, тому що ніч
перед екзаменом – єдиний час, коли до нього можна
готуватися. Студентка Юля записала, скільки секунд вона
спала кожну ніч впродовж сесії. Спочатку вона хотіла
попросити вас порахувати скільки мінімум вона спала за ніч,
але потім зрозуміла що це число буде занадто маленьким.
Тому вона просить вас порахувати скільки мінімум вона спала
сумарно за дві ночі підряд.*/


#include <iostream>
using namespace std;

void in_mas(int mas[], int N){
    for (int i = 0; i < N; i++){
        cin >> mas[i];
    }
}

int main()
{
    int etalon, N;
    cin >> N;
    int nights[N];
    in_mas(nights, N);
    etalon = nights[0]+nights[1];
    for (int i = 1; i < N-1; i++)
    {
        if (etalon > nights[i]+nights[i+1]) etalon = nights[i]+nights[i+1]; 
    }
    
    cout << etalon;
    return 0;
}