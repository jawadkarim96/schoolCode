#include<iostream>
using namespace std;

//global variables
int areaCircle,areaRectangle,resultQuadratic;
float pi = 3.14;
//function area of circle
int areaOfCircle(int radius){
    areaCircle = pi*(radius*radius);
}
// area of rectangle
int areaOfRectangle(int length,int width){
    areaRectangle = length*width;
}
//quadratic equation
int quadraticEquation(int x,int y,int z){
    resultQuadratic= 2*x*x + 3*y + z;
}
//main function
int main(){
    //cout area of circle
    int radius,length,width,x,y,z;
    cout<<"Enter radius :"<<endl;
    cin>>radius;
    cout<<"Area of circle is "<<areaOfCircle(radius)<<endl;
    //cout area of rectangle
    cout<<"Enter length :"<<endl;
    cin>>length;
    cout<<"Enter width :"<<endl;
    cin>>width;
    cout<<"Area of rectangle is "<<areaOfRectangle(length,width)<<endl;
    //quadratic equation 
    cout<<"Enter x :"<<endl;
    cin>>x;
    cout<<"Enter y :"<<endl;
    cin>>y;
    cout<<"Enter z :"<<endl;
    cin>>z;
    cout<<"Result of quadratic equation is "<<quadraticEquation(x,y,z);
    return 0;
}

