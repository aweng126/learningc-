//
//  Complex.cpp
//  learningc++
//
//  Created by 李庆文 on 2019/11/19.
//  Copyright © 2019 李庆文. All rights reserved.
//
#include <iostream>
#include "Complex.hpp"

using namespace std;
int main(){
    Complex c1(2,3);
    Complex c2;
//   测试输出
    cout<<c1<<endl;
//    测试连续输出
    cout<<c1<<c1<<endl;
//    测试 +=
    c1 += c2;
    cout<< c1<<endl;
//    测试+运算
    cout<< c1+2<<endl;
}
