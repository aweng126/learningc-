//
//  NextPermutation.cpp
//  learningc++
//
//  Created by 李庆文 on 2019/8/25.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void printVector(vector<int>& vec){
    for(auto i:vec){
        cout<<i<<"\t";
    }
    cout<<endl;
}


void nextPermutation(vector<int>& nums) {
    auto i = nums.size() - 1;
    while(i>=1 && nums[i]<=nums[i-1]){
        i--;
    }
    i--;
    cout<<"i="<<i<<endl;
    
    if(i>=0){
        auto j = nums.size() -1;
        while(j>=1 && nums[j] <= nums[i]){
            j--;
        }
        
        cout<<"j="<<j<<endl;
        printVector(nums);
        
        //exchange
        int a = nums[i];
        nums[i] = nums[j];
        nums[j] = a;
        
        printVector(nums);
        
        sort(nums.begin()+i+1,nums.end());
        
        printVector(nums);
        cout<<endl;
    }else{
        sort(nums.begin(), nums.end());
    }
}
int main(){
    vector<int> a = {5,1,1};
    printVector(a);
    nextPermutation(a);
    return 0;
}
