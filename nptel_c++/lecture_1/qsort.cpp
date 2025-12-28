#include<iostream>
#include<algorithm>
using namespace std ;
/*int compare(int i , int j ){
    return i>j;
}*/
int main(){
    int data[6] = {297,93,21,34,53,54} ;
    sort(data , data+6);
    for(int i = 0 ; i < 6 ; i++){
        cout<< data[i] << endl;
    }
}