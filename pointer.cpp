#include<iostream>
#include<string>
using namespace std;
int main(){
    string name = "jawad";
    cout<<"Address of refrence variable"<<endl;
    string* namePointer = &name;
    cout<<namePointer<<endl;
    cout<<"Value of refrence variable"<<endl;
    cout<<(*namePointer)<<endl;
    int* nullPointer = 0;
    string* nullPointer1 = 0;
    char* nullPointer2 = 0;
    double* nullPointer3 = 0;
    cout<<nullPointer;
    return 0;
}
