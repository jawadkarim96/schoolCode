#include<iostream>
#include<string.h>
using namespace std;

//user defined function
int mathFunction(string &inputValue ,float &a,float &b){
    if(inputValue == "add"){
        cout<<a + b;
    }else if(inputValue == "subtract"){
        cout<<a - b;
    }else if(inputValue == "multiply"){
        cout<<a * b;
    }else if(inputValue == "divide"){
        float result = a / b;
        cout<<result;
    }else{
        cout<<"Wrong input math operation.";
    }
}
//main function
int main(){
    string value;
    float numberOne , numberTwo;
    cout<<"Enter operation :"<<endl;
    cin>>value;
    cout<<"Enter First Number :"<<endl;
    cin>>numberOne;
    cout<<"Enter Second Value :"<<endl;
    cin>>numberTwo;
    cout<<"The result is : ";
    mathFunction(value,numberOne,numberTwo);
    return 0;
}
