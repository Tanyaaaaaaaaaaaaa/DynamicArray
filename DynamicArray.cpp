#include "DynamicArray.h"
#include <iostream>
#include <Windows.h>

DynamicArray::DynamicArray() : ptr(nullptr), size(0)
{}

DynamicArray::DynamicArray(int S)
{
    cout << "Construct by 1 param\n";
    size = S;
    ptr = new int[S];
}

DynamicArray::DynamicArray(const DynamicArray& a)
{
    cout << "Copy construct\n";
    size = a.size;
    ptr = new int[size];
    for (int i = 0; i < size; i++)
    {
        ptr[i] = a.ptr[i];
    }
}

DynamicArray::~DynamicArray()
{
    cout << "Destruct\n";
    delete[] ptr;
}

void DynamicArray::Input()
{
    for (int i = 0; i < size; i++)
    {
        ptr[i] = rand() % 20;
    }
}

void DynamicArray::Output() const
{
    for (int i = 0; i < size; i++)
    {
        cout << ptr[i] << "\t";
    }
    cout << "\n---------------------------------\n";
}

int* DynamicArray::GetPointer() const
{
    return ptr;
}

int DynamicArray::GetSize() const
{
    return size;
}

DynamicArray DynamicArray::operator+(int num)
{
    DynamicArray result(size + num);
    for (int i = 0; i < size; i++)
    {
        result.ptr[i] = ptr[i];
    }
    for (int i = size; i < result.size; i++)
    {
        result.ptr[i] = 0;
    }
    return result;
}

DynamicArray DynamicArray::operator-(int num)
{
    if (size > num)
    {
        DynamicArray result(size - num);
        for (int i = 0; i < result.size; i++)
        {
            result.ptr[i] = ptr[i];
        }
        return result;
    }
    else
    {
        return *this;
    }
}

DynamicArray DynamicArray::operator*(int num)
{
    DynamicArray result(size);
    for (int i = 0; i < size; i++)
    {
        result.ptr[i] = ptr[i] * num;
    }
    return result;
}

DynamicArray DynamicArray::operator-(const DynamicArray& other)
{
    int newSize = (size > other.size) ? size : other.size;
    DynamicArray result(newSize);
    for (int i = 0; i < newSize; i++)
    {
        if (i < size && i < other.size)
            result.ptr[i] = ptr[i] - other.ptr[i];
        else if (i < size)
            result.ptr[i] = ptr[i];
        else
            result.ptr[i] = -other.ptr[i];
    }
    return result;
}

DynamicArray DynamicArray::operator+(const DynamicArray& other)
{
    DynamicArray result(size + other.size);
    for (int i = 0; i < size; i++)
    {
        result.ptr[i] = ptr[i];
    }
    for (int i = 0; i < other.size; i++)
    {
        result.ptr[size + i] = other.ptr[i];
    }
    return result;
}

DynamicArray& DynamicArray::operator++()
{
    DynamicArray temp(size + 1);
    for (int i = 0; i < size; i++)
    {
        temp.ptr[i] = ptr[i];
    }
    temp.ptr[size] = 0;
    delete[] ptr;
    ptr = temp.ptr;
    temp.ptr = nullptr;
    ++size;
    return *this;
}

DynamicArray& DynamicArray::operator--()
{
    if (size > 0)
    {
        DynamicArray temp(size - 1);
        for (int i = 0; i < temp.size; i++)
        {
            temp.ptr[i] = ptr[i];
        }
        delete[] ptr;
        ptr = temp.ptr;
        temp.ptr = nullptr;
        --size;
    }
    return *this;
}