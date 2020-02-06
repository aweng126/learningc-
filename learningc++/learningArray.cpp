//  learningArray.cpp
//  learningc++
//
//  Created by 李庆文 on 2020/2/6
//  Copyright © 2019 李庆文. All rights reserved.
//  c++ 11 新添加的数据类型。
 
#include <stdio.h>
#include <iostream>
#include <array>
using namespace std;
template<class T>
void printArray(string s,const T& marr){
    cout<<s<<'\t';
    for(auto a:marr){
        cout<<a<<'\t';
    }
    cout<<endl;
}

int main(){
    //声明
    array<int,3> marr = {3,2,4};
    array<int,2> marr1{1,2};
    printArray("marr",marr);
    printArray("marr1 ",marr1);
    
    // access 相关
    cout<<"marr[0]: "<<marr[0]<<endl;
    cout<<"marr.at(0): "<<marr.at(0)<<endl;
    cout<<"marr.data(): "<<*marr.data()<<endl;
    cout<<"marr.front(): "<<marr.front()<<endl;
    cout<<"marr.back(): "<<marr.back()<<endl;
    
    //capacity 相关
    cout<<"marr.size(): "<<marr.size()<<endl;
    cout<<"marr.empty(): "<<marr.empty()<<endl;
    cout<<"marr.max_size(): "<<marr.max_size()<<endl;
    
    //Operations
    printArray("before sort", marr);
    sort(marr.begin(),marr.end());
    printArray("after sort", marr);
    
    marr.fill(5);
    printArray("marr.fill(5)", marr);

    return 0;
}

/* 运行结果
 marr    3    2    4
 marr1     1    2
 marr[0]: 3
 marr.at(0): 3
 marr.data(): 3
 marr.front(): 3
 marr.back(): 4
 marr.size(): 3
 marr.empty(): 0
 marr.max_size(): 3
 before sort    3    2    4
 after sort    2    3    4
 marr.fill(5)    5    5    5
 */
