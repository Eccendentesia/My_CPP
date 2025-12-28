#include<iostream>
#include<fstream>
#include<string>
#include "authentication.hpp"
using namespace std;
using namespace Auth ; 

int main(int argc, char **argv){
  Authentication A;
  A.start(); 
  return 0;
}