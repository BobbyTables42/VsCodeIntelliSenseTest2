
#include "OtherClass.h"
#include "NewClass.h"
#include "Folder/ClassInFolder.h"
#include <iostream>

OtherClass::OtherClass()
:pNewClass(new NewClass())
,pClassInFolder(new ClassInFolder())
{
}

void OtherClass::doSomething()
{
    std::cout << "Hello from OtherClass!" << std::endl;

    pNewClass->sayHello();
    pClassInFolder->saySomething();
}