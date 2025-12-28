#include<iostream >
using namespace std;
struct node {
    int data ;
     node *next;
};
struct memorypool{
   node *head ;
   node *tail;
};
struct node *reverse(struct node *head ){
    node *temp1 = NULL , *temp2 = NULL ;
  while (head ){
    temp2 = head ->next ;
    head ->next = temp1 ;
    temp1 = head ;
    head = temp2;
    
  }
  return temp1 ;
}
void traverse(struct node* ptr ){
 while (ptr != NULL) {
 cout<< ptr-> data <<endl; ;
 ptr = ptr ->next  ;
    }
}
int main(){
    struct node *head ;
    struct node *second ;
    struct node *third ;

    head = (struct node* )malloc(sizeof(struct node));
    second = (struct node* )malloc(sizeof(struct node));
    third = (struct node* )malloc(sizeof(struct node));
    head -> data = 47;
    head -> next =second  ;
    second -> data = 37;
    second -> next = third ;
    third -> data = 988 ;
    third-> next  = NULL;
    cout<<"Linked List is: " ;
    traverse(head);
    head = reverse(head);
    traverse(head );
    return 0 ;
  
}
