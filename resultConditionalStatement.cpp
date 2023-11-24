#include<iostream>
#include<string>
#include<cmath>
using namespace std;
 main(){
    double english,maths,computer,physics,urdu,scoreSum;
    double result;
    string name,grade;
    cout<<"Enter Your Name :"<<endl;
    cin>>name;
    cout<<"Enter Your Score in 5 Subjects :"<<endl;
    cout<<"English :"<<endl;
    cin>>english;
    cout<<"Maths :"<<endl;
    cin>>maths;
    cout<<"Computer :"<<endl;
    cin>>computer;
    cout<<"Physics :"<<endl;
    cin>>physics;
    cout<<"Urdu :"<<endl;
    cin>>urdu;
    scoreSum = english+maths+computer+physics+urdu;
    cout<<"You Have Scored : "<< scoreSum<<endl;
    result = scoreSum/double(500);
    result *= 100;
    cout<<"Percentage : "<<result<<endl;
    if((result >= 90) &&(result <= 100)){
        grade = "A";
    }else if((result >= 80) &&(result < 90)){
        grade = "B";
    }else if((result >= 70) &&(result < 80)){
        grade = "C";
    }else if((result < 70) && (result > 0)){
        grade = "F";
    }
    cout<<name<<" your grade is "<<grade<<" with "<<scoreSum<<" numbers out of 500.";
    return 0;
}
