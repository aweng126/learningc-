//
//  learningContainer.cpp
//  learningc++
//  Created by 李庆文 on 2019/8/19.
//  Updated by 李庆文 on 2020/2/6.
//  Copyright © 2019 李庆文. All rights reserved.
//
 
#include <iostream>
#include <deque>

using namespace std;

template <class T>
void printContainer(const char * msg,const T& s){
    cout<<msg<<'\t';
    copy(s.begin(),s.end(),ostream_iterator<int>(cout, " "));
    cout<<endl;
}

//int main(){
//    //三种声明方式
//    deque<int> s={1,2,3,4};
//    deque<int> s1{1,2,3,4};
//    deque<int> s2(s.begin(),s.end()-1);
//
//    printContainer("deque s",s);
//    printContainer("deque s1",s1);
//    printContainer("deque s2 ",s2);
//
//    //两种获取对应位置元素的方式
//    cout<<"s[0] "<<s[0]<<endl;
//    cout<<"a.at[0] "<<s.at(0)<<endl;
//
//    //打印出全部的元素
//    cout<<"print all elements "<<endl;
//    for(auto i:s){
//        cout<<i<<'\t';
//    }
//    cout<<"\n";
//
//    cout<<"print all elements by iteror"<<endl;
//    auto siter = s.begin();
//    while(siter!=s.end()){
//        cout<<*siter<<'\t';
//        siter++;
//    }
//    cout<<endl;
//
//    cout<<"s.front() "<<s.front()<<endl;
//    cout<<"s.back() "<<s.back()<<endl;
//
//    cout<<"s.begin() "<<*s.begin()<<endl;
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
//    printContainer("after push front 5: ",s);
//    s.pop_front();
//    printContainer("after pop front: ",s);
//
//    s.push_back(5);
//    printContainer("after push back5: ",s);
//    s.pop_back();
//    printContainer("after pop back: ",s);
//
//    s.emplace(s.begin()+2,5);
//    printContainer("emplace begin+2 ",s);
//
//    s.emplace_back(6);
//    printContainer("emplace back",s);
//
//    s.erase(s.begin()+2);
//    printContainer("erase begin+2",s);
//
//
//    //用列表容器1的内容给s赋值，将s输出
//    reverse(s.begin(),s.end());
//    printContainer("deque l by assign:",s);
//
//    return 0;
//}
///* 运行结果
// deque s    1 2 3 4
// deque s1    1 2 3 4
// deque s2     1 2 3
// s[0] 1
// a.at[0] 1
// print all elements
// 1    2    3    4
// print all elements by iteror
// 1    2    3    4
// s.front() 1
// s.back() 4
// s.begin() 1
// s.end()-s.begin() 4
// s.empty() 0
// s.size() 4
// s.max_size() 4611686018427387903
// after push front 5:     5 1 2 3 4
// after pop front:     1 2 3 4
// after push back5:     1 2 3 4 5
// after pop back:     1 2 3 4
// emplace begin+2     1 2 5 3 4
// emplace back    1 2 5 3 4 6
// erase begin+2    1 2 3 4 6
// deque l by assign:    6 4 3 2 1
// Program ended with exit code: 0
// */
