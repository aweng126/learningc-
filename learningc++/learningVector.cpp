////
////  learningVector.cpp
////  learningc++
////
////  Created by 李庆文 on 2019/8/15.
////  Updated by 李庆文 on 2020/2/6
////  Copyright © 2019 李庆文. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <vector>
//using namespace std;
//
//double getAverage(const vector<double> &arr){
//    double sum =0;
//    for (unsigned i=0;i<arr.size();i++){
//        sum += arr[i];
//    }
//    return sum/arr.size();
//}
//
//template <class T>
//void printVector(const char * msg,T& s){
//    cout<<msg<<'\t';
//    for(auto a:s){
//        cout<<a<<'\t';
//    }
//    cout<<'\n';
//}
//
//int main(){
//    //vector 初始化的方式
//    vector<double> arr ={1,2,3,4,5,6};
//    vector<int> arr1(5,1);
//    vector<int> arr2{1,2,3,4,5};
//    auto arr3 = {1,2,3};
//    vector<int> arr4(arr2.begin(),arr2.begin()+2);
//    vector<int> arr5(5);
//    
//    printVector("print initial content arr:",arr);   //1    2    3    4    5    6
//    printVector("print initial content arr1:",arr1); // 1    1    1    1    1
//    printVector("print initial content arr2:",arr2); // 1    2    3    4    5
//    printVector("print initial content arr3:",arr3); // 1    2    3
//    printVector("print initial content arr4:",arr4); // 1    2
//    printVector("print initial content arr5:",arr5); // 0    0    0    0    0
//    
//    //直接通过索引获取数据
//    cout<<"arr[2]: \t"<<arr[2]<<endl;
//    cout<<"arr.at(2) \t "<<arr.at(2)<<endl;
//    // 通过front获得头元素。通过back获得尾部元素
//    cout<<"arr.front() \t"<<arr.front()<<endl;
//    cout<<"arr.back() \t"<<arr.back()<<endl;
//    
//
//    cout<<"arr.data()\t"<<*(arr.data()+1)<<endl; //arr.data()感觉是返回的vector的首地址 官方解释：direct access to the underlying array
//    // arr.data()返回值是一个指针，指向数组的第一个值
//    // arr.begin()返回值是一个iterator, 同样指向数组的第一个值。
//    cout<<"*data() == *begin() "<<(*arr.data()==*arr.begin())<<endl;
//    cout<<"arr.begin()\t"<<*arr.begin()<<endl;
//    
//    // size()是获取当前vector的元素个数
//    cout<<"arr.size()\t"<<arr.size()<<endl;
//    // empty()是判断当前数组是否为空
//    cout<<"arr.empty()\t"<<arr.empty()<<endl;
//    // capacity() returns the number of elements that can be held in currently allocated storage
//    cout<<"arr.capacity()\t"<<arr.capacity()<<endl;
//    // returns the maximum possible number of elements
//    cout<<"arr.max_size()\t"<<arr.max_size()<<endl;
//
//    // 清空整个数组
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
//    //emplace 在对应位置前面添加一个元素,功能类似于insert.
//    //两者的区别在于insert插入的是一个对象，一个已经构建好的对象
//    // 而emplace可以直接传入参数，这里隐含一个构造函数。
//    arr.emplace(arr.begin(), 3);
//    printVector("emplace begin()", arr);
//    arr.emplace(arr.begin()+1,5);
//    printVector("emplace begin+1", arr);
//    
//    //erase：删除iteator所指向的元素。
//    arr.erase(arr.begin());
//    printVector("erase begin \t", arr);
//    arr.erase(arr.end()-1);
//    printVector("erase end-1",arr);
//    
//    // arr.begin()返回指向vector第一个元素的指针
//    // arr.end()返回指向vector最后一个元素再后面一个元素的指针。
//    printVector("print arr ", arr);
//    cout<<"arr.begin() \t"<<*arr.begin()<<endl;
//    cout<<"arr.end()-1 \t"<<*(arr.end()-1)<<endl;
//    cout<<"arr.end() \t"<<*arr.end()<<endl;
//
//    // 通过iterator打印整个vector
//    cout<<"print the vector"<<endl;
//    // 下面两个构造方式等价，auto 是c++11的新特性。
//    //vector<double>::iterator a = arr.begin();
//    auto a = arr.begin();
//    while(a!=arr.end()){
//        cout<<*a<<'\t';
//        a++;
//    }
//    
//    // vector 添加一个元素到末尾
//    arr.push_back(6);
//    printVector("push back 6： ", arr);
//    
//    // vector 删除最后一个元素
//    arr.pop_back();
//    printVector("pop back 6： ", arr);
//    
//    // 先打印原来的数据。
//    printVector("former vector", arr);
//    
//    // 这个其实也是构造函数，得到arr树组的反序树组
//    vector<int> rarr(arr.rbegin(),arr.rend());
//    printVector("reverse arr", rarr);
//    
//    // 可以直接通过stl中的reverse方式来将原来的vector进行逆序
//    reverse(arr.begin(),arr.end());
//    printVector("reverse former arr", arr);
//    
//    // 调用前面的方法得到树组的平均数
//    cout<<"average of arr:"<<getAverage(arr)<<endl;
//    return 0;
//}
//
///* 运行结果
// print initial content arr:    1    2    3    4    5    6
// print initial content arr1:    1    1    1    1    1
// print initial content arr2:    1    2    3    4    5
// print initial content arr3:    1    2    3
// print initial content arr4:    1    2
// print initial content arr5:    0    0    0    0    0
// arr[2]:     3
// arr.at(2)      3
// arr.front()     1
// arr.back()     6
// arr.data()    2
// *data() == *begin() 1
// arr.begin()    1
// arr.size()    6
// arr.empty()    0
// arr.capacity()    6
// arr.max_size()    2305843009213693951
// arr.clear()
// insert begin         1
// insert begin    4    1
// insert end()        4    1    2
// emplace begin()    3    4    1    2
// emplace begin+1    3    5    4    1    2
// erase begin         5    4    1    2
// erase end-1    5    4    1
// print arr     5    4    1
// arr.begin()     5
// arr.end()-1     1
// arr.end()     2
// print the vector
// 5    4    1    push back 6：     5    4    1    6
// pop back 6：     5    4    1
// former vector    5    4    1
// reverse arr    1    4    5
// reverse former arr    1    4    5
// Program ended with exit code: 0
// */
