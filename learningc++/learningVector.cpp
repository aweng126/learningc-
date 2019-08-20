//
//  learningVector.cpp
//  learningc++
//
//  Created by 李庆文 on 2019/8/15.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

double getAverage(const vector<double> &arr){
    double sum =0;
    for (unsigned i=0;i<arr.size();i++){
        sum += arr[i];
    }
    return sum/arr.size();
}
template <class T>
void printVector(const char * msg,T& s){
    cout<<msg<<endl;
    for(auto a:s){
        cout<<a<<'\t';
    }
    cout<<'\n';
}

//int main(){
//    //vector 初始化的方式
//    vector<double> arr ={1,2,3,4,5,6};
////    vector<int> arr1(5,1);
////    vector<int> arr2{1,2,3,4,5};
////    auto arr3 = {1,2,3};
////    vector<int> arr4(arr2.begin(),arr2.begin()+2);
////    vector<int> arr5(5);
//    
//    printVector("print initial content",arr);
//    
//    //获取数据
//    cout<<"arr[2]: \t"<<arr[2]<<endl;
//    cout<<"arr.front() \t"<<arr.front()<<endl;
//    cout<<"arr.back() \t"<<arr.back()<<endl;
//    cout<<"arr.at(2) \t "<<arr.at(2)<<endl;
//
//    cout<<"arr.data()\t"<<*(arr.data()+1)<<endl; //arr.data()感觉是返回的vector的首地址 官方解释：direct access to the underlying array
//    cout<<"arr.begin()\t"<<*arr.begin()<<endl;
//    
//    cout<<"arr.size()\t"<<arr.size()<<endl;
//    cout<<"arr.empty()\t"<<arr.empty()<<endl;
//    cout<<"arr.capacity()\t"<<arr.capacity()<<endl;
//    
//    arr.clear();
//    printVector("arr.clear()", arr);
// 
//    //insert 在对应位置前面添加一个元素，成为这个位置的元素
//    arr.insert(arr.begin(), 1);
//    printVector("insert begin \t", arr);
//    arr.insert(arr.begin(), 4);
//    printVector("insert begin", arr);
//    arr.insert(arr.end(),2);
//    printVector("insert end()\t",arr);
//    
//    //emplace 在对应位置前面添加一个元素
//    arr.emplace(arr.begin(), 3);
//    printVector("emplace begin()", arr);
//    arr.emplace(arr.begin()+1,5);
//    printVector("emplace begin+1", arr);
//    
//    //erase
//    arr.erase(arr.begin());
//    printVector("erase begin \t", arr);
//    arr.erase(arr.end()-1);
//    printVector("erase end-1",arr);
//    
//    // 验证arr.begin()和arr.end()分别对应于什么
//    cout<<"arr.end() \t"<<*arr.end()<<endl;
//    cout<<"arr.size() \t"<<arr.size()<<endl;
//    auto a = arr.begin();
//    while(a!=arr.end()){
//        cout<<*a<<endl;
//        a++;
//    }
//    
//    arr.push_back(6);
//    printVector("push back 6", arr);
//    
//    arr.pop_back();
//    printVector("pop back 6", arr);
//    
//    vector<int> rarr(arr.rbegin(),arr.rend());
//    printVector("reverse arr", rarr);
//    
//    //另外一种比较传统的打印方式，比较麻烦，可以将vector<int>::iterator iter 直接化简为auto iter
//    vector<int>::iterator iter = rarr.begin();
//    while(iter!=rarr.end()){
//        cout<<*iter<<endl;
//        iter++;
//    }
//    
//    return 0;
//}
