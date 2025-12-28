#include<iostream>
using namespace std ;
class Animal{
    string name ;
    int age ;
    public:
    Animal(string n , int a):name(n), age(a){}
    friend void display(Animal a);
};
void display(Animal a){
    cout<<"Name:"<<a.name <<" Age:"<<a.age<<endl ;      
}
int main(){
    Animal a("Dog" , 98);
    display(a);
}