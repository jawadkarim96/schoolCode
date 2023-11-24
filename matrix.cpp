#include<iostream>
using namespace std;

int main(){
    int firstArray[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    int secondArray[4][4] = {
        {17,18,19,20},
        {21,22,23,24},
        {25,26,28,29},
        {30,31,32,33}
    };
    for(int i = 0;i<4;i++){
        for(int j= 0;j<4;j++){
            cout<<firstArray[i][j] + secondArray[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
