# Interview Question From GeeksForGeeks -Junior level


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

## Q8: What is inheritance?

Inheritance is a capability of a class to deriving properties of the another class. 

## Q9: What is Polymorphism?
Polymorphism is an mony forms of same thing. 

We can also say that Polymorphism is the ability  to display a member function in multiple forms depending on the type of object that calls them.

There are two types of Polymorphism;

**Compile time Polymorphism**
It is achieved during the compile time of the program.(It is a static binding) It is a bit fater then the run time polymorphism. In heritance not incolved
- Function Overloading: Multiple function with same name but different parameters.
- Operator overloading: Giving special meaning to existing operator  

**Run time Polymorphism**
It is achieved in the run time (Dynamic binding). A bit slower then the compile time since its execution known in run time. 
- Virtual Function; so its functionoverriding by virtual
- Function Overriding: Occures when the base class function redefined int the derived class with the same arguments and return type.

## Q10: What is difference between Virtual function and pure virtual function?

|Virtual Function | Pure Virtual Function|
|---| ---| 
|The virtual function is a member function of base class with virtual key word and it can be redifined in the derived class. |The Pure Virtual Function is a member function of the base class can only be declerad in the base(with =0) class and defined in the drived class to prevent it become abstract class.|

## Q11: What is difference between new and malloc()? 

|new|malloc()|
|---|---|
|new is a operator which performs operation| malloc is a function that recieves and returns values|
|new calles constructor| malloc can not call constructor|
|new is faster than malloc|slower|
|new returns the exact data type| returns void*|

## Explain the contructor in C++?

It is a special type of class member function. It has the same name with the class and it is called when the object is invoked and its initializes the object in well defined state. 
**Used for**
- Initializes the member variable of the class.

There is 3 types of constructor;
#### Default Constructor;
Constructor with no arguments. If u dont defined explicityly the constructor compiler provides  automatically. In thius type the member function does not initialized
#### Parametrized Constructor: Defined;
Explicityly initialized objects member variables with spesific value.
#### Copy Constructor;
Special contructor that creates the copy of existing object. 

Benefits of Constructors;
- Enforces proper initialization of objects, prevents unexpected behavoir.
- Allows the customizaiton of the initial state of objects based on the needs.

## Q12: What are destructos in C++? 

The destructirs are destroying the object when it goes out of scope. Destructor follows down to the top approach unlike the Constructor which is top to the down. 

#### Virtual destructor; 
Guarantees that first derived class destructor is called. Thent eh base class destructor is called. In this way it saves us from the memory leaks. 

#### !The destroctors can be overloaded.

## Q13: Can the code be compiled with out the main()?

Yes we can compile the program without the main but we can run it. SInce to run a program we need to have a entry point(where all the execution begins) and the main is the entry point. 

## Q14: Explain the difference between pre-increment (++x) and post-increment (x++) operators.

Pre-increment ( ++x ):
Increments the value of the variable x by 1.
Then, it returns the new incremented value.
Example: int x = 5; int y = ++x; // y will be 6, x will also be 6

Post-increment ( x++ ):
First, it returns the current value of the variable x.
Then, it increments the value of x by 1.
Example: int x = 5; int y = x++; // y will be 5, x will become 6

## Q15: What are the dangers of pointer dangling and how can you avoid them?

#### Pointer Dangling: 
This occurs when a pointer is declared and assigned a memory address, but the memory that address pointed to is deallocated (freed using delete). The pointer still holds the old address, which is no longer valid and points to nowhere.

#### Consequences: 
Attempting to access or modify memory through a dangling pointer can lead to program crashes, unexpected behavior, or security vulnerabilities.

#### Prevention:
Use smart pointers (unique_ptr, shared_ptr) that automatically manage memory deallocation.
Ensure you don't access a pointer after the memory it points to has been freed.

Properly initialize and manage pointers throughout your code(RAII).

## Q15: What is the null pointer and how is it used in C++?

A special pointer value that doesn't point to any valid memory location.
Used to indicate that a pointer doesn't currently point to any meaningful data.
Common practice to initialize pointers to nullptr before assigning them a valid address.
Often used for error handling or checking if a pointer has been assigned memory.

## Q16: Explain the difference between a vector and an array in C++.

#### Array:

- Fixed size, declared with a specific size at compile time.
- Direct memory access using indexing (array[index]).
- Stored contiguously in memory.
- Cannot be resized after creation.

#### Vector:

- Dynamically sized array, can grow or shrink at runtime.
- Offers methods for adding, removing, accessing elements.
- Stored contiguously in memory, but can reallocate if needed.
- More flexible and safer for dynamic data management.

## Q17: What are some common memory management techniques in C++ besides using new and delete?

#### Smart Pointers:
- unique_ptr: Owns a single object and automatically deletes it when it goes out of scope.
- shared_ptr: Shared ownership of an object, deleted when the last shared_ptr goes out of scope.
#### Resource Acquisition Is Initialization (RAII):
Objects acquire resources in the constructor and release them in the destructor.

## Q18: What are templates in C++ and how are they used?

In C++, templates are a powerful mechanism for writing generic code that can work with different data types. They allow you to create functions and classes that can operate on a variety of data types without needing to write separate code for each type.

Here's how templates work:

#### Template Declaration: 
You define a template using the template keyword followed by a < symbol and a list of template parameters enclosed in angle brackets. These parameters represent placeholder data types.
Template Body: The code for the function or class is written within the template body. This code can use the template parameters as if they were actual data types.
#### Template Instantiation: 
When you use a template, you specify the actual data types you want the template to work with. This is called template instantiation. The compiler then generates a specific version of the code for the chosen data types.

### Benefits of Using Templates:

#### Code Reusability:
 Templates allow you to write generic code that can be used with various data types, reducing code duplication and improving maintainability.

#### Type Safety: 
Templates enforce type safety by ensuring that the data types used with the template are compatible with the operations performed within the code.
Improved Performance: In some cases, templates can lead to more efficient code by enabling the compiler to optimize for the specific data types used.

## Q20: Explain the difference between shallow copy and deep copy in C++.


In C++, copying objects involves creating a new object that represents a replica of the original. However, there are two main approaches to copying objects, each with distinct implications for memory management: shallow copy and deep copy.

### Shallow Copy:

A shallow copy creates a new object, but it only copies the values of the member variables that are primitive data types (like int, double, char).
For member variables that are pointers, the shallow copy simply copies the memory address that the original pointer points to. Both the original and the copied object now refer to the same underlying memory location.
#### Consequences of Shallow Copy:

If the copied object modifies the data pointed to by the member variable, the original object's data will also be modified, as they both share the same memory location.
This can lead to unexpected behavior if you're not aware of the shallow copy mechanism.

### Deep Copy:

A deep copy creates a new object and copies the values of all member variables, including those that are pointers.
For pointers, the deep copy allocates new memory and copies the data pointed to by the original pointer into the newly allocated memory. This creates independent copies of the data for both the original and the copied object.

#### Benefits of Deep Copy:
Deep copy ensures that modifications to one object do not affect the other, as they have separate memory allocations for their data.
This is crucial for maintaining data integrity and avoiding unintended side effects.

## Q21: Explain the concept of move semantics in C++.

In C++, move semantics is a technique for efficiently transferring ownership of a resource from one object to another. It's particularly useful when dealing with expensive-to-copy objects that manage resources like memory buffers or file handles.

### Traditional Copying vs. Move Semantics:

Traditionally, copying objects in C++ involves creating a new object and replicating all its member variables. This can be inefficient for large objects, especially if they contain dynamically allocated memory.
Move semantics, introduced in C++11, provides an alternative approach. It focuses on transferring ownership of the resource from the source object to the target object, rather than creating a complete copy.
Key Elements of Move Semantics:

#### Rvalue References: 
Move semantics heavily relies on rvalue references, which are references that bind to temporary objects or expressions that are about to be destroyed.
#### Move Constructor: 
A special constructor called the move constructor takes an rvalue reference to the source object. It "steals" the resource from the source object and uses it to initialize the target object. The source object is then left in a valid but "moved-from" state, often empty or with default values for its members.

#### Move Assignment Operator: 
Similar to the move constructor, a move assignment operator takes an rvalue reference to another object and transfers ownership of its resource to the current object.
Benefits of Move Semantics:

#### Efficiency: 
Move semantics avoids unnecessary copying of large objects, leading to significant performance improvements.
#### Resource Management: 
It ensures proper resource ownership transfer, preventing memory leaks or dangling pointers.
#### Clarity: 
By using std::move, you explicitly indicate the intent to move a resource, making code more readable and less prone to errors.