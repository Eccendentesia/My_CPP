#include<iostream>
using namespace std ;
namespace myclass{
class node{
    public :
    int num ;
    node *next ;
    node(int n): num(n), next(NULL){}
   

};
class linked{
 node *head ;
 public:
 linked(): head(NULL){};
 
 void traverse(){
    node *newNode = head ;
    while(newNode->next != NULL){
        cout<< newNode->num <<endl;
        newNode = newNode->next ;
    }
 }
void insert(int n ){
    node *newNode = new node(n);
    if(head == NULL){
        head = newNode ;
    }else {
        node *temp = head ;
        while(temp->next  != NULL){
            temp = temp->next;
        }
        temp->next  = newNode ;
    }
}  

};
}