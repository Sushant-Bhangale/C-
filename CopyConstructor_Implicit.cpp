 ////////////////////////////////////////////////////////////////////////////////////////////////
 // CLASS NAME: Implicit CopyConstructor 
 //
 ////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class implicitCopyConstructor
{
    int var;

public:
    void Initalization(int arg)
    {
        var = arg;
    }
    int getVar()
    {
        return var;
    }
};

int main()
{
    implicitCopyConstructor object1;
    object1.Initalization(50);
    cout<<"object1.Var: "<<object1.getVar()<<endl;

    implicitCopyConstructor object2(object1); // is same like assignment
                                              //  object2 = object1;
    cout<<"object2.Var: "<<object2.getVar()<<endl;
}