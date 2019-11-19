//
//  learningStlUnique.cpp
//  learningc++
//
//  Created by 李庆文 on 2019/8/23.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

void printVector(const char *msg,const vector<int>& a){
    cout<<msg<<"\t";
    for(auto i:a){
        cout<<i;
    }
    cout<<endl;
}

//int main(){
//    vector<int> a ={1,2,3,2,3,5,2,3};
//    printVector("初始样子",a);
//    sort(a.begin(),a.end());
//    printVector("排序之后",a);
//    auto end = unique(a.begin(), a.end()); //unique 会将序列唯一的索引保存一下，然后返回不重复序列的第一个所在的位置。这里就是4。
//    cout<<"end-begin \t"<<end-a.begin()<<endl;
//    a.erase(end,a.end());
//    printVector("去重复结果是",a);
//
//     vector<int> b ={2,1,5,3,7,4,5,8};
//    printVector("排序前的结果是",b);
//    sort(b.begin()+4,b.end());
//    printVector("排序后的结果是",b);
//
////    swap(b.begin(), b.end());
////    printVector("swap之后的结果是",b);
//
//    return 0;
//
//}
