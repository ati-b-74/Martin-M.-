#include<iostream>
#include<cstring>

int const size=40;

int main(){

char s1[size]={65, 116, 105, 32, 108, 111, 118, 101, 115, 32, 77, 97, 114, 116, 105, 110, 46};
char s2[size]={65, 116, 105, 32, 105, 115, 32, 112, 114, 111, 117, 100, 32, 111, 102, 32, 77, 97, 114, 116, 105, 110, 46 };
char s3[size]={77, 97, 114, 116, 105, 110, 32, 105, 115, 32, 116, 104, 101, 32, 98, 101, 115, 116, 32, 111, 102, 32, 116, 104, 101, 32, 98, 101, 115, 116, 46};

for(int i=0; i<size; i++){

std::cout<<s1[i];

}

std::cout<<std::endl;

for(int i=0; i<size; i++){

std::cout<<s2[i];

}

std::cout<<std::endl;        

for(int i=0; i<size; i++){

std::cout<<s3[i];

}

std::cout<<std::endl;        


    return 0;
}