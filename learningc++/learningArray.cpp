//
//  learningArray.cpp
//  learningc++
//
//  Created by 李庆文 on 2019/8/14.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

// 将数组中每个元素都+1,在方法中修改数组的值，在主方法中值也发生更改了，传的是地址。
void arrayAddOne(int a[], int length){
    cout<<a<<endl;
    for (int i =0;i<length;i++){
        //a[i]=10;
        cout<<++a[i]<<endl;
    }
    a[2]=100;
}

//int main(){
//    int a[3]={1,2,3};
//    for(int i =0;i<3;i++){
//        cout<<a[i]<<endl;
//    }
//    
//    cout<<"开始调用方法"<<endl;
//    arrayAddOne(a,3);
//    
//    cout<<"信息更改之后"<<endl;
//    for(int i=0; i<3; i++){
//        cout<<a[i]<<endl;
//    }
//    return 0;
//}
