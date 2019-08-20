//
//  learningDestructor.cpp
//  learningc++
//
//  Created by 李庆文 on 2019/8/15.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

class Base11{
public:
    Base11(int i){
        cout<<"constrructing Base11    "<<i<<endl;
    }
    ~Base11(){
        cout<<"Destructing Base11    "<<endl;
    }
};


class Base21{
public:
    Base21(int i){
        cout<<"constrructing Base21    "<<i<<endl;
    }
    ~Base21(){
        cout<<"Destructing Base21    "<<endl;
    }
};

class Base31{
public:
    Base31(){
        cout<<"constrructing Base31"<<endl;
    }
    ~Base31(){
        cout<<"Destructing Base31"<<endl;
    }
};


class Deriverd2:public Base21,public Base11,public Base31{
public:
    Deriverd2(int a,int b,int c,int d):Base11(a),member2(d),member1(c),Base21(b){
}
private:
    Base11 member1;
    Base21 member2;
    Base31 member3;
};

//int main(){
//    Deriverd2 obj(1,2,3,4);
//    return 0;
//}
