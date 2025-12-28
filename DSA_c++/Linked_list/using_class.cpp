#include<iostream>
using namespace std ;
class Node{
    public :
       string name ;
       int roll ;
       int id ;
       Node *next  = nullptr ;
       Node(string n , int r , int i): name(n ), roll(r), id(i){};
};
class LinkedList{
    Node *head ;
    public :
    LinkedList(){
        head = nullptr ;
    }
    ~LinkedList(){
        delete head ;
    }
    void insert(string name , int roll , int id ){
        Node *newNode = (Node*)malloc(sizeof(Node)); ;
        if(head == nullptr ){
           head = newNode ;
        }else{
            Node *temp = head ;
            while(temp->next != nullptr ){
                temp = temp->next ;
            }
            temp ->next = newNode ;
            newNode->next = nullptr ;
        }
    }
    void insert(string name , int roll , int id  , int index){
        Node *newNode = new Node(name , roll , id );
        Node *temp = head ;
        int i = 0 ;
        while(i < index - 1){
            temp = temp ->next ;
            i++;
        }
         newNode ->next = temp->next ;
         temp->next = newNode ;     
    }
  void traverse(){
    Node *temp = head ;
    while(temp->next != nullptr ){
        cout<<"Name :" <<temp->name <<endl ;
        cout<<"Roll :" <<temp->roll <<endl ;
        cout<<"ID :" <<temp->id <<endl ; 
        temp = temp->next ;

    }
  }
  void merge(LinkedList l1 ,LinkedList l2  ){
    Node *temp1 = l1.head ;
    Node *temp2 = l2.head;
  }
    
};
int main(){
    LinkedList head_1;
    head_1.insert("A", 1, 101);
    head_1.insert("B", 2, 102); 
    head_1.insert("C", 3, 103);
    head_1.insert("D", 4, 104);
    head_1.traverse();
    head_1.insert("E", 5,105,2);
    head_1.traverse();
    return 0 ;
 }