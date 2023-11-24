#include<iostream>
using namespace std;

int sum(int a , int b){
    return a+b;
}
double sum(double a , double b){
    return a+b;
}
 main(){
    cout<<sum(4,5)<<endl;
    cout<<sum(4.5,4.6);
    return 0;
}
