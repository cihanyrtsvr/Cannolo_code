#include <array> 
#include <string> 
#include <iostream>
#include <iomanip>

using namespace std;

class GradeBook{
public:
    static const size_t students{10};
    static const size_t tests{3}; //The static to retain value in outside functions.
    GradeBook(string& name, array<array<int,tests>, students>& gradesArray)
    : courseName(name), grades(gradesArray){

    }

    void setCourseName(const string& name){
        courseName = name; 
    }

    const string& getCourseName() const {
        return courseName;
    }

    void displayMesage() const{
        cout << "Welcome to the grade book for\n" << getCourseName()<< "!" << std::endl;
    }

private: 
    string courseName;
    array<array<int,tests>, students> grades;
};