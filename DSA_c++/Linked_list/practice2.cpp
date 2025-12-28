#include<iostream >
using  namespace std ; 
 struct node{
       int data ;
       struct node *next;
     };
struct dll{
     int data ;
     struct dll *prev , * next ;
};
class list {
     public :
      void *traverse(struct node *head){
        struct node *temp = head ;
        while (temp != NULL ){
            cout << temp ->data <<endl ;
            temp = temp->next ;
        }
      }

      // Insertion at beginning ,any position , end  
      struct node  *insertion (struct node *head , int data , int index ){
        struct node *ptr;
        ptr =(struct node *)malloc(sizeof(struct node));
        struct node *p = head ;
        int i = 1;
         ptr ->data = data ;
        if (index == 1 ){             // Insertion at  head node 
            ptr ->next = head;
            head = ptr ;
        }
        else {                       //At given position  
         while ( i != index - 1 ){
          p = p->next ;
          i++;
         } 
        ptr ->next = p->next;
        p->next = ptr ;
      
      }
       return head ;
      }

      // Deletion of any node from beginning to end 
      struct node *deletion(struct node *head , int index ){
       struct node *q = head ;
       struct node *p = head ->next ;
        int i = 0;
       if(index == 1 ){                       // Deletion of head node 
          p = head ;
          free(q);
       }
       else if (p == NULL ){                  // Deletion of last node 
        q->next = NULL ;
        free(p);
       }
       else {                                 //Deletion of given node 
            while (i != index  - 1 ){
                q = q->next ;
                p = p ->next ;
                i++;
            }
            q->next = p->next ;
            free(p);
            traverse(head );
       }
       }
};
class Dll{
   public :
    struct dll * traverse(struct dll *head)
    {
      while(head != NULL ){
        cout << head->data ; 
        head = head->next;
      }
    }
    struct dll *reverse(struct dll *head ){
      while (head != NULL ){
        cout << head ; 
        head  = head ->prev ;
      }
    }
    struct dll *insertion(struct dll * head , int data , int index ){
      struct dll *n = (struct dll * )malloc(sizeof (struct dll ));
      n->data = data ;
      struct dll *p = head ;
    
      if(index == 1 ){
        n->next = head ;
        head = n;
        n->prev = NULL ;
      }
      else if(p == NULL){
        p->next = n ;
        n->next = NULL ;
        n->prev = p ;
      }
      else{
        int i =1 ;
         while(i != index -1 ){
         p= p->next;
         i++;
         }
          n->next = p->next ;
          p->next= n ;
          n-> prev = p ;
          p->prev = n ;
      }
      return head ;
    }
};
int main(){
    int d1  , d2 , d3;
    list l ;
    Dll d ;
    struct node *head ;
    struct dll *h ,*h1 ; 
    h = (struct dll *)malloc(sizeof(struct dll ));
    head = (struct node*)malloc(sizeof(struct node));
    //head ->data = 76 ;
    // head-> next = NULL ;
    h->prev = NULL ;
    h ->data = 56 ;
    h->next = h1;
    h1->prev = h;
    h1 ->data = 28;
    h->next = NULL ;
   /* for(int i = 2 ; i < sizeof(struct node) ; i++){
    cout << "Enter the data to insert  linked list :" ;
    cin >> d1 ;
   // cout << "Enter the index of data to be placed:" ;
    //cin >> d2 ;
   // cout << "After Insertion "<<endl ;
    head = l.insertion(head , d1 , i);
    }
    l.traverse (head );
    cout << "After Deletion "<<endl ;
    head = l.deletion(head , 2);*/
  h = d.insertion(h , 23, 2);
  d.traverse(h);
    return 0 ;

}