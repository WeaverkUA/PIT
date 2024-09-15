/*На горищі у Нікіти стоять дві коробки — перша розмірами
А*B*C і друга розмірами X*Y*Z. Мама попросила його
перевірити, чи не можна одну з них покласти всередину іншої,
щоб вони займали менше місця. Нумо разом розберемось з
цим!*/


#include <iostream>
using namespace std;

void in_mas(int mas[], int N){
    for (int i = 0; i < N; i++){
        cin >> mas[i];
    }
}

void sort_mas(int mas[], int N){
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N-1; j++){
            if (mas[j]>mas[j+1]) swap(mas[j], mas[j+1]);
        }
    }
}

int main()
{
    int box1[3];
    int box2[3];  
    in_mas(box1, 3);
    in_mas(box2, 3);
    sort_mas(box1, 3);
    sort_mas(box2, 3);

    if ((box1[0]==box2[0]) and (box1[1]==box2[1]) and (box1[2]==box2[2]))
    {
        cout << "Boxes are equal";
        return 0;
    }
    else
    {
        if ((box1[0]<=box2[0]) and (box1[1]<=box2[1]) and (box1[2]<=box2[2]))
        {
            cout << "The first box is smaller than the second one";
            return 0;
        }
        else
        {
            if ((box1[0]>=box2[0]) and (box1[1]>=box2[1]) and (box1[2]>=box2[2]))
            {
                cout << "The first box is larger than the second one";
                return 0;
            }
        }

    }

    cout << "Boxes are incomparable";
    return 0;
}