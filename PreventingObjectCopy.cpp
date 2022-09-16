

// How many ways to prevent copy or copy constructor
// 1. Keeping Copy Constructor and Copy Assignment in Private section
// 2. Inherit a Dummy class with a private copy constructor and a private copy assignment operator.
// 3. Using Deleted copy constructor and copy assignment operator

class PreventCopy
{

    public:
        int a;
        int b;
        PreventCopy(){}
        PreventCopy(int arg)
        {
            a = arg;
        }
    private:
        PreventCopy(PreventCopy& Obj)
        {
            a = Obj.a;
        }
         // copy assignment operator
      PreventCopy& operator=(const PreventCopy& tmp_obj)
      {
          a = tmp_obj.a;
          return *this;
      }
};

// 2. using dummy base class

class dummyClass
{
    int a;
    public:
        dummyClass(){}
        dummyClass(int arg){a =arg;}
    private:
        dummyClass(const dummyClass &Obj)
        {
            a = Obj.a;
        }
        
        dummyClass& operator=(const dummyClass& Obj)
        {
            a =Obj.a;
            return *this;
        }
};

class Base : public dummyClass {
    int x;
public: 
    Base()  {   }
    Base(int y) : x(y)  {  }
};

// 3. Delete copy constructor and assignment operator

class Dcao
{
    int x;
    public:
        Dcao(){}
        Dcao(int a){
            x = a;
        }
        Dcao(const Dcao& obj) = delete;
        Dcao& operator=(const Dcao& obj) = delete;
};
int main()
{
#if 0
    PreventCopy b1(10);
    PreventCopy b2(b1); // calls copy constructor
    b2 = b1; // calls copy assignment operator
#endif

#if 0
 Base b1(10);
 Base b2(b1);
 b2=b1;
#endif
    Dcao b1(10);
    Dcao b2(b1);
    b2=b1;
    return 0;
}