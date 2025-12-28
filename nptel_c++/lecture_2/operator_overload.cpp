#include<iostream>
using namespace std ;
class Car {
    private :
     int horsepowers ;
    public:
     void sethorsepowers(int horsepower ){
        horsepowers = horsepower ;
     }
     int getHorsepowers(){
        if(horsepowers > 800){
            cout<<"Too much "<<endl ;
            return horsepowers ;
        }else{
            return horsepowers ;
        }
     }
} ;
int main(){
    Car car ;
    int p ;
    cout<<"Enter the horsepowers ";
    cin >> p ;
    car.sethorsepowers(p);
    cout<< car.getHorsepowers();
}