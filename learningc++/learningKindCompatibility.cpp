//
//  learningKindCompatibility.cpp
//  learningc++
//
//  Created by 李庆文 on 2019/8/15.
//  Copyright © 2019 李庆文. All rights reserved.
//

/*
 * 验证类型兼容，父类对象指向子类应用的时候，只能调用子类继承自父类对象的方法，但是还是父类对象的方法。
 */

#include <stdio.h>
#include <iostream>
using namespace std;

class Base1{
public:
    void display(){
        cout<<"Base1:display"<<endl;
    }
};

class Base2:public Base1{
public:
    void dispaly(){
        cout<<"Base2: display"<<endl;
    }
};

class Derived:public Base2{
public:
    void display(){
        cout<<"Base3: display"<<endl;
    }
};

void fun(Base1 *ptr){
    ptr->display();
}
//
//int main(){
//    Base1 b1;
//    Base2 b2;
//    Derived d;
//
//    fun(&b1);
//    fun(&b2);
//    fun(&d);
//
//    /**
//     Base1:display
//     Base1:display
//     Base1:display
//     **/
//
//    return 0;
//}
