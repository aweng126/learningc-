//
//  learningContainer.cpp
//  learningc++
//
//  Created by 李庆文 on 2019/8/19.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <list>
#include <deque>

using namespace std;

template <class T>
void printContainer(const char * msg,const T& s){
    cout<<msg<<endl;
    copy(s.begin(),s.end(),ostream_iterator<int>(cout, " "));
    cout<<endl;
}

//int main(){
//    //两种声明方式
//    //deque<int> s={1,2,3,4};
//    deque<int> s{1,2,3,4};
//    printContainer("deque",s);
//    //两种获取对应位置元素的方式
//    cout<<s[0]<<endl;
//    cout<<s.at(0)<<endl;
//    //打印出全部的元素
//    cout<<"print all elements"<<endl;
//    for(auto i:s){
//        cout<<i<<'\t';
//    }
//    cout<<"\n";
//    cout<<"print all elements by iteror"<<endl;
//    auto siter = s.begin();
//    while(siter!=s.end()){
//        cout<<*siter++<<endl;
//    }
//
//    cout<<"s.front() "<<s.front()<<endl;
//    cout<<"s.back() "<<s.back()<<endl;
//
//    cout<<"s.begin() "<<*s.begin()<<endl; //s.begin()就是s的首地址
//    cout<<"s.end()-s.begin() "<<s.end()-s.begin()<<endl;
//
//    cout<<"s.empty() "<<s.empty()<<endl;
//    cout<<"s.size() "<<s.size()<<endl;
//    cout<<"s.max_size() "<<s.max_size()<<endl;
//
//    //s.clear();
//    //cout<<"after clear s.empty() "<<s.empty()<<endl;  // 1
//
//    s.push_front(5);
//    printContainer("after push front 5 ",s);
//    s.pop_front();
//    printContainer("after pop front",s);
//
//    s.push_back(5);
//    printContainer("after push back",s);
//    s.pop_back();
//    printContainer("after pop back ",s);
//
//    s.emplace(s.begin()+2,5);
//    printContainer("emplace ",s);
//
//    s.emplace_back(6);
//    printContainer("emplace back",s);
//
//    s.erase(s.begin()+2);
//    printContainer("erase begin+2",s);
//
//
//
//    //用s容器中的内容的逆序构造列表容器1
//    list<int> l(s.rbegin(),s.rend());
//    printContainer("list at first",l);
//
//    //将列表容器l的每相邻两个容器的顺序颠倒
//    list<int>::iterator iter = l.begin();
//    while(iter!=l.end()){
//        int v = *iter;
//        iter = l.erase(iter);
//        l.insert(++iter,v);
//    }
//    printContainer("list in the end ",l);
//
//    //用列表容器1的内容给s赋值，将s输出
//    s.assign(l.begin(),l.end());
//    printContainer("deque at last:",s);
//    return 0;
//}
