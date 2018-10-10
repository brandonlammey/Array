#ifndef ARRAYINTERFACE_H
#define ARRAYINTERFACE_H

template<typename T>
class ArrayInterface
{
	public:
	
	virtual ~ArrayInterface() {};

    //check if array is empty
    virtual bool isEmpty() const = 0;

    //check array size
    virtual int getSize() const = 0;

    //insert into array at select position
    virtual bool setValue(int index, T val) = 0;

    //add value to front of array increasing size
    virtual void addFront(T val) = 0;

    //add value to back of array increasing size
    virtual void addBack(T val) = 0;

    //send front element to back of array
    virtual bool rotateFrontToBack() = 0;

    //send last element to front of array
    virtual bool rotateBackToFront() = 0;

    //get value at select index
    virtual T getValue(int index) = 0;


    //get position of an element in an array 
    virtual int getIndex(T val) = 0;

    //get the instances of an element in an array
    virtual int getInstances(T val) = 0;

    //remove a value from the array including index and update array 
    virtual bool removeValue(T val) = 0;

    //remove a value from the array at a specific index including index and update array
    virtual bool removeValueAt(int index) = 0;

};

#endif