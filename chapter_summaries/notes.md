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
## Chapter 9; Classes

The class creatn and the law of 3
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
