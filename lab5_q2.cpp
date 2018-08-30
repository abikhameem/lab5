//load the library
#include<iostream>
using namespace std;
//using main function
int main(){
	//declaring variables
        float a,b,c;
	cout<<"first number a="<<endl;
	//giving value for a
	cin>>a;
	cout<<"second number b="<<endl;
	//giving value for b
	cin>>b;
	cout<<"third number c="<<endl;
	//giving value for c
	cin>>c;
	//using 'if' operation
	if(a>b & a>c){cout<<"first number a="<<a<<"is the largest";}
	//using 'else if' operation since above condition is not valid
	else if (b>a & b>c){cout<<"second number b="<<b<<"is the largest";} 
	//using 'else if' operation when above two condition is not valid
        else {cout<<"third number c="<<c<<"is the largest";}
//closing the program
return 0;
} 
