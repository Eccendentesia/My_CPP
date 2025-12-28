#include<iostream >
using namespace std;
struct node {
    int data ;
    struct node *next;
};
void traverse(struct node *head ){
  while (head != NULL){
    cout<<head->data <<endl ;
    head = head ->next ;
  }
}
void end_node(struct node*&head, int d1){
struct node *ptr = new struct node ;
struct node *p = head ;
struct node *q = head->next ;
ptr ->data = d1 ;
 ptr->next = NULL ;
while(q != NULL){
    p = p->next ;
    q = q->next ;
}
p->next = ptr ;
delete q;
}

int main(){
    int d2 ;
    struct node *head , *second , *third;
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    
    head-> data = 15;
    head-> next = second ;
    second -> data = 17;
    second-> next = third  ;
    third -> data = 26;
    third -> next = NULL ;

    cout << " Enter the data "<< endl ;
    cin>> d2;
     end_node(head,d2);
    cout<<"After Insertion \n";
    traverse(head );
    return 0 ;

}