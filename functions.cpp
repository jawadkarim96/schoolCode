#include<iostream>
#include<string>
using namespace std;
int sum(int a  ,int b){
    cout<<a + b<<endl;
}
double sum(double a  ,double b){
    cout<<a + b;
}
int main(){
    //int function
    sum(7,8);
    //double function
    sum(7.8,9.8);
    return 0;
}
