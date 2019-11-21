//
//  Complex.hpp
//  learningc++
//
//  Created by 李庆文 on 2019/11/19.
//  Copyright © 2019 李庆文. All rights reserved.
//  侯捷老师的c++教程的第一部分，不带指针的类 complex 。https://www.bilibili.com/video/av19038490

#ifndef Complex_hpp
#define Complex_hpp

#include <stdio.h>
#include <iostream>
class Complex{
public:
    Complex(double r = 0, double i = 0) : re(r), im(i){}
    Complex& operator += (const Complex&);
    double real() const {return re;}
    double imag() const {return im;}
    
private:
    double re,im;
    
    friend Complex& _doapl(Complex*, const Complex&);
};

#endif /* Complex_hpp */

inline Complex& Complex::operator += (const Complex& c){
    return _doapl(this,c);
}

inline Complex& _doapl(Complex* ths,const Complex& c){
    ths->im += c.im;
    ths->re += c.re;
    return *ths;
}

inline double real(const Complex& r){
    return r.real();
}

inline double imag(const Complex& r){
    return r.imag();
}

inline Complex operator +(const Complex& r1,const Complex r2){
    return Complex(real(r1)+real(r2), imag(r1)+imag(r2));
}

inline Complex operator + (const Complex& r1, double d){
    return Complex(real(r1)+d,imag(r1));
}

inline Complex operator + (double d,const Complex& r1){
    return Complex(real(r1)+d, imag(r1));
}

std::ostream& operator << (std::ostream& os,const Complex& c){
    return os<<"("<<real(c)<<","<<imag(c)<<")";
}
