#include <iostream>
#include <fstream>
#include <string>
#include<limits>

using namespace std;
namespace Auth
{
    class Authentication
    {
        string _r_name, _r_password, _r_confirm_pass, _r_email , _l_email , _l_password ; 
        double mobile;

    public:
        void start() {
            int i ; 
            do{ enter_app(); 
                cout<<"Enter the activity"<<endl ; 
                cin>> i ;
                switch(i){
                    case 1 : register_user() ; break ;
                    case 2: login_user() ; break ; 
                    case 3 : cout<<"Exit the app "<<endl ; 
                }
            }while(i != 3); 
        }
        void enter_app()
        {
            ifstream login_page("entry.txt");
            if (!login_page)
            {
                cerr << "Unable to open file: " << endl;
                return;
            }
            string text;
            while (getline(login_page, text))
            {
                cout << text << endl;
            }
            login_page.close();
        }
        void register_user()
        {               
            cout<<"Enter Your Name"<<endl ;
            cin>>_r_name ; 
            cout<<"Enter Your Email"<<endl ;
            cin>>_r_email ; 
            cout<<"Enter Your Password"<<endl ;
            cin>>_r_password ; 
            cout<<"Enter Your Confirm Password"<<endl ;
            cin>>_r_confirm_pass ;  
            if(_r_password != _r_confirm_pass  ){ cout<<"Confirm password should be equal to Password "<< endl ; return ;} 
            ofstream register_user("register.txt" ,ios::app) ; 
            register_user << _r_name <<"|"<<_r_email <<"|"<<_r_password<<endl ; 
          

        }
        void login_user() {
            cout<<"Enter Your Email"<<endl ;
            cin>>_l_email ; 
            cout<<"Enter Your Password"<<endl ;
            cin>>_l_password ; 
            string name, email, password;
            bool found = false;
            ifstream file("register.txt");
         while (getline(file, name, '|') && getline(file, email, '|') &&  getline(file, password))    {
        if (email == _l_email && password == _l_password)
        {
            found = true;
            break;
        }
        } 
        string reg_email ; 
        ifstream logged_file("login.txt"); 
        while(getline(logged_file ,reg_email)){
             if(reg_email == _l_email){Task T ;  T.start() ;break ; }
        }
        if(found){
           ofstream login_file("login.txt" ,ios::app); 
           cout<<"User Logged successfully"<<endl ; 
           login_file<<_l_email<<endl ; 
           Task T ;  T.start() ;

        }else {cout<<"Register Fisrt " << endl ;}
        }
        class Task
        {
        public:
            void start() {
                 int i ; 
            do{ all_task(); 
                cout<<"Enter the activity"<<endl ; 
                cin>> i ;
                switch(i){
                    case 1 : add_task() ; break ;
                    case 2:  delete_task() ; break ; 
                    case 3 : view_task() ; break ;
                    case 4 : update_task() ; break ;
                    case 5 : cout<<"Exit the app "<<endl ; 
                }
            }while(i != 5); 
            }
            void all_task() {
                ifstream task_file("task.txt");
                string text ; 
                while(getline(task_file , text)){
                    cout <<text <<endl ; 
                }
            }
            void add_task() {
                string _task ; 
                ofstream _add_task("to_do_list.txt" , ios::app); 
                cout<<"Enter the task "<<endl ; 
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
                getline(cin,_task) ; 
                _add_task << _task <<endl ; 
                return ; 
            }
            void delete_task() {
                string task_del , text ; 
                cout <<"Enter the task to delete  "<<endl ;
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
                getline(cin ,task_del); 
                ifstream file("to_do_list.txt");
                ofstream new_file("temp.txt"); 
                while(getline(file , text)){
                    if(text != task_del){
                         new_file<<text<<endl ; 
                    }
                }
                file.close();
                new_file.close();
                remove("to_do_list.txt");
                rename("temp.txt","to_do_list.txt"); 
            }
            void update_task() {
                string _u_task , _old_task , text; 
                cout<<"Enter the old task"<<endl ;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                getline(cin,_old_task); 
                cout<<"Enter the updated task"<<endl ;
                getline(cin,_u_task); 
                ifstream _task("to_do_list.txt");
                ofstream new_file("temp.txt");
                while(getline(_task , text)){
                     if(text == _old_task){
                        new_file<<_u_task <<endl; 
                     }else{
                        new_file<<text <<endl ; 
                     }
                }
                _task.close();
                new_file.close(); 
                remove("to_do_list.txt");
                rename("temp.txt" ,"to_do_list.txt");
            }
            void view_task() {
                ifstream _view_task("to_do_list.txt");
                string text ; 
                while(getline(_view_task , text)){
                    cout<<text <<endl ; 
                }
            }
        };
    };
}