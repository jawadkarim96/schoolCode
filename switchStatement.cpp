#include<iostream>
#include<string>
using namespace std;
int main(){
    //defining variables 
    int firstInput,secondInput,thirdInput;
    string code;
    cout<<"Input code :"<<endl;
    cin>>code;
    if(code == "*111#"){
        cout<<"1.GB"<<endl;
    cout<<"2.AJK"<<endl;
    cout<<"Input number :"<<endl;
    cin>>firstInput;
    //switch statements
    switch(firstInput){
        case 1:
            //packages for gilgit
            cout<<"1.Call & SMS :"<<endl;
            cout<<"2.Internet :"<<endl;
            cout<<"3.Social :"<<endl;
            cout<<"Input number :"<<endl;
            cin>>secondInput;
            switch(secondInput){
                //for call and sms packages
                case 1:
                    cout<<"1. 12.Rs/daily unlimited :"<<endl;
                    cout<<"Input number :"<<endl;
                    cin>>thirdInput;
                    if(thirdInput == 1){
                        cout<<"Package  is been activated.";
                    }else{
                        cout<<"Invalid input";
                    }
                    break;
                //for Internet packages
                case 2:
                    cout<<"1. 12.Rs/daily 500MB :"<<endl;
                    cout<<"Input number :"<<endl;
                    cin>>thirdInput;
                    if(thirdInput == 1){
                        cout<<"Package  is been activated.";
                    }else{
                        cout<<"Invalid input";
                    }
                    break;
                //for social packages
                case 3:
                    cout<<"1. 12.Rs/daily Facebook/Instagram :";
                    cout<<"Input number :"<<endl;
                    cin>>thirdInput;
                    if(thirdInput == 1){
                        cout<<"Package  is been activated.";
                    }else{
                        cout<<"Invalid input";
                    }
                    break;
                default:
                    cout<<"Invalid input";
                    break;
            }
        break;
        //packages for AJK
        case 2:
            cout<<"Packages for AJK are not available at the moment.";
            break;
        default:
            cout<<"Invalid input";
            break;
    }
    }else{
        cout<<"Invalid Input :(";
    }
    
    return 0;
}
