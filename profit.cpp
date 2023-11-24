#include<iostream>
using namespace std;

int interestFunction(){
    int totalAmount = 200000;
    float interestRate = 0.2;
    int year = 10;
    float interest = totalAmount*interestRate*year;
    cout<<"The profit is : "<<interest-totalAmount;
}
int main(){
    interestFunction();
    return 0;
}
