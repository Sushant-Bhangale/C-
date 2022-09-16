## What is Inheritance(IS-A)
  Inheritance is a mechanism of reusing and extending the classed without 
   modifying exisitng class. Thus producing herichical relationship between
   them.
   
   For Inheritance we need minimum two class
        1. Parent Class: The class whose properties are inherited by child class is called
                         parent class / Base class / Super Class 
        2. Child Class:  The class that inherits properties from another class is called 
                         Child Class /Derived Class / SubClass

## What are the modes of Inheritance
    1. Public / Public Visibility mode
    2. Protected / Protected Visibility mode
    3. Private / Private Visibility mode

    1. Public   : If we derive a child class / subclass from a public parent class / base class.
                  Then,
                  a. Public member of the parent / base class will be the public in the child 
                     class / subclass.
                  b. Protected members of the parent class will become protected
                     in the derived class.
                  c. Private members are hidden or non-accessable in the derived class

    2. Protected: If we derive a child class / subclass from a protected parent class / base class.
                  Then,
                  a. Public & Protected members of the parent class will be the protected in the
                     chlid class / sub class
                  b. Private members are hidden or non-accessable in the derived class
  
    3. Private  : If we derive a child class / subclass from a private parent class / base class.
                  Then,
                  a. Public & Protected members of the parent class will be the private in the
                     chlid class / sub class
                  b. Private members are hidden or non-accessable in the derived class

## Types of Inheritance
    1. Single Inheritace: 
            In Single inheritance one child class inherits from one base class
    2. Multiple Inheritance:
            In multiple inheritance a single child classs may inherits from two or more base classes
    3. Multilevel Inheritance:
            In multiple inheritance the child class inherits from a class, which in turn inherits from 
            some other class. The parent class for one, is child clas for the other
    4. Hierarchical Inheritance:
            In Hierarchical inheritance, multiple child classes inherits from a single parent class
    5. Hybrid Inheritance (also known as Virtual Inheritance):
            In hybrid inheritance is combination of hierarchical and multilevel inheritance

## Where hierarchical inheritance does is used?

    It is used in the following cases where hierarchy is to be maintained. For instance, the database of an organization is stored in the hierarchical format. There are different sections of an organization such as IT, computer science, Civil, Mechanical, etc. Each organization has the same attributes such as student name, roll number, year, etc. which comes under a class Student. Hence all the sections inherit the student properties and thus following the format of hierarchical inheritance.
