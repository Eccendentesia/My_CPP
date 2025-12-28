#include<iostream>
using namespace std ;
//node that contains data 
class node{
    public :
     string name ;
     int roll_number ;
     char div ;
     string branch ;
     node *next ;
     node(string n , int r , char d , string b ) :name(n),roll_number(r),div(d),branch(b), next(nullptr){}
    
};
//class for linked list 
class linked_list{
     node *head ;
     public:
     //contructor function
     linked_list():head(nullptr){};
     //Destructor function
     ~linked_list(){
        while(head != nullptr ){
            node *temp = head ;
            head = head ->next ;
            delete head ;

        }
     }
     //insert function to insert data at the end of the linked list 
     void insert(string n , int r , char d , string b){
        node *new_node = new node(n , r , d , b );
        if(head == nullptr ){
            head = new_node;
        }else{
            node *temp = head ;
            while(temp->next != nullptr){
               temp = temp->next ;
            }
            temp ->next = new_node ;
            
        }

     }
      //insert function to insert data at the defined index  of the linked list 
     void insert(string n , int r , char d , string b , int index ){
        node *new_node = new node(n , r , d , b );
        int count = 0 ;
        if(head == nullptr ){
            head = new_node;
        }else{
            node *temp = head ;
            while(count != index - 1){
               temp = temp->next ;
               count ++ ;
            }
            new_node-> next = temp->next ;
            temp->next = new_node ;

            
        }

     }
     void print(){
        node *temp = head ;
        while(temp != nullptr ){
            cout<<"Name :"<< temp->name <<endl ;
            cout<<"Roll Number :"<< temp->roll_number <<endl ;
            cout<<"Division :"<< temp->div <<endl ;
            cout<<"Branch :"<< temp->branch <<endl ;
            temp = temp->next ;
        }
     }

};
int main(){
    linked_list head ;
    head.insert("Ravi",26,'A',"EXTC");
    head.insert("Avi",28,'A',"EXTC");
    head.insert("Raj",19,'A',"EXTC");
    head.insert("Rahul",89,'A',"EXTC");
    head.insert("Rishi",10,'A',"EXTC");
    head.insert("Raju",29,'A',"EXTC");
    head.insert("Rajesh",2,'A',"EXTC");
    head.insert("Ravish",6,'A',"EXTC");
    head.insert("Rohan",8,'A',"EXTC");
    head.print();

}