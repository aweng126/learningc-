//
//  Point.cpp
//  learningc++
//
//  Created by 李庆文 on 2019/8/14.
//  Copyright © 2019 李庆文. All rights reserved.
//

//#include <iostream>
#include "Point.hpp"
using namespace std;

Point::Point():x(0),y(0){
    mcount++;
    cout<<"default count="<<mcount<<" x="<<x<<" y="<<y<<endl;
    
}

Point::Point(int x,int y):x(x),y(y){
    mcount++;
    cout<<"normal count="<<mcount<<" x="<<x<<" y="<<y<<endl;
}

Point::Point(const Point &p):x(p.x),y(p.y){
    mcount++;
    cout<<"copy count="<<mcount<<" x="<<x<<" y="<<y<<endl;
}

Point::~Point(){
    mcount--;
    cout<<"析构函数 count--"<<endl;
}

void Point::move(int newX, int newY){
    cout<<"move to "<<" x="<<newX<<" y="<<newY<<endl;
    x=newX;
    y=newY;
}



