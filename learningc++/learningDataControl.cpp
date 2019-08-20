//
//  learningDataControl.cpp
//  learningc++
//
//  Created by 李庆文 on 2019/8/12.
//  Copyright © 2019 李庆文. All rights reserved.
//
#include <iostream>
#include <cmath>
using namespace std;
class Point{
public:
    Point(int x = 0,int y = 0):x(x),y(y){};
    static int count;
    static void showCount(){
        cout<<count<<endl;
    }
    static void anotherShowCount();
    friend float dist(const Point &p1,const Point &p2);
private:
    int x,y;
};

float dist(const Point &p1,const Point &p2){
    double x = p1.x-p2.x;
    double y = p1.y-p2.y;
    return static_cast<float>(sqrt(x*x+y*y));
}

void Point::anotherShowCount(){
    cout<<"another count "<<count<<endl;
}

int Point::count = 3;

//int main(){
//    cout<<Point::count<<endl;
//    Point::count++;
//    Point::showCount();
//    Point::anotherShowCount();
//    cout<<"*****常引用作为参数****"<<endl;
//    Point p1(2,3),p2(2,4);
//    cout<<"the distance is "<<dist(p1,p2)<<endl;
//    const Point p3(1,1),p4(1,2);
//    cout<<"the distance is "<<dist(p3,p4)<<endl;
//
//
//    return 0;
//}
