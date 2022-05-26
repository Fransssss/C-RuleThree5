// Implementation of MyClass

#include "MyClass.h"
#include <iostream>
using std::cout;
using std::endl;

MyClass::MyClass()
{
    cout << "[Default Constructor called]" << endl;
    _value = new int;                       // dynamically set a block of memory before assign a value
    *_value = 0;                            // set default value to  zeor
}

MyClass::MyClass(const MyClass &oriObj)
{
    cout << "[Copy Constructor called]" << endl;
    _value = new int;                       // dynamically set a block of memory before assign a value
    *_value = *(oriObj._value);             // set value to the value of the object in parameter
}

MyClass& MyClass::operator=(const MyClass &oriObj)
        {
            cout << "[Copy Assignment Operator= called]" << endl;
            if(this != &oriObj)            // check if the value is not the same (if its the same then no need for saving a new same value
            {
             delete _value;                // clean old data
             _value = new int;             // create a block of memory before assign a value
             *_value = *(oriObj._value);   // assign a new valuee
            }
            return *this;                   // return updated value of data member
        }

void MyClass::SetVal(const int& v)
{
    cout << "[Set a new value]" << endl;
    *_value = v;
}

int MyClass::GetVal() const
{
    return *_value;
}

MyClass::~MyClass()                        // deallocate allocated memory
{
    cout << "[Destructor called]" << endl;
    delete _value;
}