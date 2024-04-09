// This program uses pointers to dynamically allocate 
// structures and class objects. 
#include <iostream>
#include <string>
#include "Rectangle.h"
#include "Person.h"
#include "MyUtiltiies.h"
using namespace std;

int main()
{
    Rectangle *pRect = nullptr;    // Pointer to Rectangle
    Person *pPerson = nullptr;     // Pointer to Person 
    MyUtilities m;

    // Local object accessed  through a pointer
    Rectangle rect;
    pRect = &rect;
    // (*pRect).setHeight(12);
    pRect->setHeight(12);
    pRect->setWidth(10);
    cout << "Area of the first rectangle is "
         << pRect->getWidth() * pRect->getHeigth();
   
    // Dynamically allocated object accessed through pointer
    pRect = new Rectangle;
    pRect->setHeight(6);
    pRect->setWidth(5);
    cout << "\nArea of the second rectangle is "
             << pRect->getWidth() * pRect->getHeigth();
    delete pRect; // memory leak problem avoided
    pRect = nullptr; // dangling pointer resolved

    // Dynamically allocated object accessed through pointer
    pPerson = new Person("Miquel E. Gonzalez", 23);
    cout << "\n\nThe person's name is " << pPerson->getName();
    cout << "\nThe person's age is " << pPerson->getAge() << endl;
    cout << "\nThe person has " << m.lengthOfName(pPerson) 
        << " letters in her/his name." << endl;
    delete pPerson;
    pPerson = nullptr;
    
    return 0;
}


