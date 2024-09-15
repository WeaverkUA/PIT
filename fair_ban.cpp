/*Прогер Андрій у передостанній день зміг відправити розв’язки всіх задач, але багатьом викладачам
сподобалися далеко не всі його коди і вони почали банити деякі з них. Усього було 𝑲
викладачів, які передивлялися розв’язки Андрія. Кожен 𝒊- ий викладач забанив задачі з
𝐿𝑖 до 𝑅𝑖 включно. Після цієї жорсткої перевірки, Андрій зайшов подивитися, які з його
задач було все ж таки зараховано… ☹ */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void in_mas(int mas[], int N){
    for (int i = 1; i <= N; i++){
        cin >> mas[i];
    }
}

void out_mas_plus(int mas[], int N){
    for (int i = 1; i <= N; i++){
        if (mas[i]==0) 
        {
            cout << "- ";
        }
        else
        {
            cout << "+ ";
        }
    }
    cout << '\n';
}

void mas_fill(int mas[], int left, int right, int fill)
{
    if(left>right)swap(left, right);

    for (int i = left; i <= right; ++i)
    {
        mas[i]=fill;
    }
}

int mas[5000]={0};
int main()
{
    int N, cnt_teachers, left, right;
    cin >> N >> cnt_teachers;
    mas_fill(mas, 1, N, 1);
    for (int i = 0; i < cnt_teachers; ++i)
    {
        cin >> left >> right;
        mas_fill(mas, left, right, 0);
    }
    out_mas_plus(mas, N);
    return 0;
}