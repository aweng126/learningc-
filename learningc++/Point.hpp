//
//  Point.hpp
//  learningc++
//
//  Created by 李庆文 on 2019/8/14.
//  Copyright © 2019 李庆文. All rights reserved.
//

#ifndef Point_hpp
#define Point_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

#endif /* Point_hpp */
class Point{
public:
    Point();
    Point(int x,int y);
    Point(const Point &p);
    ~Point();
    void move(int newX,int newY);
    int getX() const {return x;}
    int getY() const{return y;}
    void showPosition() const {
        cout<<"current position: x= "<<x<<"y= "<<y<<endl;
    }
    static void showCount(){
        cout<<"count="<<mcount<<endl;
    };
    
private:
    int x;
    int y;
    static int mcount;
};
