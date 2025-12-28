#include<iostream>
using namespace std ;
class queue{
    int data ;
    int front , rear , * arr ;
    int size ;
    public :
    queue(int s ): size (s), front(-1), rear(-1), arr(new int[size]){};
    ~queue(){delete []arr ;}
    void enQueue(int data){
        if((rear +1 )% size == front){
            cout<<"Queue is full"<<endl;
            return;
        }else{
        arr[++rear] = data ;
        }
    }
    void deQueu(){
        if(front == rear){
            cout<<"Queue is empty"<<endl;
            return;
        }else{front = (front + 1) % size;}
    }
    void display(){
         while(front != rear ){
            front = (front + 1) % size;
            cout<<arr[front]<<" ";
            if(front == rear){
                break; // Exit the loop when we reach the rear
         }
        }   
    }
};
int main(){
    queue q(5);
    q.enQueue(10);
    q.enQueue(20);
    q.enQueue(30);
    q.enQueue(40);
    q.enQueue(50);
    q.deQueu();
    q.display(); // Display the queue
    cout << endl;
    

    return 0;
}   