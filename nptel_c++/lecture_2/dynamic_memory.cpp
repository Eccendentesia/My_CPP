#include<iostream >
#include<vector>
using namespace std ;
int main(){
   int *p = (int*)malloc(10 * sizeof(int )); // malloc function requsting block of memory from OS to store data
   *p = 38;
   cout<< *p<<endl ;
   free(p);           // deallocation of block of memory 
   int *t = (int*)operator new(283*sizeof(int));  // this similar to malloc function 
   *t=97;
   cout<<*t<<endl;
   operator delete (t);
   int * a = new int(20);  // array 'a' can store 20 integer 
   for (int i = 0 ; i< 20 ; i++){
    a[i]=i;
    cout<<a[i] <<endl;
   }
   delete []a;
   return 0 ;
}