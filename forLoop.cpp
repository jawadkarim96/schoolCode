#include<iostream>
#include<string>
using namespace std;
int main(){
    string nameAge[4][4] = {
        {"jawad","17"},
        {"foji","18"},
        {"afaq","20"},
        {"athar","22"},
    };
    for(int i = 0;i<=3;i++){
        cout<<endl;
        for(int j = 0;j<=1;j++){
            cout<<nameAge[i][j]<<" ";
        }
    }
    return 0;
}
