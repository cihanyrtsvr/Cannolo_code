# Interview Question From GeeksForGeeks


## Q1: What is difference between C and C++ ? Explain the advantages of C++.

- The bigest difference then C, C++ support *Object, Class, Encapsulation, Abstraction, Inheritance and Polymorphism*
but other additional differences can be seens as; 

| C | C++ |
|---|---|
| C is procedural programing language. | C++ is a object oriented programing language. |
| In C data does not consider as objects | In C++ data considered as objects. |
| - | In C++ the memory management is a key feature enables dynamic memory management. |
| C is *function* driven language. | C++ is a *object* driven language. |
|C does have pointer | C++ have pointer and 'reference' |




## Q2: What is the different types of C++?

There is 3 types; *Primary* *Derived* and *User-defined*;

| Primary | Derived | User-Defined
|---|---|---|
| Integer, Char, Boolean, Double, Void..etc | Function, Array, Pointer, Reference  | Class, Structure, Union, Enum, Typedef |

## Q3: Define std.

It is an standart ocronym used for the namespace. In general at begining of the program used as global to make compiler add everythin under namespace. So that, in this way it shouldn be  defined each time the namespace of cout and cin.

## Q4: What is reference? What is the call by value, by reference and by pointer? 

The reference is an alieas of the ***`already existing`** variable. When the reference changed also the perminantly the verable is changed. 
-  Call by value the value's copy is created for another variable and when the call is finished the copy is deleted and the main varible of the value does not changes. It does have an overhead when the program is 
- Call by refence is passed the directly the verable in the end of operation the variable is effected its good to use when there is a big data that needed to be converged. The value of reference can not be re-assigned
- Call by pointer is effecting the value of varibale but when we change the pointer address varibale that pointer does not changes. The

Pointer vs Reference

-Reference never be re assigned -Pointer can be reassigned
-Reference never hold a null - Pointer can be null
-Reference cant work with arrays - Pointer can work with arrays.
-Reference memory address can be accessed wasily - For the pointer we need to use '*'. 
-Reference is accesed . -Pointer acceded with ->

## Q5: Difference between Array and List

|Array | List|
|---|---| 
|Array is an contigous memory location. | List are classic individual elements not contigous its a linked of elements that is located in different locaitons. |
|Array is static as nature.| Lists are dynamic as nature. |
|Use less memory than list. | Uses higher memory since it needs to store pointer and value.| 

## Q6: What is the difference between struct and class

Class is an user defined data type. It has member functions and data members tailer according to demands or requirements and those all members  access by object. 

| Struct | Class |
|---|---|
|Members of the struct always in the public mode|Members of the class can be privagte protected and public mdoes.|
| Structures are value type they only hold  | Classes are reference type. It holds reference of an objejct in the memory|
| Memory of structure stored in stack | The memiry in the class stored in the heaps. | 

## Q7: What are the various OOP's in C++?

**Class:** It is a user defined data type.
Object: The instance of the class.

**Abstraction:** It is a technique that shows the necceseray details.

**Encapsulation:** Wrapping data in a single unit. (ie; if we have a steering wheel we dont interested beckgrond mechanism).

**Inheritance:** The capabillity of class to derive properties and characteristics from another class.

**Polymorphism:** known as Means Existance of many forms.

