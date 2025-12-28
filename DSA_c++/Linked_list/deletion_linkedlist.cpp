#include<iostream >
using namespace std;
struct node {

    int data ;
    struct node *next;
};
void traverse(struct node* ptr ){
 while (ptr != NULL) {
 cout<< ptr-> data <<endl; ;
 ptr = ptr ->next  ;
    }
}
struct node  *deletion(struct node*head ){
    struct node *p= head ;
    head = head->next;
    free(p);
    return head;
}
int main(){
    struct node *head , *second , *third ,*four, *five, *six ;
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    four = (struct node*)malloc(sizeof(struct node));
    five  = (struct node*)malloc(sizeof(struct node));
    six = (struct node*)malloc(sizeof(struct node));
    head-> data = 15;
    head-> next = second ;
    second -> data = 17;
    second-> next = third  ;
    third -> data = 26;
    third -> next = four ;
    four-> data = 154;
    four-> next = five ;
    five -> data = 179;
    five-> next = six  ;
    six -> data = 2609;
    six -> next = NULL ;
    cout<<"Linked List is: "<<endl ;
    head=deletion(head);
     traverse(head);
     
  
  
}
