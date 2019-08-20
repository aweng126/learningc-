//
//  BankAccount.cpp
//  learningc++
//
//  Created by 李庆文 on 2019/8/12.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;
class BankAccout{
private:
    int id;
    double banlance;
    double rate;
    int lastDate;
    double accumulation;    //按照每天的余额进行累加
    //记录一笔账，date为日期，account为金额
    void record(int date,double amount);
    //获得到指定日期为止的存款金额按日累积
    double accumulate(int date) const{
        return accumulation+banlance*(date-lastDate);
    }
public:
    BankAccout(int date,int id,double rate);
    int getId(){return id;}
    double getBanlance(){return banlance;}
    double getRate(){return rate;}
    void deposit(int date,double amount);  //存入现金
    void withdraw(int date,double amount); //取出现金
    void settle(int date); //结算利息，每年一月一日调用一次该函数
    void show(); //显示账户信息
};

BankAccout::BankAccout(int date,int id,double rate):lastDate(date),id(id),rate(rate),banlance(0),accumulation(0){
    cout<<id<<" has been created!"<< "in"<< date <<endl;
}

void BankAccout::record(int date,double amount){
    accumulation = accumulate(date);
    lastDate = date;
    amount = floor(amount*100+0.5)/100;
    banlance += amount;
    cout<<date<<" "<<id<< " "<<amount<<" "<<banlance<<endl;
}

void BankAccout::deposit(int date,double amount){
    record(date,amount);
}

void BankAccout::withdraw(int date,double amount){
    if(getBanlance()<amount){
        cout<<"余额不足"<<endl;
    }else{
        record(date,-amount);
    }
}

void BankAccout::settle(int date){
    double interest = accumulate(date)*rate/365;
    if(interest!=0){
        record(date,interest);
    }
    accumulation = 0;
}

void BankAccout::show(){
    cout <<id<<" has "<< banlance <<endl;
}
//int main(){
//    BankAccout ba0(1,11111,0.015);
//    BankAccout ba1(2,22222,0.015);
//    ba0.deposit(5,5000);
//    ba1.deposit(25,10000);
//    ba0.deposit(45,5500);
//    ba1.withdraw(60, 4000);
//    ba0.settle(90);
//    ba1.settle(90);
//    ba0.show();
//    ba1.show();
//
//}
