//load the library
#include<iostream>
using namespace std;
//using main function
int main(){
           //initialising i, sum and n
           int i=0, sum=0, n;
           cout <<"give a natural number ";
           cin >>n;
           //looping the sum of all even i's from 0 to n
           while (i<=n){sum=sum+i;//adds i to the already existing sum 
                        i+=2;//takes i to the next even no
                        }
           //result
           cout <<"The sum of all even numbers from 0 to "<<n<<" is: "<<sum<<endl;
           //closing the program
           return 0;
}













