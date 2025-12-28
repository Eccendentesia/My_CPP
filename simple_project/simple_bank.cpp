#include<iostream>
using namespace std ;
class Bank{
    int money = 0  ; 
    public :
    void check_balance(){
        cout<<"balance :"<<money <<endl ; 
    }
    void credit_money(){ 
        int amount ; 
        cout<<"Enter the amount to credit ";
        cin >> amount ; 
        money+= amount ;
        cout<<"Credited Amount :"<<amount <<endl ;
        cout<<"Current Amount :"<<money<< endl ; 
    }
    void debit_money(){
        int amount ; 
        cout<<"Enter the amount to debit ";
        cin >> amount ; 
        if(amount > money){
            cout<<"Balance is too low "<<endl ;
            cout<<"Balance :"<<money  ; 
        }else{
            money -= amount ;
            cout <<amount <<"debited from account "<<endl ; 
            cout<<"Current Balance :"<<money<< endl ; 
        }
    }
    void all_task(){
        cout<<"Enter the number to perform task"<<endl ; 
        cout<<"1. Check balance "<<endl ;
        cout<<"2. Deposit Money "<<endl ;
        cout<<"3. Debit money  "<<endl ;
        cout<<"4. Exit "<<endl ;
    }
    void start(){
         int choice ; 
         do{
            all_task();
            cin>>choice ;
            switch(choice){
             case 1 : check_balance(); break ; 
             case 2 : credit_money(); break ; 
             case 3 : debit_money(); break ; 
             case 4 : cout<<"Exit the machine ...." <<endl ; 
             default: cout<<"Enterd the wrong number"<<endl ; 
            }

         }while(choice != 4);
    } 
};
int main(){
    Bank b ; 
    b.start(); 
}