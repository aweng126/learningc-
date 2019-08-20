//
//  learnUnion.cpp
//  learningc++
//
//  Created by 李庆文 on 2019/8/12.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class ExamInfo{
public:
    ExamInfo(string name,char grade) :name(name), mode(GRADE),grade(grade){};
    ExamInfo(string name,bool pass) :name(name), mode(PASS),pass(pass){};
    ExamInfo(string name,int percent) :name(name),mode(PERCENTAGE),percent(percent){};
    void show();
private:
    string name;
    enum{
        GRADE,
        PASS,
        PERCENTAGE
    }mode;
    union{
        char grade;     //等级制的成绩
        bool pass;      //是否通过的成绩
        int percent;    //百分制的成绩
    };
};

void ExamInfo::show(){
    switch (mode) {
        case GRADE:
            cout << name <<": "<<grade<<endl;
            break;
        case PASS:
            cout << name <<": "<< pass <<endl;
            break;
        case PERCENTAGE:
            cout << name <<": "<< percent <<endl;
        default:
            break;
    }
}


//int main(){
//    cout<<"***********learning union**************"<<endl;
//
//    ExamInfo course1("calculus",true);
//    ExamInfo course2("English",'B');
//    ExamInfo course3("c++ programming",86);
//    course1.show();
//    course2.show();
//    course3.show();
//    return 0;
//}
