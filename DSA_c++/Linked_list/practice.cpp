#include<iostream>

using namespace std;
struct node{
    int data;
    struct node *next;
};
//for traversal 
void traverse(struct node *head){
    while(head != NULL){
        cout<< head-> data <<endl;
        head = head ->next ;
    }
}

// Insertion at any position
struct node *insertion(struct node *head , int data , int index){
    struct node *ptr ;
    int i = 1 ;
    ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p= head ;

    while (i != index- 1){
       p = p->next;
       i++;
    }
    ptr ->data  = data ;
    ptr ->next = p->next ;
    p->next = ptr;
    traverse (head);
}

//Deletion of given position
struct node *deletion(struct node *head , int index){
    struct node *p ,*q ;
    int i =1;
    p = head ;
    q= head->next;
    while (i!=index-1){
        p= p->next ;
        q=q->next;
        i++;
    }
   
    p->next = q->next ;
    free(q );
    return head ;
}

//Main function 
int main(){
    int d1 ;
    struct node *head , *second , *third ,*four, *five, * six ;
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
    cout << " Enter the new data "<< endl ;
    cin>> d1 ;
    cout<<"After Insertion "<<endl;
    insertion(head , d1,6);
    cout<<"After Deletion"<<endl;
     head = deletion(head , 4);
     traverse(head);
    return 0 ;

}