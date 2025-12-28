#include<iostream>
#include<string>
using namespace std ;

typedef struct student{
    int id ; 
    int roll_number ; 
    string name ;
    string branch ;
}student ;

class School{
     student S[10] ;
     int i = 0 ;
     public:
     void Add_student(){
        if( i != 10 ){
        student new_st ;
        int s_number ; string s_name , s_branch ; 

        new_st.id = i + 1 ; 
        cout<<"Enter Student's Roll Number"<<endl ;
        cin>> s_number ; 
        cin.ignore(); 
        new_st.roll_number = s_number ;
        cout<<"Enter Student's Name"<<endl ;
        getline(cin , s_name ); 
        new_st.name = s_name ;
        cout<<"Enter Student's Branch"<<endl ;
        getline(cin , s_branch ); 
        new_st.branch = s_branch ;

        S[i] = new_st ; 
        i++ ;        
        cout<<"Student added successfully"<<endl ; 
        }else{
            cout<<"Database Overflow "<<endl ; 
        }

     }
     void Remove_student(){
        int r_id ; 
        bool found = false ; 
        cout<<"Enter the Id of a student to remove "<<endl ; 
        cin >> r_id ;
        for(int j = 0 ; j < i ; j++ ){
            if(S[j].id == r_id){
                found = true ; 
                  for(int k = j ; k < i - 1 ; k++){
                    S[k] = S[k + 1]; 
                    i-- ;
                    cout <<"Student Removed Successfully"<<endl ; 
                    break ; 
                  }
            }
        }
        if(!found){
            cout<<"Student not found"<<endl ; 
        }
     };
     void All_student(){
        cout<<"Id   "<<"Roll Number    "<<"Name    "<<"Branch"<<endl ; 
        for(int k = 0 ; k < i ; k++){
            cout<<S[k].id<<"    "<<S[k].roll_number<<"            "<<S[k].name<<"      "<<S[k].branch<<endl ; 
        }
     };
     void Get_student(){}
     void activity(){
        cout<<"1. Add Student "<<endl ;
        cout<<"2. Remove Student "<<endl ;
        cout<<"3. All Student "<<endl ;
        cout<<"4. Student With Id "<<endl ;
        cout<<"5. Exit "<<endl ; 
     }
     void start(){
        int task ;
        do{
            cout<<"Enter the activity tp perform"<<endl ;
            activity();
            cin>>task ;
            switch(task){
                case 1 : Add_student(); break ;
                case 2 : Remove_student(); break ;
                case 3 : All_student() ; break ; 
                case 4 : Get_student() ; break ; 
                case 5 : cout<<"Exiting......"<<endl ; 
            }
            
        }while(task != 5); 


     }
};
int main(){
    School school ;
    school.start();
}