//
//  SavingAccount.cpp
//  learningc++
//
//  Created by 李庆文 on 2019/8/13.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include "savingAccount.h"
#include <iostream>
#include <cmath>
using namespace std;

double SavingAccount::total = 0;
//savingAccount 类中函数的实现
SavingAccount::SavingAccount(int id,int date,double rate):id(id),lastDate(date),rate(rate),balance(0),accumulation(0){
    cout<<date<<"\t"<<id<<" is created!"<<endl;
}

void SavingAccount::record(int date,double amount){
    accumulation = accumulate(date);
    lastDate = date;
    amount = floor(amount*100+0.5)/100;
    balance += amount;
    total += amount;
    cout <<date<<"\t"<<"id"<<amount<<"\t"<<balance<<endl;
}

void SavingAccount::deposit(int date,double amount){
    record(date,amount);
}

void SavingAccount::withdraw(int date, double amount){
    if(amount>balance){
        cout<<"余额不足"<<endl;
    }else{
        record(date,-amount);
    }
}

void SavingAccount::settle(int date){
    double interest = accumulate(date)*rate/365;
    if(interest!=0){
        record(date,interest);
    }
    accumulation = 0;
}

void SavingAccount::show() const {
    cout<<" id: "<<id<<"\t balance"<<balance<<endl;
}

double SavingAccount::getTotal(){
    return total;
}

