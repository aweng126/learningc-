//
//  learningForwardlist.cpp
//  learningc++
//
//  Created by 李庆文 on 2020/2/6.
//  Copyright © 2020 李庆文. All rights reserved.
//  forward_list为x单向链表，而list是双向链表，

/*
keypoints：
1) 假设单向链表为： 1->2->3 则front位置是1，push_front,emplace_front,pop_front都是在此处操作的，
2）没有size()函数，
3）erase和erase函数需要使用c++20支持
4）iterator不支持++，--，+number等操作。
5）插入函数insert_after。
6）forward_list为单向链表，而list是双向链表。
 */

//#include <stdio.h>
//#include <iostream>
//#include <forward_list>
//#include <algorithm>
//using namespace std;
//
//template<class T>
//void printList(string s,const T& mlist){
//    cout<<s<<'\t';
//    for(auto a:mlist){
//        cout<<a<<'\t';
//    }
//    cout<<endl;
//}
//
//int main(){
//    //常见的list的声明方式
//    forward_list<int> mlist{1,2,3,4};
//    // 发现不能通过 list<int> mlist1(mlist.begin(),mlist.end()-2);这种方式声明，
//    // 也不能通过 list<int> mlist1(mlist.begin(),--mlist.end())这种方式声明,list是可以的。
//    forward_list<int> mlist1(mlist.begin(),mlist.end());
//    
//    forward_list<int> mlist2(mlist);
//    forward_list<int> mlist3(5,1);
//    forward_list<int> mlist4 = {1,2,3,4,5};
//    
//    printList("mlist", mlist);
//    printList("mlist1", mlist1);
//    printList("mlist2", mlist2);
//    printList("mlist3", mlist3);
//    printList("mlist4", mlist4);
//    
//    //front 获得第一个元素
//    cout<<"mlist front: "<<mlist.front()<<endl;
//    
//    
//    //遍历通过iterator
//    cout<<"print all elements by iterator: ";
//    forward_list<int>::iterator a  = mlist.begin();
//    for(;a!=mlist.end();a++){
//        cout<<*a<<'\t';
//    }
//    cout<<endl;
//    
//    // capacity相关 没有size()函数,为啥？此处存疑。
//    cout<<"mlist empty "<<mlist.empty()<<endl;
//    cout<<"mlist max_size "<<mlist.max_size()<<endl;
//    
//    
//    // Modifiers相关
//    //插入操作
//    mlist.insert_after(mlist.begin(), 10);
//    // 同样不能通过类似于 mlist.insert(mlist.begin()+2, 10);来插入元素
//    mlist.emplace_after(mlist.begin(), 9);
//    printList("insert begin(): ", mlist);
//    
//    //插入到头部
//    mlist.push_front(10);
//    printList("push_front 10: ", mlist);
//    mlist.emplace_front(9);
//    printList("emplace_front 9: ", mlist);
//    
//    //去除头元素
//    mlist.pop_front();
//    printList("pop_front : ", mlist);
//    
//    
////     erase 和erase_if 是c++20提供的
////    auto a4 = find(mlist.begin(),mlist.end(),4);
////    mlist.erase(a4);
////    printList("after erase a4", mlist);
////
////    mlist.erase(mlist.begin());
////    printList("after earse begin()", mlist);
//    
//    
//    // Operations 相关
//    // 排序:默认从小到大
//    mlist.sort();
//    printList("after sort", mlist);
//    //当然可以改成从大到小
//    mlist.sort(greater<int>());
//    printList("after sort big -> small ", mlist);
//    
//    //顺序反转
//    mlist.reverse();
//    printList("after reverse ", mlist);
//    
//    //去除重复节点
//    mlist.unique();
//    printList("after unique", mlist);
//    
//    //删除list中值为10的节点
//    mlist.remove(10);
//    printList("after remove 10:", mlist);
//    
//    // 删除list中值大于等于3的节点,这里使用了lamda表达式
//    mlist.remove_if([](int n){return n>=3;});
//    printList("after remove >=3 :", mlist);
//    
//    
//    cout<<"before clear mlist.empty() is "<< mlist.empty()<<endl;
//    mlist.clear();
//    cout<<"after clear mlist.empty() is "<< mlist.empty()<<endl;
//
//    return 0;
//}
/* 运行结果
 mlist    1    2    3    4
 mlist1    1    2    3    4
 mlist2    1    2    3    4
 mlist3    1    1    1    1    1
 mlist4    1    2    3    4    5
 mlist front: 1
 print all elements by iterator: 1    2    3    4
 mlist empty 0
 mlist max_size 1152921504606846975
 insert begin():     1    9    10    2    3    4
 push_front 10:     10    1    9    10    2    3    4
 emplace_front 9:     9    10    1    9    10    2    3    4
 pop_front :     10    1    9    10    2    3    4
 after sort    1    2    3    4    9    10    10
 after sort big -> small     10    10    9    4    3    2    1
 after reverse     1    2    3    4    9    10    10
 after unique    1    2    3    4    9    10
 after remove 10:    1    2    3    4    9
 after remove >=3 :    1    2
 before clear mlist.empty() is 0
 after clear mlist.empty() is 1
 Program ended with exit code: 0
 */
