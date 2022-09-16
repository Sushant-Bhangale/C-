## What is Upcating
    It is the process of converting dervied class reference or pointer to the base class. You do not need to upcast manually. ou just need to assign dervied class pointer( or reference) to base class pointer.
                            OR
    Upcasting is converting a derived-class reference or pointer to a base-class. It is always allowd for public inheritance, without an explicit type case. This is a result of the IS-A relationship between  the base and derived class

    When we use upcasting, the object is not chaning. nevertheless, whrn you upcase an object, we will be anle to access onl the member function and data members that are defined in the base class.
    
## What is Downcasting
    The oppsite process, converting a base-class pointer to a dervied-class pointer is called downcasting.
    Downcating is not allowed without an explicit type cast. The reason for this restrication is that
    the IS-A relationship is not, In most of the cases, symmertic.


The opposite process, converting a base-class pointer (reference) to a derived-class pointer (reference) is called downcasting. Downcasting is not allowed without an explicit type cast. The reason for this restriction is that the is-a relationship is not, in most of the cases, symmetric. A derived class could add new data members, and the class member functions that used these data members wouldn't apply to the base class. 

# Note:
If you do upcasting then you can only call those properties those are inherited or override from base class, derived class's property con not be accessible.

                              ----------- 
                          |-->| Manager | 
--------    ----------    |   -----------
|Person| -> |Employee| -->
--------    ----------    |   -----------
                          |-->|  Clerk  |
                              -----------
 Upcasting <--------------------> Downcasting
