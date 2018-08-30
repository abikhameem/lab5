#include<iostream>
using namespace std;
int main(){
	char xy;
	cout<<"give an alphabet";
	cin>>xy;
	if (xy=='a'||xy=='e'||xy=='i'||xy=='o'||xy=='u'){cout<<"the given alphabet  "<<xy<<"is a vowel";}
	else{cout<<"the given alphabet  "<<xy<<" is a consonant";}
return 0;
}
