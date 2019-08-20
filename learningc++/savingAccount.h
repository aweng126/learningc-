//
//  savingAccount.h
//  learningc++
//
//  Created by 李庆文 on 2019/8/13.
//  Copyright © 2019 李庆文. All rights reserved.
//

#ifndef savingAccount_h
#define savingAccount_h
#endif /* savingAccount_h */

#include <iostream>
using namespace std;
class SavingAccount{
private:
    int id;
    double balance;
    double rate;
    int lastDate;
    double accumulation;
    static double total;
    void record(int date,double amount);
    double accumulate(int date) const{
        return accumulation+(date-lastDate)*balance;
    }
public:
    //构造函数
    SavingAccount(int id,int date,double rate);
    int getID() const{return id;}
    double getBalance() const{return balance;}
    double getRate() const {return rate;}
    void show() const;
    void deposit(int date,double amount);
    void withdraw(int date,double amount);
    void settle(int date);
    static double getTotal();
};
