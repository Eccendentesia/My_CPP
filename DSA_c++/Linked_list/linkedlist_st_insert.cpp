#include<iostream>
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
void newnode(struct node *head ,int data ){
struct node *ptr;
ptr = (struct node*)malloc(sizeof(struct node));
ptr -> data = data ;
ptr-> next = head;
traverse(ptr);

}
int main(){
    int d1 ;
    struct node *head , *second , *third ,*four, *five, * six , seven;
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
    newnode(head , d1);
    seven.data = 3829;

    return 0 ;

}