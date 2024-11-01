#include<iostream>

int myAbs(int n){

if(n<0){

return -n; 

}
else {

return n;

}
}

int main(){

std::cout<<"Number?"<<std::endl;
int num;
std::cin>>num;
std::cout<<"Absolute number: "<<myAbs(num)<<std::endl;

    return 0;
}
