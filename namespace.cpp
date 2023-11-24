#include<iostream>
using namespace std;
namespace mySpace{
    //int var1,var2;
    int var1 = 8;
    int var2 = 9;
    int sum(){
        cout<<var1 + var2<<endl;
    }
}
namespace mySpace2{
    //int var1,var2;
    int var1 = 8;
    int var2 = 9;
    int minus(){
        cout<<var1 - var2;
    }
}
int main(){
    cout<<mySpace::var1<<endl;
    mySpace::sum();
    mySpace2::minus();
    return 0;
}
