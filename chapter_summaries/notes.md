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

For GNU C++, open a shell and change to the directory containing all the files for
a given program, then execute the following command:
''' shell
g++ -std=c++14 *.cpp -o ExecutableName
'''

*Important;* The constructor shoul dbe non-static but it self can initialize const object.

**IMPORTANT:**When we use member initializer the derived classes since it willl show us how the protected and derived class can be effectred from that. 

* We use inheretence to avoid re-usage of the code and create some links (is-has) links for the classes.
* To avoid suplication and increasing the error use inheritance.
* In this way when teh changes required it can be changed by only from the base class easier to manage.

**In Class, there is a class definition function and class member function 
    * The member function is an .cpp file but the definition function is an .h
An alternative to #ifndef-#define we can use #pragma once

**Abstract classes CAN NOT initiate objects** since they used as base class. 
The classes that are been used to instantiate classes called ***concrete** classes.

* virtual void draw() const = 0; this is an example of pure class. 
_Question; Does class also provies the plugin properties as when we destruct we can have the system function same as work?_

_Question; What is abstract class?_


TODO: I need to make an example of Constructor and Destructor.
