#include<iostream>
using namespace std ;
struct node{
    int data ;
    struct node *prev , * next ;
};
void traverse(struct node* ptr ){
 while (ptr != NULL) {
 cout<< ptr-> data <<endl; ;
 ptr = ptr ->next  ;

    }


}
//INsertion at given position
struct node *insertion(struct node *head , int data , int index ){
    struct node *n ,*p;
    int i = 0;
    n = (struct node* )malloc(sizeof (struct node ));
    p = head ;
    while (i != index - 1 ){
        p= p->next ;
        i++;
    }
    n->data = data ;
    n->next = p->next ;
    p->next = n;
    n->prev = p ;
    p->prev = n ;
    traverse(head);
}
//Deletioin of any node 
struct node *deletion (struct node *head , int index ){
    struct node *p , *q ;
    int i = 1 ;
    p = head ;
    q = head ->next ;
    while (i!= index - 1){
       p = p->next ;
       q = q->next ;
       i++;
    }
    p->next = q->next ;
    p->prev = p ;
    free(q );
   // return head  ;

}
int main(){
    struct node *head ;
    struct node *second ;
    struct node *third ;

    head = (struct node* )malloc(sizeof(struct node));
    second = (struct node* )malloc(sizeof(struct node));
    third = (struct node* )malloc(sizeof(struct node));
    head ->prev = NULL ;
    head -> data = 47;
    head -> next =second  ;
    second ->prev= head ;
    second -> data = 37;
    second -> next = third ;
    third -> prev = second ;
    third -> data = 988 ;
    third-> next  = NULL;
    cout<<"Linked List is: "<<endl ;
    traverse(head);
    cout<<"After insertion"<<endl;
    insertion(head , 65 , 2);
    cout<<"After deletion "<<endl ;
  /* head =*/ deletion(head , 2 );
    traverse(head );
    return 0 ;
  
}