//
//  learningArray2.cpp
//  learningc++
//
//  Created by 李庆文 on 2019/8/14.
//  Copyright © 2019 李庆文. All rights reserved.
//   二维数组数组名作为参数传的是地址，在方法中对数组元素进行更改，在数组中元素也发生了更改。

#include <stdio.h>
#include <iostream>
using namespace std;
void rowSum(int a[][4],int nRow){ //计算二维数组a，将其每行的元素加和，nRow是行数
    for(int i = 0;i<nRow;i++){
        for(int j=1;j<4;j++){
            a[i][0]+=a[i][j];
        }
    }
}
//int main(){
//    int table[3][4] = {{1,2,3,4},{2,3,4,5},{3,4,5,6}};
//    for (int i =0;i<3;i++){
//        for(int j =0;j<4;j++){
//            cout<<table[i][j]<<"\t";
//        }
//        cout<<endl;
//    }
//    rowSum(table, 3);
//    
//    for(int i = 0;i<3;i++){
//        cout<<table[i][0]<<endl;
//    }
//    
//    cout<<table<<endl;
//    return 0;
//}
