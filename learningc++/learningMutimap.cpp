//
//  learningMutimap.cpp
//  learningc++
//
//  Created by 李庆文 on 2019/8/21.
//  updated by 李庆文 on 2020/2/5
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <map>
#include <typeinfo>
using namespace std;

template<class K>
void print(const string s,const K& mmap){
    cout<<s<<endl;
    for(auto& a:mmap){
        cout<<"{"<<a.first<<","<<a.second<<"} ";
    }
    cout<<'\n'<<endl;
}

int main(){
    multimap<int,char> dict {
        {1,'A'},
        {2,'B'},
        {2,'C'},
        {3,'D'},
        {3,'E'},
        {2,'F'}
    };
    //通过empty()来判断multimap是否为空
    cout<<"dict.empty() "<<dict.empty()<<endl;
    
    //通过size()来判断元素个数
    cout<<"dict.size() "<<dict.size()<<endl;
    
    print("插入前 "+to_string(dict.size()),dict);
    // 通过insert插入元素
    dict.insert({4,'G'});
    dict.insert(pair<int, char>(4,'F'));
    dict.insert(make_pair(4, 'H'));
    dict.insert({{5,'I'},{5,'J'}});
    print("插入后 "+to_string(dict.size()),dict);
    
    // 通过erase来删除特定key的元素,参数可以是key，也可以是一个iterator
    dict.erase(1);
    print("删除key=1后 "+to_string(dict.size()),dict);
    
    // 返回类型是pair<iterator,iterator>,仅仅返回符合条件的pair
    auto range = dict.equal_range(2);
    //cout<<typeid(range).name()<<endl; //pair类型
    cout<<"equal_range(2)"<<endl;
    for(auto i = range.first;i!=range.second;++i){
        cout<<"i.first\t"<<i->first<<"\ti.second\t"<<i->second<<endl;
    }
    
    // lower_bound
    auto lower = dict.lower_bound(2);
    cout<<"lower_bound(2) "<<(lower->first)<<" "<<lower->second<<endl;
    
    // upper_bound
    auto upper = dict.upper_bound(2);
    cout<<"upper_bound(2) "<<(upper->first)<<" "<<upper->second<<endl;
    
    // equal_range返回的两个pair实际上就是用lower_bound和upper_bound来实现的
    cout<<"lower_bound == range.first "<< (lower == range.first)<<endl;
    cout<<"upper_bound == range.first "<< (upper == range.second)<<endl;
    
    //通过count来判断key等于给定的值一共有多少个pair
    cout<<"count(2) "<<dict.count(2)<<endl;
    //这个数量可以通过range的两个iterator来实现查找
    cout<<"distance(range.first,range.second) "<<distance(range.first,range.second)<<endl;
    //或者使用lower_bound和upper_bound来实现
    cout<<"distance(lower,upper)"<<distance(lower, upper)<<endl;
    
    //通过find来判断是否存在key,返回一个iterator,如果有多个key符合条件，不一定会返回哪一个。
    auto find2 = dict.find(2);
    cout<<"find2 "<<find2->first<<" "<<find2->second<<endl;
    
    //如果通过find来查找的时候没有找到对应的key,那么就会返回dict.end()这个iterator
    auto find5 = dict.find(10);
    cout<<"find10 "<<(find5==dict.end())<<endl;
    
    auto a = dict.begin();
    cout<<"dict.begin().type"<<typeid(a).name()<<endl;

    //关于各类iterator
    cout<<"正向遍历dict.begin()->dict.end()"<<endl;
    for(auto a = dict.begin(); a!=dict.end(); a++){
       // a->second = 'M'; 这里修改就没有问题
        cout<<"{"<<a->first<<","<<a->second<<"} ";
    }
    
    cout<<"正向遍历，dict.cbegin()->dict.cend()"<<endl;
    for(auto a = dict.cbegin(); a!=dict.cend(); a++){
       // a -> second = 'N'; 这里修改就有问题，原因是返回的const_iterator是不允许修改的。
        cout<<"{"<<a->first<<","<<a->second<<"} ";
    }
    cout<<endl;
    
    cout<<"反向遍历，dict.rbegin()->dict.rend()"<<endl;
    for(auto a = dict.rbegin(); a!=dict.rend(); a++){
        cout<<"{"<<a->first<<","<<a->second<<"} ";
    }
    cout<<endl;
    
    cout<<"反向遍历，dict.rbegin()->dict.rend()"<<endl;
    for(auto a = dict.rbegin(); a!=dict.rend(); a++){
        cout<<"{"<<a->first<<","<<a->second<<"} ";
    }
    cout<<endl;
    
    cout<<"反向遍历，dict.crbegin()->dict.crend()"<<endl;
       for(auto a = dict.crbegin(); a!=dict.crend(); a++){
           cout<<"{"<<a->first<<","<<a->second<<"} ";
       }
    cout<<endl;
    
    return 0;
}
