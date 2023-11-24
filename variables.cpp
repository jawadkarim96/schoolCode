#include <iostream>
#include<string>
using namespace std;

int main(){
    //varialbles
    float a,b,c,d;
    //results
    float result , result1 ,result2;
    //value a
    cout<<"Enter the value of a ;"<<endl;
    cin>>a;
    //value of b
    cout<<"Enter the value of b ;"<<endl;
    cin>>b;
    //value of c
    cout<<"Enter the value of c ;"<<endl;
    cin>>c;
    //value of d
    cout<<"Enter the value of d ;"<<endl;
    cin>>d;
    //result 1
    result = ((a+b)*c)/d;
    cout <<"The result is ; "<< result<<endl;
    //result 2
    result1 = ((a+b)/c)*d;
    cout <<"The result1 is ; "<< result1<<endl;
    //result 3
    result2 = (a+b)/(a-b)/(c*d);
    cout <<"The result3 is ; "<< result2;
    
    
    
    
    return 0;
}
