//
//  learningStack.cpp
//  learningc++
//
//  Created by 李庆文 on 2019/8/20.
//  Updated by 李庆文 on 2019/2/8
//  Copyright © 2019 李庆文. All rights reserved.
//  Stack 栈 的使用：后进先出

#include <stdio.h>
#include <iostream>
#include <stack>
using namespace std;
int main(){
    // 声明
    stack<int> s;
    stack<int> s1({1,2,3});
    stack<int> s2(s1);
    
    cout<<"s2= ";
     while(!s2.empty()){
         cout<<s2.top()<<'\t';
         s2.pop();
     }
    cout<<endl;
    
    //操作
    cout<<"s.empty(): "<<s.empty()<<endl;
    cout<<"s.size(): "<<s.size()<<endl;
    // 这里也需要注意一下，必须在确认stack中元素个数不为0的情况下，
    // 才可以使用s.top()来获取栈顶元素，否则就会报错。
    //cout<<"s.top():"<<s.top()<<endl;
    
    s.push(1);
    s.emplace(2);
    cout<<"after push2 s.size(): "<<s.size()<<endl;
    cout<<"after push2 s.empty(): "<<s.empty()<<endl;
    cout<<"after push2 top element is\t"<<s.top()<<endl;

    s.pop();
    cout<<"after pop(),s.size():"<<s.size()<<endl;
    cout<<"after pop(),s.top():"<<s.top()<<endl;

    s.push(3);
    s.push(4);
    s.push(5);
    // 遍历
    cout<<"after push 345,s= ";
    while(!s.empty()){
        cout<<s.top()<<'\t';
        s.pop();
    }
    cout<<endl;
    return 0;
}
/* 运行结果
 s2= 3    2    1
 s.empty(): 1
 s.size(): 0
 after push2 s.size(): 2
 after push2 s.empty(): 0
 after push2 top element is    2
 after pop(),s.size():1
 after pop(),s.top():1
 after push 345,s= 5    4    3    1
 Program ended with exit code: 0
 */
