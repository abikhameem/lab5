//load the library
#include<iostream>
using namespace std;
//using main function
int main(){
	//declaring variable
	int a;
	cout<<"define a="<<endl;
	//giving value to a
        cin>>a;
	//starting if operation
        //if the number is divisible by 5 and 11 then the reminder will be zero if it is divided by 55     
	if(a%55==0){cout<<"the number a="<<a<<"is divisible by 5 and 11";}
	//if the above condition is not valid
	else{cout<<"the number a="<<a<<"is not divisible by 5 and 11";}
//closing the program
return 0;
}
