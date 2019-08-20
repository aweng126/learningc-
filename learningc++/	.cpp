//
//  learningOjectPointer.cpp
//  learningc++
//
//  Created by 李庆文 on 2019/8/15.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "Point.hpp"
using namespace std;
int main(){
//    int n = 10;
//    cout<<"n= "<<n<<endl;
//    int *pr =&n;
//    cout<<"&n="<<&n<<endl;
//    cout<<pr<<endl;
//    cout<<"*pr="<<*pr<<endl;
    
//    Point *ptr;
//    Point p(2,3);
//    ptr=&p;
//    cout<<ptr->getX()<<endl;
//
//    cout<<ptr->getY()<<endl;
    
    /*
     * 使用new关键字创建多维数组，注意在返回值是一个指向数组的指针，数组元素个数为多维数组除了最左侧一列外w其他列下标的乘积；，
     */
    int (*a)[2];
    a=new int[1][2]();
    cout<<*a<<endl;
    cout<<a[0][0]<<endl;
    delete []a;
    
    /**
     * 使用new关键字来创建对象
     **/
    Point *p = new Point();
    p->move(3, 5);
    p->showCount();
    				
    delete p;
    
    
    return 0;
    
}
