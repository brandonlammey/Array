#ifndef ARRAY_H
#define ARRAY_H

#include "ArrayInterface.h"
#include <iostream>

template<typename T>
class Array: public ArrayInterface<T>
{
    private:
        int m_size;
        T** m_arrPtr; //array pointer 

    public:
        //constructor for a blank array
        Array();

        //constructor for a given size array
        Array(int arrSize);

        //copy constructor for deep copy
        Array(const Array &myArr);

        //deconstructor
        ~Array();

        //check if array is empty
        bool isEmpty() const;

        //check array size
        int getSize() const;

        //insert into array at select position
        bool setValue(int index, T val);

        //add value to front of array increasing size
        void addFront(T val);

        //add value to back of array increasing size
        void addBack(T val);

        //send front element to back of array
        bool rotateFrontToBack();

        //send last element to front of array
        bool rotateBackToFront();

        //get value at select index
        T getValue(int index);

        //get position of an element in an array 
        int getIndex(T val);

        //get the instances of an element in an array
        int getInstances(T val);

        //remove a value from the array including index and update array 
        bool removeValue(T val);


};

#include "Array.hpp"
#endif