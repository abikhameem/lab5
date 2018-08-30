//load the library
#include<iostream>
using namespace std;
//using main function
int main(){
	//declaring variable
	float a,b;
	cout<<"define  first number a="<<endl;
	//entering a value for a
        cin>>a;
	cout <<"define second number b="<<endl;
	//entering a value for b
        cin>>b;
	//using 'if' operation
        if(a>b){cout<<"first number"<<a<<"is the largest"<<endl;}
	//using 'else' operation if above condition is not valid
        else(b>a){cout<<"second number"<<b<<"is the largest"<<endl;}
//closing program
return 0;
} 
