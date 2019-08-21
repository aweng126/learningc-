//
//  learningMap.cpp
//  learningc++
//
//  Created by 李庆文 on 2019/8/21.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <map>
#include <string>
#include <utility>

using namespace std;
//
//int main(){
//    map<string,int> courses;
//    //将课程信息插入到course映射中。
//    courses.insert(make_pair("CSAPP", 3));
//    courses.insert(make_pair("C++", 2));
//    courses.insert(make_pair("CSARCH", 4));
//    courses.insert(make_pair("COMPILER", 4));
//    courses.insert(make_pair("OS", 5));
//
//    int n = 3; //剩下的选课次数
//    int sum = 0;//学分总和
//    while(n>0){
//        string name;
//        cin>>name;
//        map<string,int>::iterator iter = courses.find(name);
//        if(iter==courses.end()){
//            cout<<name<<"\t is not available"<<endl;
//        }else{
//            sum+=iter->second;
//            courses.erase(iter); //每次选完这门课之后会在映射中将其删掉
//            n--;
//        }
//    }
//
//    cout<<"Total credit = "<<sum<<endl;
//    cout<<"size = "<<courses.size()<<endl;
//    return 0;
//}
