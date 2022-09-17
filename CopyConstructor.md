
## constructor:
A constructor is a special member function used to initialize objects of its class.
It will be called automatically when the object is created. 

## Classification of Constructors:

Constructors are classified as follows: 

1. Parameterized Constructor 
2. Constructor overloading
3. Copy Constructors
4. Default Constructor. 
5. Constructor with default arguments. 
 
 
1. Parameterised constructor:

It is a constructor which has arguments or inputs.

Syntax: 

Class_Name object_Name (argument1, argument2,…);

2. Constructor overloading:

A class with two or more construct functions with the same name but with different parameters 
or arguments and other data types is called  Constructor overloading. 

3. Copy Constructors:

Definition of copy constructor is given as “A copy constructor is a method or member function
which initialize an object using another object within the same class”. 

A copy constructor is of two types: 

a. Default Copy Constructor. 
b. User-Defined Copy Constructor.

4. Default Constructor:
    C++ compiler will create a default constructor which copies all the member variables as it is
    when the copy constructor is not defined.  

5. User-Defined Constructor:
    The user defines the user-defined constructor. 
    Syntax for user defined constructor: 
    Class_Name (Class_Name &obj) { 

    // body of constructor 

    } 
Here obj is the reference that is being initialised to another object. 
Uses of Copy Constructor
    When we initialize an object by another object of the same class. 
    When we return an object as a function value. 
    When the object is passed to a function as a non-reference parameter. 

