//�� ������ ������� DynamicArray, ����������� �� ����� �����������
//��������� ���������� :
//� DynamicArray rez = a + 10; // ����������� ���-�� ��������� �� 10
//� DynamicArray rez1 = a - 2; // ������� ��������� 2 ��������, ����
//������ > 2
//� DynamicArray rez2 = a * 2; // �������� ������� �������� �������
//�������� �� 2, ���������� ����� ������
//� DynamicArray rez3 = a - b; // �������� ��������
//� DynamicArray rez4 = a + b; // ������������ ��������
//� ++rez; // ����������� ���-�� ��������� �� 1. ���������� this
//� --rez; // ��������� ���-�� ��������� �� 1. ���������� this
//������������������ ������ ��������� ����������!

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