#include <iostream> 

using namespace std; 

#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H

class ComplexNumbers{
public:    
    ComplexNumbers(double real_obj = 0.0, double ima_obj = 0.0) : real{real_obj}, imaginary{ima_obj}{}

    void Addition(double real_obj){
        real += real_obj;
    }
    void Addition(const double& real_obj, const double& ima_obj ){
        real += real_obj;
        imaginary += ima_obj;
    }

    ComplexNumbers operator+(const ComplexNumbers&  complex_obj ) const{
        return ComplexNumbers (real+complex_obj.real, imaginary+ complex_obj.imaginary); 
    }

    void programout() const{
        cout << " The real part: " << real<< " the imaginary part: "<< imaginary<<endl; 
    }
private:
    double real;
    double imaginary;
};

#endif 