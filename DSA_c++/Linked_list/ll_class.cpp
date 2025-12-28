#include<iostream>
using namespace std ;
class node{
    public :
    int data ;
    node *next ;
    node(int value ): data(value) , next(nullptr){
        cout<<"Constructor with value "<< value << " created "<<endl;
    }
};
class LinkedList{
      node *head ;
      public :
      LinkedList(): head(nullptr){};
      ~LinkedList(){
        cout<<"Destructor working with linked list"<<endl;
        while(head != nullptr){
            node *temp = head ;
            head = head -> next ;
            delete temp ;
        }
      }
      void insert(int data ){
        node *newhead = new node(data);
        if(head == nullptr ){
         head = newhead ;
        }else{ 
            node *current = head ;
            while(current->next != nullptr){
               current = current->next ;
            }
            current->next = newhead ;
            
        } 
      }
      void insert( int data , int index ){
        int i = 0 ;
        node *newnode = new  node(data );
        node *current = head ;
        while(i != index - 1){
            current = current ->next ;
            i++;
        }
        newnode->next = current->next ;
        current->next = newnode ;

      }
     void deletion(node*& head, int n) {
    if (head == nullptr) return;

    // Case 1: delete head
    if (n == 0) {
        node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    node* p = head;
    // Move p to (n-1)th node
    for (int i = 0; i < n - 1 && p != nullptr; i++) {
        p = p->next;
    }

    // If p is null or p->next is null, n is out of bounds
    if (p == nullptr || p->next == nullptr) return;

    node* q = p->next;
    p->next = q->next;
    delete q;
}
      int traverse(){
        node *current = head ;
        while(current != nullptr ){
            
            cout<< current->data <<endl ;
            current = current ->next ;
}

      }
};
int main(){
       LinkedList head ;
       head.insert(78);
       head.insert(82);
       head.insert(26);
       head.insert(28);
       head.insert(78);
       head.insert(82);
       head.insert(26);
       head.insert(28);
       head.traverse();
}