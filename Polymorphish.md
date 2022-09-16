## What is Polymorphism?
   Polymorphis in C++ means, the same entity (function or object) behaves differebtly in different
   scenarios.
                                    OR
    Polymorphis in C++ allows us to resuse code by creating one function thats usable for multiple uses.
    We can aslo operator polymorphic and use them to add not only numbers but also combine string. This saves time and allows for a more stramlined program

## Types of Polymorphism
    1. Compile Time Polymorphism (Static or Early binding)
        a. Method / Function  overloading 
        b. Operator overloading
    2. Run Time Polymorphism (Dynamic or Late binding)
        a. Virutal function
        b. Function Overriding
        
## 1.  Compile Time Polymorphism:
        When we invoke the overloaded functions by matching the number and type of arguments. The information is present during compile-time. This means the C++ compiler will select the right 
        function at compile time
                                    OR
        Compile time polymorphism takes place when program is begin compiled. C++ polymorphism occurs in this phase when either a function or an operator is overloaded. THis type of polymorphism iis also known as static or early binding.

        Compile-time polymorphism is only achived through function overloading and operator overloading.

    a. Function Overloading:
       Function overloading allows us to use the same function multiple times, with the action or output of that function depends on its assigned data type.
                                    OR
        Function overloading means one function can perform many tasks. In C++, a single function is used to perform many tasks with the same name and different types of arguments. 
        
        Example:
            void FunctionOverloading(int,int int);
            void FunctionOverloading(int,int);            
   	    
        Rules:
			1. The same function name is used for more than one function definition
			2. The functions must differ either by the arity or types of their parameters
            3. Default Parameter not allowed

    b. Operator Overloading:
        Operator overloading menas defining additional task to operators without changing its actual meaning.
                                    OR
        C++ allows us to add additional tasks to operators by using the operator keyword followed by the operator it self. Operators covers a wide range of uses in C++, from arithmatic to  comparisons and logical statement. We can give a special meaning to an operator for a particular class without changing its original meaning for the rest of the program

        The purpose of operator overloading is to provide a special meaning to the user-defined data types.
         The advantage of Operators overloading is to perform different operations on the same operand.

        Example:
            class_name operator +(const class_object &)
            class_name operator -(const class_object &)
        Rules:
            1.Only built-in operators can be overloaded.
			2. Degree or arity of the operators cannot be changed.
			3. Precedence and associativity of the operator cannot be changed.
			4. Overloaded operator cannot have default arguments, except for () operator.
			5. =, [], (), -> must be defined as member functions. Remaining operators can be either
               member or non-member functions
			6. Some operators like =, &, and comma operator are already overloaded by default.
			7. Operators like ::, dot, and ?: cannot be overloaded.
            
## 2.  Run Time Polymorphism:
        Runtime polymorphism in C++ uses function overriding and takes place while a program is in the run state. In this form of polymorphism, the program has to discover which definition of a function its needs to use based on the information in the main() function. Since this happens during runtime, the process is slower compared to compile time polymorphim
                                            OR
        In a runtime polymorp, functions are called at the time of the program execution. Hence, it is known as late binding or dynamic binding.
        Function overriding is a part of runtime polymorphism. In function overriding , more than one method has the same name with different types of the parameters list.
        It is achieved by using virtual functions and pointers. Its provided slow execution as it is known at the run time. Thus, It is more flexible as all the things execution at the run time.
    a. Function Overriding:
        In function overriding, wegive the new defination to base class function in thedervied class. At that time, wecan say the base function has been overridden. It can be only possible in the ' derived class'.
        Infunction overriding, we have two definitions of the same function, one in the superclassand one in the derived class. The decisionabout whichfunction definition require calling happensat run time. 
                                            OR
        In function overriding, we give the new definition to base class function in the child class.
        At that time, we can say the base function has been overridden. It can be only possible in the 
        ‘child class’. In function overriding, we have two definitions of the same function, one in 
        the superclass and one in the child class. The decision about which function definition requires
        calling happens at runtime. That is the reason we call it ‘Runtime polymorphism’.
                                            
    b. Virtual Function:
        A virtual function is declaredby keyword virtual. A virtual function is a member function in the base class and we can redefined it ina derived class. A virtual function is not static.
        The virtual function helps to tell thecompiler to perfom dynamic binding or late binding on the function

    c. Pure Virtual Function:
        A pure virtual function is implemented by classes which are derived from a Abstract class. 

## Rules for a function to be virtual

    1. A function that is virtual cannot be a static function or a friend function.
    2. Virtual should be declared in base class.
    3. The function should be defined in base and derived class.
    4. We can only access virtual function with the help of pointer or reference.

## Differnece between virtual function and pure virtual function

--------------------------------------------------------------------------------------------------------
            Virtual Function                          |            Pure Virtual Function
--------------------------------------------------------------------------------------------------------
1.  Virtual function is a member function of          | 1.  A pure virtual function is a member function
    base class which can redefined by derived         |     of base class whose only declaration is 
    class                                             |     provided in base class & should be  
                                                      |      defined in derived class otherwise  
                                                      |      derived class become abstract class
--------------------------------------------------------------------------------------------------------

2. Classes having virtual functions are not abstract. | 2. Base class containing pur virtual function
                                                      |     becomes abstract
--------------------------------------------------------------------------------------------------------

3. Defination is given in base class                  |  3. No defincation is given in base class
--------------------------------------------------------------------------------------------------------

4. base class having vritual function can be initatiated |4. Base class having pure virtual function 
   i.e. its object can be made                           |  beomce abstract i.e it cannot be initaited 
--------------------------------------------------------------------------------------------------------

5. Syntax                                               | 5. Syntax
vitrual< ret_typ><func_name>()                          |   vitrual< ret_typ><func_name>()= 0;
{                                                       |
    // Code defination                                  |
}                                                       |
--------------------------------------------------------------------------------------------------------
















