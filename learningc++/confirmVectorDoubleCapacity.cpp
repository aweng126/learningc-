//
//  confirmVectorDoubleCapacity.cpp
//  learningc++
//
//  Created by 李庆文 on 2019/8/23.
//  Copyright © 2019 李庆文. All rights reserved.
//  vector 是顺序存储的，但是是可以动态添加的，所以当超出了当前的容量时，容量（分配空间）就会在原来的基础上double，也就是加倍。从而可以继续存储。

#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;

//int main(){
//    vector<int> a;
//    for(int i =0;i<25;i++){
//        a.push_back(i);
//        cout<<"push "<<i<<"\t size()= "<<a.size()<<"\t capacity=\t"<<a.capacity()<<"\taddress= "<<&a<<endl;
//    }
//    
//    return 0;
//}
