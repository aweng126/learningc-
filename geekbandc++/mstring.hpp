//
//  mstring.hpp
//  learningc++
//
//  Created by 李庆文 on 2019/11/21.
//  Copyright © 2019 李庆文. All rights reserved.
//   侯捷老师的c++教程的第二部分：带有指针的类mstring https://www.bilibili.com/video/av19038490

#ifndef mstring_hpp
#define mstring_hpp

#include <stdio.h>
#include <cstring>
#include <iostream>
using namespace std;
class mstring{
public:
    mstring(const char* a = 0);
    mstring(const mstring& str);
    mstring& operator =(const mstring& str);
    ~mstring();
    char* get_c_str() const {return mdata;}
    
private:
    char* mdata;
    
};

inline
mstring::mstring(const char* a){
    if(a){
        mdata = new char[strlen(a)+1];
        strcpy(mdata, a);
    }else{
        mdata = new char[1];
        *mdata = '\0';
    }
};

inline
mstring::mstring(const mstring& str){
    mdata = new char[std::strlen(str.mdata)+1];
    strcpy(mdata, str.mdata);
};

inline
mstring& mstring::operator=(const mstring& str){
    if(this == &str){
        return *this;
    }
    this->mdata = new char[strlen(str.mdata)+1];
    strcpy(this->mdata,str.mdata);
    return *this;
}

inline
mstring::~mstring(){
    delete[] mdata;
};

ostream& operator << (ostream& os,const mstring& str){
    return os<<str.get_c_str();
};

#endif /* mstring_hpp */
