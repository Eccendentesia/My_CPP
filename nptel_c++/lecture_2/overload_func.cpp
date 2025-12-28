#include<iostream>
using namespace std ;
int add(int x , int y){return x+y ;}
double add(double x , double y){return x+y;}
int main(){
    int a= 19, b=188, c ;
    double s=28,t=216 ,u ;
    c = add(a,b);
    u = add(a,b);
    cout << c <<" "<<u ;
}