#include<iostream>
using namespace std;
void globalFunction(){
    cout<<"This is a global function.";
}
void outsideFunction(){
    void insideFunction(){
        cout<<"Inside global function";
    }
}
main(){
    globalFunction();
    return 0;
}
