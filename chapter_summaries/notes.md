# The Notes about C++ Study
This md file is used for the note taking of the Dietel book.

## Chaper 6; Functions and Intro to Recursion 
 * Fucntion prototypes is a decletation of a function that tells compiler the functionname its return type and its parameters

* _PassbyValue_ is a copy of arguemts value is made and passed to the called fucntion. 
* _PassbyReferece_ caller gives the called fucntion the ability to acces callers data directly and modifiy it.
* When funciton called many times with that particular parameter, we can define the parameter as default value.
* C++ allows by using  :: to acess the global variable 
* ***Function Overlaod*** :C++ enables several functions of the same name to be defined, as long as these functions have
different sets of parameters. This capability is called function overloading

## Chapter 7; Class Templates (Vector and Array)
  * Static Array; Saves the values and keeps in mind whole the program from start to the end. 
    * Context, Meaning, Analogy
    - Inside Function, Persist value across calls., A whiteboard in a meeting room that never gets erased.
    - Inside Class, Shared by all objects.,The office coffee machine (everyone uses the same one).
    - Global / File, Private to this specific file., Writing in a private diary instead of posting on Twitter.

* **RangeBasedForStatement**
    - for(item: items){} 

* **``sort()``** and **``binary_search()``**
    - ``sort(array.begin(),array.end())``
    - ``binary_search(array.begin(),array.end(), "indigo")``
* vector<int> nameOfVector(size){members}


## Chapter 8; Pointers
* Passing large objects using pointers to constant data, or references to constant data offers
the security of pass-by-value.
* Use pass-by-value to pass fundamental-type arguments (e.g., ints, doubles, etc.) to a
function unless the caller explicitly requires that the called function be able to directly
modify the value in the caller. This is another  <ins>_example of the principle of least privilege_.<ins>
## Pointer Configurations in C++

There are four ways to pass a pointer to a function in C++, offering different levels of protection for the memory address and the data itself.

### 1. Non-Constant Pointer to Non-Constant Data
**Syntax:** `int* ptr`
* **The Pointer:** Mutable (can point to a different address).
* **The Data:** Mutable (can change the value).
* **Use Case:** Standard usage. Iterating through arrays and modifying contents.

```cpp
void example(int* ptr) {
    *ptr = 100;    // Allowed: Changing value
    ptr = nullptr; // Allowed: Changing address
}
```

### 2. Non-Constant Pointer to Constant Data
**Syntax:** `const int* ptr` (Read backwards: *"Pointer to an int that is const"*)
* **The Pointer:** Mutable (can point to a different address).
* **The Data:** **READ-ONLY**.
* **Use Case:** Reading arrays or strings without modifying them, while still being able to loop/iterate.

```cpp
void example(const int* ptr) {
    *ptr = 100;    // ERROR: Data is read-only
    ptr++;         // Allowed: Changing address
}
```

### 3. Constant Pointer to Non-Constant Data
**Syntax:** `int* const ptr` (Read backwards: *"Constant pointer to an int value"*)
* **The Pointer:** **LOCKED**. Must always point to the initialization address.
* **The Data:** Mutable (can change the value).
* **Use Case:** Fixed memory buffers (like hardware registers) where the location never moves, but data updates.

```cpp
void example(int* const ptr) {
    *ptr = 100;    // Allowed: Changing value
    ptr++;         // ERROR: Pointer address is locked
}
```

### 4. Constant Pointer to Constant Data
**Syntax:** `const int* const ptr`(Read backwards: *"Constant pointer to an constant int value"*)
* **The Pointer:** **LOCKED**.
* **The Data:** **READ-ONLY**.
* **Use Case:** Maximum restriction. Used for read-only access where neither the data nor the pointer variable itself should ever change.

```cpp
void example(const int* const ptr) {
    *ptr = 100;    // ERROR: Data is read-only
    ptr = nullptr; // ERROR: Pointer address is locked
}
```

### Summary Table

| Syntax | Can Change Address? (`ptr = &y`) | Can Change Value? (`*ptr = 5`) |
| :--- | :---: | :---: |
| `int* p` | ✅ Yes | ✅ Yes |
| `const int* p` | ✅ Yes | ❌ NO |
| `int* const p` | ❌ NO | ✅ Yes |
| `const int* const p` | ❌ NO | ❌ NO |


## Chapter 9; Classes
### Why do we need the .cpp of the Class
* it is not enough to make encapsulation to put the header file since many people can see it the best it adding another .cpp file where u can introduce the function headers and explain how the class functions and tell what to expect form that. 
The class creatn and the law of 3

* --> usage
    - As we know that the fucntions also has some addresses on the memory so by calling them . means calling them by vcalue in fact we can use the reference to change the thingfs thats why the -> arrow is introduced 
    ```
    cpp
    accountPtr->setBalance(123.45);
    ```

* Access Function and Utility Function
    -Access function to read and display the data not modify it. 
It can also be used to test the truth or falsity of the functions
    - it is also called helper function is a private member fucntion to support opertions of the class with other class member functions 
      it is used to avoid duplicaiton of the code inside of many memberw funcitons  
* There is a overhead if i dont construct the object directly actually **Why?**
    - *Ans:* Since other wise i need to create the object then copy and past the values on that created object. *This is a huge **overhead*** to avoid from that the constructor is exisitng instead of copying creating objects
        - Dont even think to use the reference object that would break the encapsulation and make an demage on the class method. 

* If you will use the same varibale like printout and persist its value to all members of the class its better declered as **static** otherwise if its member-function so it should be pointed spesifically to object with **this-->**. Very good example for the implementation. 


* If the constructor created;
    * So the destructor and also the copy constractur must be declered. 

* The return of the private breaks encapsulation since we leak the information that we want to be integral and confidential.
* When we want to prevent the mutation of the object we use ***'const'*** 


The ***this*** member used to acesses non-static members of the class.

The frendship method will be used to when a nonmember function can also accesses to class non-public members.

## Chapter 10: Operator Overlaoding: Class string 

In this chapter it has been showed that how the operators can work with the class objects.

**Operator Overlading**: It is a C++ feature that allows classes use the standarrt symbols to give spesific meaning. 
 
- Operator Overlading should be **<ins>non static</ins>** otherwise it can be  mixed with main symbol and that would be a conflict so that compilers gives error  

### Dynamic Memory Management 
As a programmer we can alloc and de-alloc the memory on the memory for object array or user defined type. This is know as dynamic memory managemnet that is implemented by new() and delete() operations. 

object stored in the **free store(heap)**, a region of memory assigned to each program for storing dynamically allocated objects. 
 it can be acceded through the pointer that returned by the new. 

```cpp

Time* timePtr{new Time};

```

Releasing by


```cpp

delete timePtr;

```

*Not releasing dynamically allocated memory even when it is not used can cause system to run of memory. This is called <ins> "memory leak."</ins>*

*The delation the ptr again can cause undefined behavoirto avoid that set deleted pointer to **"nullptr"** .*

*When one two ptr points to the same objects memory address when this address released from one other one will still be pointing the liberated space those pointers are called `dangling pointer` .*

*`unique_ptr` is an **smart pointer** for managing fynamic allocaiton object.*
    - When the unique pointer goes out of scope, automatically returns the managed store by using its destructor. 

### Recap 
The stream manipulator boolalpha (p. 492) sets an output stream to display condition values as the strings "false" and "true", rather than 0 and 1.



## Chapter 11: OOP: Inheretance
It is a nmethod nthat allows user to instead of writing class from scratch to use the base class to inheret its data and member functions. 

There is a base class and derived one. Base class is generally generic in fact the derived one is more general. 

- The member inializer is not used in the example since it needed to be shown the protected private and public initializer since that will chance how the member initializers can reach to those parts. 

### Member initializer Cosntructor vs Non-Member Initializer Constructor

**Member List Initializer**
```C+++
Class ComissionEmployee(string f, string s) : firstname{f} {setRecord();}
```
**Non-Member List Initializer**
```C+++
Class ComissionEmployee(string f, string s) { firstname = f; setRecord();}

```

```C++
BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string& first, const string& last, const string& ssn,double sales, double rate, double salary)
 // explicitly call base-class constructor
{
    setBaseSalary(salary); // validate and store base salary
}
```

- As it can be sen upside the *list member initializer is NOT used since the inheretance from the other class is used*


### Summary Notes
* Inheretance is important to have to avoid doublingt he code when creating classes. 
  * Additionally code becomes more **modular**; if there shoul dbe any change it would be enough to make it on the base class. 

* To access the private values of the base class or we need to define `protected` or we need to use the get() member functions. 

* What is better accessing by `protected` or by member function? 
    - It is better to keep variables private and access only by member funciton but using protected slightly improves the performance if this is not the case it would be better to use the member access funciton in the base class. 

* When we going to use the Constructor there is a critical issue. Derived class are invoked by the constructor of the base class so that its problematic to use the base class the derived class issues or re define them so that we spesifically define by 
`using BaseClass::BaseClass()` 
in this way we can say that okay its modifed securily in this derived part.

## Chapter 12: OOP: Polymorphism
Polimorphism means co-exsiting it aims to defined the classes with same member functions but for different functionality which allows us to ability to generalize the program so have more freedom to use the funcitons. 

* With virtual functions, the type of the object—not the type of the handle used to invoke
the object’s member function—determines which version of a virtual function to invoke.

* Virtual Functions are the switch that turns this behavior on.

    * virtual allow us to have dynamic byding the complier instead of looking on the type of the object it goes on memory checks the address and answer accordsing the objects address instead of its type. 

        - If we dont define the virtual its going to be static binding. 

### Abstract classes and Concrete classes
*Abstract classes* are useful to define a classes with no intention to initiate them. They cna be colled incomplete. They will be completed by the concrete classes which can be used to initiate the objects. 

    - Abstract classes are too generic to define the real object(ex: Shape, Vehicle)

    - If someone tells us to drive 2 dimentional object 

        - We use the concerete classes to instantiate objects. 

### Pure Virtual Function 

The difference between a virtual function and a pure virtual function is that;
 a virtualfunction has an implementation and gives the derived class the option of overriding
the function;
 by contrast, a pure virtual function does not have an implementation and
requires the derived class to override the function for that derived class to be concrete; otherwise
the derived class remains abstract.

--> Pure virtual is forcing its derived class to concrete the function 
    -- It is used when it does not make a sense for base class to have implementation. In fact on the other hand we force the concere derived classes implement function. 
--> Virtual even it does not concrete, derived class can use it as is. 


## Chapter 13: Stream I/O: Deeper Look

I/O occures in streams which is actually sequence of bytes. Input operations are bits flow from the keyboard disk to the memory. In output operations btis flwos from the main memory to the devices like keyboard, speaker or disk. 

C++ allows **Low-Level**(un-formatted) and **High-Level**(formatted) streams. Low is where the meaning represented by bits and in high it is represented meaningful characters. 

* To output the memory addres of `char* word` we can directly dereference it at output from the pointer by `cout<< word` we need to cast it to * void by `static_cast<const_void*>(word)` 

* `cout.put(65)` can be used to display directly the ASCII character. 

### A code review on IOSTREAM cin.get()

```C++
#include <iostream>
using namespace std;

int main(){

    const int SIZE(80);

    int character;

    char buffer1[SIZE];

    char buffer2[SIZE];

    cout<<"Ente rsentence:\n";

    cin>>buffer1;

    cout<<"Stupid shit: "<<buffer1<<"\n"<<endl;

    cin.get(buffer2,SIZE);

    cout <<"The string read with cin.get was:\n" << buffer2 << endl;
}
```

#### The Step-by-Step "Buffer" Story
1) You Typed: string input with cin and cin.get [Enter]

    -The Buffer now holds: "string input with cin and cin.get\n"

2) The Code Runs: cin >> buffer1;

    -Rule: cin >> reads characters until it hits the first whitespace (a space, tab, or newline).

3) Action: It grabs "string" and stops at the space immediately after it.

    -Variable buffer1: Holds "string".

    -Buffer Remainder: The rest is left waiting: " input with cin and cin.get\n"

4) The Code Runs: cin.get(buffer2, SIZE);

    -Rule: cin.get reads whatever is currently waiting in the buffer until it hits a newline.

5) Action: It sees data is already there! It doesn't need to pause and wait for you to type. It immediately grabs everything left.

    -Variable buffer2: Holds " input with cin and cin.get".

## Chapter 15: Standart Template Library: Containers and Iterators

Containers are templetized data structures. There are 3 types of those

1) first class containers
2) container adapters
3) near containers

**Iterators** are similar to the pointers they are used to manipulate *containers*.

**Algorithms** are function templates that are providing data manipulation such as; searching, sorting or comparing entire containers. 


### Custom Templized Data Strucutres
* Linked lists are collections of data items logically “lined up in a row”—insertionsand removals are made anywhere in a linked list.

* Stacks are important in compilers and operating systems: Insertions and removals are made only at one end of a stack—its top. Section 6.11 discussed the importance of stacks in the function call and return  mechanism.

* Queues represent waiting lines; insertions are made at the back (also referred to as the tail) of a queue and removals are made from the front (also referred to as the head) of a queue.

* Binary trees are nonlinear, hierarchical data structures that facilitate searching and sorting data, duplicate elimination and compiling expressions into machine code.