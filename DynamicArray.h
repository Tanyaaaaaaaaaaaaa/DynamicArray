#pragma once
#include <iostream>
using namespace std;

class DynamicArray
{
    int* ptr;
    int size;
public:
    DynamicArray();
    DynamicArray(int);
    DynamicArray(const DynamicArray&);
    ~DynamicArray();

    void Input();
    void Output() const;
    int* GetPointer() const;
    int GetSize() const;

    DynamicArray operator+(int num);
    DynamicArray operator-(int num);
    DynamicArray operator*(int num);
    DynamicArray operator-(const DynamicArray& other);
    DynamicArray operator+(const DynamicArray& other);
    DynamicArray& operator++();
    DynamicArray& operator--();
};