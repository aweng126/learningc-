//
//  learningFuncObject.cpp
//  learningc++
//
//  Created by 李庆文 on 2019/8/21.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <numeric>
#include <functional>
using namespace std;
//class MultiClass{
//public:
//    int operator() (int x,int y) const {return x*y;}
//};
//
//
//int mult(int x,int y){return x*y;};
//int main(){
//    //利用普通函数定义函数对象。
//    int a[] = {1,2,3,4,5,6};
//    const int len = sizeof(a)/sizeof(int);
//    int result1 = accumulate(a,a+len, 1,mult);
//    cout<<"First: the result is "<<result1<<endl;
//    
//    //利用类来定义函数对象
//    int result2 = accumulate(a,a+len,1, MultiClass());
//    cout<<"Second: the result is "<<result2<<endl;
//    
//    //利用stl中的标准函数对象来处理。
//    int result3 = accumulate(a, a+len, 1,multiplies<int>());
//    cout<<"Third: the result is "<<result3<<endl;
//    
//    int plusRes = accumulate(a, a+len,0,plus<int>());
//    cout<<"Forth: the plus result is "<<plusRes<<endl;
//    
//    int minusRes = accumulate(a, a+len, 0,minus<int>());
//    cout<<"Firth: the minus result is "<<minusRes<<endl;
//    
//    int divRes = accumulate(a, a+len, 100000,divides<int>());
//    cout<<"Sixth: the divide result is "<<divRes<<endl;
//    
//    int modRes = accumulate(a, a+len, 1,modulus<int>());
//    cout<<"Sixth: the modulus result is "<<modRes<<endl;
//    
//    return 0;
//}
