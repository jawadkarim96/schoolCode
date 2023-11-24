Dicuss the concept of memory addresses and how the refrence operator helps in accessing these addresses in c++. write simple program to explain.
 address :
location of an object in memory is called address.
Memory address :
location of where the variable is stored on the computer.
pointer:
is a variable that sotes memory address as its value.
#include<iostream>
#include<string>
using namespace std;
int main(){
	string name = "jawad";
	//outputs the location in hexadecimal
	cout<<&name;
	//pointer
	string* pointerr = &name;
	//address of name will be displayed
	cout<<pointerr;
	return 0;
}

