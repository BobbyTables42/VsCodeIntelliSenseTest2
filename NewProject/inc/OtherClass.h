#pragma once


class NewClass;
class ClassInFolder;

class OtherClass
{
public:
    OtherClass();

    void doSomething();

private:
    NewClass* pNewClass;
    ClassInFolder* pClassInFolder;
};