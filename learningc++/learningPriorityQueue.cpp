//
//  learningPriorityQueue.cpp
//  learningc++
//
//  Created by 李庆文 on 2020/2/8.
//  Copyright © 2020 李庆文. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <queue>
using namespace std;
int main(){
    // 声明
    priority_queue<int> pq; // 默认是最大堆，可以通过下面的方式声明为最大堆。
    priority_queue<int,vector<int>,greater<int>> pq1;
    
    // 也可以通过如下方式直接将一个容器内的所有元素装进priority_queue中。
    vector<int> a = {1,4,2,3};
    priority_queue<int> pq2(less<int>(),a); // 最大堆
    cout<<"qp2.top():"<<pq2.top()<<endl;
    
//    下面这种方式为什么不行？？此处存疑。
//    priority_queue<int> pq3(greater<int>(),a); //最小堆
//    cout<<pq3.top()<<endl;
    
    
    //下面针对pq进行操作演示
    pq.push(2);
    pq.push(1);
    pq.emplace(3);
    pq.emplace(4);
    
    cout<<"pq.size()"<<pq.size()<<endl;
    cout<<"pq.empty()"<<pq.empty()<<endl;
    
    pq.pop();
    cout<<"after pop,pq.size()"<<pq.size()<<endl;
    
    // 遍历: priority_queue默认是最大堆，每次的通过top()获得的元素就是最大值。
    cout<<"pq = ";
    while(!pq.empty()){
        cout<<pq.top()<<'\t';
        pq.pop();
    }
    cout<<endl;
    
    return 0;
}

/* 运行结果。
 qp2.top():4
 pq.size()4
 pq.empty()0
 after pop,pq.size()3
 pq = 3    2    1
 Program ended with exit code: 0
 */
