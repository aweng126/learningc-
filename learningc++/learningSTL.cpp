//
//  learningSTL.cpp
//  learningc++
//
//  Created by 李庆文 on 2019/8/21.
//  Copyright © 2019 李庆文. All rights reserved.
//  利用stl的函数对象以及算法来实现有序数组的合并操作

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//int main(){
//    vector<int> a = {1,4,2,7};
//    vector<int> b = {8,3,5,6 };
//    sort(a.begin(),a.end());
//    sort(b.begin(),b.end());
//    vector<int> res;
//    merge(a.begin(), a.end(), b.begin(), b.end(),back_inserter(res));
//    for(auto a:res){
//        cout<<a<<endl;
//    }
//    
//    //在正向的输入输出中，contain.begin指的是第一个元素，contain.end指的是最后一个元素的下一个位置
//    // 同理，我们可以验证出，当反向的时候，contain.rend()指的就是第一个元素的前一个位置。
//    cout<<"a.begin()\t "<<*a.begin()<<endl;
//    cout<<"a.rend()\t"<<*a.rend()<<endl;
//    cout<<"a.rend()-1\t"<<*(a.rend()-1)<<endl;
//
//    
//    return 0;
//}
