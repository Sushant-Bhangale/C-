 ////////////////////////////////////////////////////////////////////////////////////////////////
 // CLASS NAME: copyConstructor
 //   
 //     Definition of copy constructor is given as “A copy constructor
 //     is a method or member function which initialize an object
 //     using another object within the same class”. 
 //
 ////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;class copyConstructor
{
    int var1, var2;

    public:
        copyConstructor(int arg1, int arg2);
        ~copyConstructor()
        {

        }
        copyConstructor(const copyConstructor & Obj);
        int getVar1(void);
        int getVar2(void);
};

copyConstructor::copyConstructor(int arg1, int arg2)
{
    var1 = arg1;
    var2 = arg2;
}

copyConstructor::copyConstructor(const copyConstructor& Obj)
{
    var1 = Obj.var1;
    var2 = Obj.var2;
}

int copyConstructor:: getVar1()
{
    return var1;
}

int copyConstructor:: getVar2()
{
    return var2;
}

int main()
{
    copyConstructor copyConstructorObj1(1,2); // Normal Constructor
    copyConstructor copyConstructorObj2 = copyConstructorObj1; // Copy Constructor
    
    cout<<"copyConstructorObj1: Var1-> "<<copyConstructorObj1.getVar1()<<endl;
    cout<<"copyConstructorObj1: Var2-> "<<copyConstructorObj1.getVar2()<<endl;
  
    cout<<"copyConstructorObj2: Var1-> "<<copyConstructorObj2.getVar1()<<endl;
    cout<<"copyConstructorObj2: Var2-> "<<copyConstructorObj2.getVar2()<<endl;
}