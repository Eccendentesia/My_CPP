#include<iostream>
using namespace std ;
class node{
    public:
    int data ; 
    node *next ; 
    node(int d):data(d){next = NULL ; }  
    node(){next = NULL ; } 
}; 
class LL{
    node *head = NULL ; 
    public:
    void Add(int val){
        node *new_node = new node(val)  ;
       node *temp = head ;
       if(temp == NULL){
        temp = new_node ;
       }else{
        while(temp->next != NULL){
            temp = temp->next ;

        }
        temp->next = new_node ; 
       }

      delete temp ; 
    } 
};