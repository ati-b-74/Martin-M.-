#include<iostream>

double FaceOfTheCircle(double rad){

double pi=3.14;
return pi*rad*rad;

}

int main(){

std::cout<<"Radius of the circle?"<<std::endl;
double radius;
std::cin>>radius;
double circleFace=FaceOfTheCircle(radius);
std::cout<<"The face of the circle is: "<<circleFace<<std::endl;

    return 0;
}