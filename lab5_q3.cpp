//load the library
#include<iostream>
using namespace std;
//using namespace std
int main(){
	//declaring variables
	float a;
	cout<<"define a="<<endl;
	//giving value to a
	cin>>a;
	//STARTING 'IF' OPERATION
	if(a>0){cout<<"the digit a="<<a<<"is positive";}
	//starting 'else if' operation if above condition is not valid
	else if(a<0){cout<<"the digit a="<<a<<"is negative";}
	//starting 'else' operation if above two condition is not valid
	else{cout<<"the number a="<<a<<"is zero";}
//closing the program
return 0;
}
