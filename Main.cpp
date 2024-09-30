//Ќа основе проекта DynamicArray, полученного на уроке реализовать
//следующие перегрузки :
//Х DynamicArray rez = a + 10; // увеличиваем кол-во элементов на 10
//Х DynamicArray rez1 = a - 2; // удал€ем последние 2 элемента, если
//размер > 2
//Х DynamicArray rez2 = a * 2; // значение каждого элемента массива
//умножаем на 2, возвращаем новый массив
//Х DynamicArray rez3 = a - b; // разность массивов
//Х DynamicArray rez4 = a + b; // конкатенаци€ массивов
//Х ++rez; // увеличиваем кол-во элементов на 1. ¬озвращаем this
//Х --rez; // уменьшаем кол-во элементов на 1. ¬озвращаем this
//ѕродемонстрировать работу созданных операторов!

#include "DynamicArray.h"
#include <iostream>
using namespace std;

int main()
{
    DynamicArray a(5);
    a.Input();
    cout << "Array a : " << endl;
    a.Output();

    DynamicArray rez = a + 10;
    cout << "Array rez = a + 10 : " << endl;
    rez.Output();

    DynamicArray rezl = a - 2;
    cout << "Array rezl = a - 2 : " << endl;
    rezl.Output();

    DynamicArray rez2 = a * 2;
    cout << "Array rez2 = a * 2 : " << endl;
    rez2.Output();

    DynamicArray b(3);
    b.Input();
    cout << "Array b : " << endl;
    b.Output();

    DynamicArray rez3 = a - b;
    cout << "Array rez3 = a - b : " << endl;
    rez3.Output();

    DynamicArray rez4 = a + b;
    cout << "Array rez4 = a + b : " << endl;
    rez4.Output();

    ++rez;
    cout << "Array ++rez : " << endl;
    rez.Output();

    --rez;
    cout << "Array --rez : " << endl;
    rez.Output();

    return 0;
}