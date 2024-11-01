#include<iostream>

void printPrimeNumbers(int num){

for(int n=2; n<=num; n++){

int counter=0;

for(int i=1; i<=n; i++ ){

int division=n%i;

if(division==0){

counter++;

}

}

if(counter==2){

std::cout<<n<<" is prime number."<<std::endl;

}

}

}

int main(){

std::cout<<"Enter a number greather than 1!"<<std::endl;
int number;
std::cin>>number;

printPrimeNumbers(number);

    return 0;
}