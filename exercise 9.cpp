#include<iostream>
#include<random>

using namespace std;

int main(){


cout<<"Enter the interval where your number is."<<endl;
int a,b;
cin>>a>>b;

random_device RD;
mt19937 gen(RD());

uniform_int_distribution<int> int_dist(a,b);

cout<<"Enter your number."<<endl;
int num;

bool exit=false;

do {

cin>>num;

if(num==int_dist(gen)){

 cout<<"Bravo!"<<endl;
 exit=true;

}
else{
cout<<"Try again!"<<endl;
}

} while(!exit);

    return 0;
}