//
//  learningQueue.cpp
//  learningc++
//
//  Created by 李庆文 on 2019/8/20.
//  Updated by 李庆文 on 2020/2/8
//  Copyright © 2019 李庆文. All rights reserved.
//

//#include <stdio.h>
//#include <queue>
//#include <iostream>
//using namespace std;
//
//int main(){
//    // 声明
//    queue<int> q ;
//    queue<int> q1({1,2,3,4});
//    queue<int> q2(q1);
//
//    cout<<"q2: ";
//    while(q2.size() != 0){
//         cout<<q2.front()<<'\t';
//         q2.pop();
//     }
//    cout<<endl;
//
//    // 其他操作。 如果队列为空，那么调用front和back的时候就会报错，
//    // 所以给我们的警示就是在通过front和back方法获取队列元素的时候，需要提前确定内部是含有对应的元素的。
//    //cout<<"q.front():"<<q.front()<<endl;
//    //cout<<"q.back():"<<q.back()<<endl;
//    cout<<"q.empty():"<<q.empty()<<endl;
//    cout<<"q.size():"<<q.size()<<endl;
//
//
//    q.push(1);
//    q.emplace(2);
//
//    cout<<"after push q.front():"<<q.front()<<endl;
//    cout<<"after push q.back():"<<q.back()<<endl;
//    cout<<"after push q.empty():"<<q.empty()<<endl;
//    cout<<"after push q.size():"<<q.size()<<endl;
//
//
//    q.pop();
//    cout<<"after pop(): ";
//    while(q.size() != 0){
//        cout<<q.front()<<'\t';
//        q.pop();
//    }
//    return 0;
//}
//
///* 运行结果
// q2: 1    2    3    4
// q.empty():1
// q.size():0
// after push q.front():1
// after push q.back():2
// after push q.empty():0
// after push q.size():2
// after pop(): 2    Program ended with exit code: 0
// */
