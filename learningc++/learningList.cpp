//
//  learningList.cpp
//  learningc++
//
//  Created by 李庆文 on 2019/2/6.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

template<class T>
void printList(string s,const T& mlist){
    cout<<s<<'\t';
    for(auto a:mlist){
        cout<<a<<'\t';
    }
    cout<<endl;
}

int main(){
    //常见的list的声明方式
    list<int> mlist{1,2,3,4};
    // 发现不能通过 list<int> mlist1(mlist.begin(),mlist.end()-2);这种方式声明，但是可以通过下面这种方式进行声明。此处存疑
    list<int> mlist1(mlist.begin(),--mlist.end());
    
    list<int> mlist2(mlist);
    list<int> mlist3(5,1);
    list<int> mlist4 = {1,2,3,4,5};
    
    printList("mlist", mlist);
    printList("mlist1", mlist1);
    printList("mlist2", mlist2);
    printList("mlist3", mlist3);
    printList("mlist4", mlist4);
    
    //front 和back 获得第一个元素和最后一个元素
    cout<<"mlist front: "<<mlist.front()<<endl;
    cout<<"mlist back: "<<mlist.back()<<endl;
    
    //遍历通过iterator
    cout<<"print all elements by iterator: ";
    list<int>::iterator a  = mlist.begin();
    for(;a!=mlist.end();a++){
        cout<<*a<<'\t';
    }
    cout<<endl;
    
    // capacity相关
    cout<<"mlist empty "<<mlist.empty()<<endl;
    cout<<"mlist size() "<<mlist.size()<<endl;
    cout<<"mlist max_size "<<mlist.max_size()<<endl;
    
    // Modifiers相关
    //插入操作
    mlist.insert(mlist.begin(), 10);
    // 同样不能通过类似于 mlist.insert(mlist.begin()+2, 10);来插入元素
    mlist.emplace(mlist.begin(), 9);
    printList("insert begin(): ", mlist);
    
    //插入到头部
    mlist.push_front(10);
    printList("push_front 10: ", mlist);
    mlist.emplace_front(9);
    printList("emplace_front 9: ", mlist);
    
    //去除头元素
    mlist.pop_front();
    printList("pop_front : ", mlist);
    
    // 插入到尾部
    mlist.push_back(10);
    printList("push_back 10: ", mlist);
    mlist.emplace_back(11);
    printList("emplace_back 11", mlist);
    // 删除尾部元素
    mlist.pop_back();
    printList("pop back", mlist);
    
    
    auto a4 = find(mlist.begin(),mlist.end(),4);
    mlist.erase(a4);
    printList("after erase a4", mlist);
    
    mlist.erase(mlist.begin());
    printList("after earse begin()", mlist);
    
    // 排序:默认从小到大
    mlist.sort();
    printList("after sort", mlist);
    //当然可以改成从大到小
    mlist.sort(greater<int>());
    printList("after sort big -> small ", mlist);
    
    //顺序反转
    mlist.reverse();
    printList("after reverse ", mlist);
    
    //去除重复节点
    mlist.unique();
    printList("after unique", mlist);
    
    //删除list中值为10的节点
    mlist.remove(10);
    printList("after remove 10:", mlist);
    
    // 删除list中值大于等于3的节点,这里使用了lamda表达式
    mlist.remove_if([](int n){return n>=3;});
    printList("after remove >=3 :", mlist);
    
    
    cout<<"before clear the size of list is "<< mlist.size()<<endl;
    mlist.clear();
    cout<<"after clear the size of list is "<< mlist.size()<<endl;

    return 0;
}
/* 运行结果
 mlist    1    2    3    4
 mlist1    1    2    3
 mlist2    1    2    3    4
 mlist3    1    1    1    1    1
 mlist4    1    2    3    4    5
 mlist front: 1
 mlist back: 4
 print all elements by iterator: 1    2    3    4
 mlist empty 0
 mlist size() 4
 mlist max_size 768614336404564650
 insert begin():     9    10    1    2    3    4
 push_front 10:     10    9    10    1    2    3    4
 emplace_front 9:     9    10    9    10    1    2    3    4
 pop_front :     10    9    10    1    2    3    4
 push_back 10:     10    9    10    1    2    3    4    10
 emplace_back 11    10    9    10    1    2    3    4    10    11
 pop back    10    9    10    1    2    3    4    10
 after erase a4    10    9    10    1    2    3    10
 after earse begin()    9    10    1    2    3    10
 after sort    1    2    3    9    10    10
 after sort big -> small     10    10    9    3    2    1
 after reverse     1    2    3    9    10    10
 after unique    1    2    3    9    10
 after remove 10:    1    2    3    9
 after remove >=3 :    1    2
 before clear the size of list is 2
 after clear the size of list is 0
 Program ended with exit code: 0
 */
