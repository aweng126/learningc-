//
//  learningPointer.cpp
//  learningc++
//
//  Created by 李庆文 on 2019/8/14.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

void splitFloat(float x,int *intPart,float *floatPart){
    *intPart=static_cast<int>(x);
    *floatPart=x-*intPart;
}

void splitFloatV2(float x,int &n,float &f){
    n=static_cast<int>(x);
    f=x-n;
};
//
//int main(){
//    int i;  //定义一个int类型的变量i
//    int *ptr = &i; //声明一个int类型的指针变量ptr，并用取址符&取出i的地址赋值w给指针ptr作为初值
//    i=10;//给变量i赋值10
//    cout<<"i=\t"<<i<<endl; //i的值当然是10
//    cout<<"*pr=\t"<<*ptr<<endl; //由于ptr指向的是i的地址，所以当使用*ptr可以读取到ptr所指向的地址的元素，然后就可以得到最后的值了。
//    
//    int a=2;
//    const int *p1 = &a;
//    cout<<"*p1="<<*p1<<endl;
//    
//    int b=3;
//    p1 = &b;
//    cout<<"p1之后一个地址"<<p1[-1]<<endl;
//   // *p1 = 1;
//    
//    /*
//     * void 指针的使用：void指针一般在指针所指向的数据类型不确定的时候使用
//     */
//    void *p3;
//    int c=5;
//    p3=&c;  //void类型的指针指向整型变量
//    int *pint = static_cast<int *>(p3); //void类型指针赋值给int类型的指针。
//    cout<<"*pint="<<*pint<<endl;
//    
//    //int aa[3]={4,5,6};
//    //cout<<"a[-1]="<<aa[3]<<endl;  //此处aa的名称相当于地址，然后可以通过[n]来表示从当前位置开始的第n个数，n可以为负数或者大于数组大小的数，
//    
//    cout<<"******3种方式输出数组元素*****"<<endl;
//    int marray[5]={1,2,3,4,5};
//    for(int i =0; i<5; i++){
//        cout<<marray[i];
//    }
//    cout<<endl;
//    
//    for(int i=0;i<5;i++){
//        cout<<*(marray+i);
//    }
//    cout<<endl;
//    
//    for(int *p = marray;p<(marray+5);p++){
//        cout<<*p;
//    }
//    cout<<endl;
//    
//    
//    cout<<"******指针数组的应用********"<<endl;
//    int line1[]={1,2,3};
//    int line2[] ={4,5,6};
//    int line3[] = {7,8,9};
//    
//    int *matrix[3]={line1,line2,line3};
//    for(int i=0;i<3;i++){
//        for(int j =0;j<3;j++){
//               cout<<matrix[i][j]<<" "<<*(matrix[i]+j)<<endl;
//               cout<<*matrix[i]<<endl;
//        }
//    }
//    
//    cout<<"********二维数组的应用*********"<<endl;
//    int array2[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//    cout<<"正常输出"<<endl;
//    for(int i =0;i<3;i++){
//        for(int j =0;j<3;j++){
//            cout<<array2[i][j]<<"\t";
//        }
//        cout<<endl;
//    }
//    cout<<"******将二维数组作为指针数组进行访问*******"<<endl;
//    
//    for(int i =0;i<3;i++){
//        for(int j =0;j<3;j++){
//            cout<< *(*(array2+i)+j)<<"\t";
//        }
//        cout<<endl;
//    }
//    
//     cout<<"******用指针作为函数参数*******"<<endl;
//    float v90 = 98.23,f;
//    int n;
//    splitFloat(v90, &n, &f);
//    cout<<"n="<<n<<" f="<<f<<endl;
//    splitFloatV2(v90,n,f);
//    cout<<"n="<<n<<" f="<<f<<endl;
//    
//    
////
//    return 0;
//}
