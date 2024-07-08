#include <iostream>
#include <string>

class Person {
public:
  // Default constructor (no arguments)
  Person() {
    std::cout << "Default constructor called." << std::endl;
    name = "John Doe";
    age = 0;
  }

  // Parameterized constructor (with arguments)
  Person(const std::string& name, int age) {
    std::cout << "Parameterized constructor called." << std::endl;
    this->name = name; // Use 'this' to avoid shadowing member variable
    this->age = age;
  }

  // Copy constructor (copies an existing object)
  Person(const Person& other) {
    std::cout << "Copy constructor called." << std::endl;
    name = other.name;
    age = other.age;
  }

private:
  std::string name;
  int age;
};

int main() {
  // Default constructor
  Person p1;
  std::cout << "Person 1: " << p1.name << ", " << p1.age << std::endl;

  // Parameterized constructor
  Person p2("Jane Doe", 25);
  std::cout << "Person 2: " << p2.name << ", " << p2.age << std::endl;

  // Copy constructor
  Person p3(p2); // Copying p2 into p3
  std::cout << "Person 3 (copy of p2): " << p3.name << ", " << p3.age << std::endl;

  return 0;
}