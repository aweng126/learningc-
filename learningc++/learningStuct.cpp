//
//  learningTypeDef.cpp
//  learningc++
//
//  Created by 李庆文 on 2020/2/24.
//  Copyright © 2020 李庆文. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;
namespace test1{
// 正常结构体的写法
    struct Point{
        int x;
        int y;
    };
    void test(){
        struct Point p = {1,3};
        cout<<"test1 x= "<<p.x<<" y="<<p.y<<endl;
     }
}

namespace test2{
// 如果struct仅仅使用一次的话，就可以字节省略struct的名字
    struct{
        int x;
        int y;
    }p;
    void test(){
        p = {1,3};
        cout<<"test2 x= "<<p.x<<" y="<<p.y<<endl;
     }
}

namespace test3{
// 若是将上面两种情况结合起来，就会变成带有变量名的声明。
    struct Point{
        int x;
        int y;
    }p;
    /**
     等价于如下方式
     struct Point{
        int x;
        int y;
     };
     struct Point p;
     */
    void test(){
        p = {1,3};
        cout<<"test3 x= "<<p.x<<" y="<<p.y<<endl;
     }
}

namespace test4{
// 如果有typedef来将结构体直接定义一个别名p,以后再声明结构体对象的时候就和声明类对象一样啦。
    typedef struct Point{
        int x;
        int y;
    } p;
    void test(){
        p p1 = {1,3};
        cout<<"test4 x= "<<p1.x<<" y="<<p1.y<<endl;
     }
}



int main(){
    test1::test();
    test2::test();
    test3::test();
    test4::test();
    return 0;
}
