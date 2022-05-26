// Declrationt of MyClass

#ifndef C_RULETHREE5AA_MYCLASS_H
#define C_RULETHREE5AA_MYCLASS_H

class MyClass
{
private:
    int* _value;
public:
    MyClass();                                           // default constructor
    MyClass(const MyClass& oriObj);                      // copy constructor
    MyClass& operator=(const MyClass& oriObj);           // copy assignment operator=
    ~MyClass();                                          // destructor
    void SetVal(const int& v);
    int GetVal() const;
};


#endif //C_RULETHREE5AA_MYCLASS_H
