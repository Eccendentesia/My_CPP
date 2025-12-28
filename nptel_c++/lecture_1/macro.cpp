#include<iostream>
using namespace std ;
#define str(x) #x         // # for string
#define glue(a,b) a##b    // ## for concatenation

int main(){
    cout<<str(test)<<endl;
    glue(c,out) << str(age )<<endl;
    int t = 100;
    cout << t ;
}
/*
#if
#ifdef 
#ifndef
#else
#elif
#undef
#define
*/