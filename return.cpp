#include<iostream>
using namespace std;

int print(int &x){
    x = x+ 1;
    cout<<"The incremented value is: "<<x<<endl;
}
int main(){
    int num = 69;
    print(num);
    cout<<"num : "<<num;
    return 0;
}
