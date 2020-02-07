//
//  learningSet.cpp
//  learningc++
//
//  Created by 李庆文 on 2019/8/20.
//  Updated by 李庆文 on 2020/2/7
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
#include <set>
#include <unordered_set>
#include <iostream>
using namespace std;

template<class T>
void printSet(const string s,const T& mset){
    cout<<s<<'\t';
    for(auto a:mset){
        cout<<a<<'\t';
    }
    cout<<endl;
}

int main(){
    // 声明
    set<int> a;
    set<int> a1 = {1,2,3};
    set<int> a2(a1);
    set<int> a3(a1.begin(),a1.begin());
    
    printSet("a:", a);
    printSet("a1:",a1 );
    printSet("a2:", a2);
    printSet("a3:", a3);
    
    //capacity相关
    cout<<"a.size(): "<<a.size()<<endl;
    a.insert(1);
    cout<<"after insert 1, a.size()"<<a.size()<<endl;
    //set的特性就是不能插入重复元素,如果插入那么就会报错。
    // a.insert(1);
    //cout<<"a.size()"<<a.size()<<endl;
    //printSet("after 2 time insert 1: ", a);
    
    cout<<"a.empty(): "<<a.empty()<<endl;
    cout<<"a.max_size(): "<<a.max_size()<<endl;
    
    //modifiers
    a.insert(3);
    printSet("after insert 3: ", a);
    
    auto find3 = a.find(3);
    a.erase(find3);
    printSet("after erase3: ", a);

    a.clear();
    printSet("after clear:", a);
    
    a = {1,2,3,4,5};
    // Look up相关
    //find 会返回一个itertor
    auto f = a.find(2);
    if(f!=a.end()){
        cout<<"find \t"<<*f<<endl;
    }else{
        cout<<"not found 2"<<endl;
    }
    cout<<"a.find(2)\t"<<*a.find(2)<<endl;
    // count
    cout<<"a.count(3): "<<a.count(3)<<endl;
   
    // equal_range
    auto equal2 = a.equal_range(2);
    for(auto i = equal2.first; i != equal2.second; i++){
        cout<<"equal2: "<<*i<<endl;
    }
    
    /*
     如果我的equal_range判断的值在原来的set中没有会怎么样呢？会等价于a.end()
     所以这里其实是告诉我们，在使用equal_range方法的时候，
     要记得先判断一下返回的pair的第一个iterator指向的是否是end()。
     或者在使用equal_range之前可以先通过find或者count先判断一下要找的key是存在的。
     */

    auto equal6 = a.equal_range(6);
    cout<<"equal6: "<<*equal6.first<<" "<<*equal6.second<<endl;
    cout<<"equal6.first == a.end(): "<<(equal6.first == a.end())<<endl;
    cout<<"equal6.second == a.end(): "<<(equal6.second == a.end())<<endl;
    
    // 确认set中不会有重复元素，那么如果找到，则两个iterator之差肯定为1，
    // 如果找不到，那么差为0,后来发现set的iterator也不可做差运算，此处存疑。

    
    // upper_bound 和 lower_bound
    auto ub = a.upper_bound(4);
    auto lb = a.lower_bound(2);
    cout<<"lower_bound(2): "<<*lb<<endl;
    cout<<"upper_bound(4): "<<*ub<<endl;
    
    // 遍历操作
    set<int>::iterator iter = a.begin(); // 等价于auto iter = a.begin();
    for(;iter!=a.end();iter++){
        cout<<*iter<<'\t';
    }
    
    
    return 0;
}

/* 运行结果
 a:
 a1:    1    2    3
 a2:    1    2    3
 a3:
 a.size(): 0
 after insert 1, a.size()1
 a.empty(): 0
 a.max_size(): 576460752303423487
 after insert 3:     1    3
 after erase3:     1
 after clear:
 find     2
 a.find(2)    2
 a.count(3): 1
 equal2: 2
 equal6: 32766 32766
 equal6.first == a.end(): 1
 equal6.second == a.end(): 1
 lower_bound(2): 2
 upper_bound(4): 5
 1    2    3    4    5    Program ended with exit code: 0
 */
