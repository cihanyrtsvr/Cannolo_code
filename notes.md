# The Notes about C++ Study
This md file is used for the note taking of the Dietel book.

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

_Question; Does class also provies the plugin properties as when we destruct we can have the system function same as work?_

_Question; What is abstract class?_


TODO: I need to make an example of Constructor and Destructor.
