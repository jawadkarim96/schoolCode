#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char firstName[10],lastName[10];
    cout<<"Enter your first name :"<<endl;
    cin>>firstName;
    cout<<"Enter your last name :"<<endl;
    cin>>lastName;
    strcat(firstName , lastName);
    cout<<"Full name :"<<firstName<<endl;
    int lengthName = strlen(firstName);
    cout<<lengthName;
    return 0;
}
