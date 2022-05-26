// Title: Rule of Three
// Purpose:
// Author: Fransiskus Agapa
// Have fun - enjoy the process - practices make improvement

#include <iostream>
#include "MyClass.h"

using std::cout;
using std::endl;

int TestCopyConstructor(MyClass locObj)
{
    int sqrtVal = 0;
    sqrtVal = locObj.GetVal() * 2;
    return sqrtVal;
}


int main()
{
    cout << endl;
    MyClass fClass;                                                           // call default constructor
    MyClass sClass;
    MyClass tClass;
    int sqrtVal = 0;
    cout << endl;
    cout << "Initial Value of Objects Type Class"<< endl;
    cout << "1st object of class - val: " << fClass.GetVal() << endl;
    cout << "2nd object of class - val: " << sClass.GetVal() << endl;
    cout << "3rd object of class - val: " << tClass.GetVal() << endl;
    cout << endl;

    // Copy Constructor
    cout << "// Copy Constructor" << endl;
    fClass.SetVal(20);
    sqrtVal = TestCopyConstructor(fClass);                               // call copy constructor
    cout << "1st object of class - val: " << fClass.GetVal() << endl;
    cout << "1st object of class - sqrt val: " << sqrtVal << endl;
    cout << endl;

    // Copy Assignment Operator=
    cout << "// Copy Assignment Operator=" << endl;
    sClass.SetVal(40);
    tClass = sClass;                                                           // call copy assignment operator=
    cout << "2nd object of class - val: " << sClass.GetVal() << endl;
    cout << "3rd object of class - val: " << tClass.GetVal() << endl;
    cout << endl;

    sClass.SetVal(30);                                                      // another indication that change this value won't affect the other value of another object
    cout << "2nd object of class - val: " << sClass.GetVal() << endl;
    cout << "3rd object of class - val: " << tClass.GetVal() << endl;
    cout << endl;

    cout << "Updated Value of Objects Type Class"<< endl;
    cout << "1st object of class - val: " << fClass.GetVal() << endl;
    cout << "2nd object of class - val: " << sClass.GetVal() << endl;
    cout << "3rd object of class - val: " << tClass.GetVal() << endl;
    cout << endl;

  return 0;
}
