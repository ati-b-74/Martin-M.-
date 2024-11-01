#include<iostream>

int findAbsoluteNumber(int n){

return abs(n);

}

int main(){

std::cout<<"Number?"<<std::endl;
int num;
std::cin>>num;
std::cout<<"Absolute number: "<<findAbsoluteNumber(num)<<std::endl;

    return 0;
}
