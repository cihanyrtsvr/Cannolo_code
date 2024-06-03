#include <iostream>

using namespace std; 
#ifndef COMPNUM_H
#define COMPNUM_H



class CompNum{
public:
    CompNum(double real_obj = 0.0, double img_obj=0.0) : real{real_obj}, imaginary{img_obj}{};
    void Addition(double real_obj){
        real += real_obj;
    }
    void Addition(const double& real_obj, const double& ima_obj ){
        real += real_obj;
        imaginary += ima_obj;
    }
    CompNum operator+(const CompNum& compl_obj) const{
        return CompNum(real + compl_obj.real , imaginary + compl_obj.imaginary);
    }

private:
    double real;
    double imaginary;

};

#endif 