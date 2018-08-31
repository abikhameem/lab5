//load the lib
#include<iostream>
using namespace std;
//main fn
int main(){
           //initialising a, i and n
           int a, i=1, n;
           cout <<"Multiplication table of ";
           cin >>a;
           cout <<endl<<"last digit to multiply with ";
           cin >>n;
           //looping the multiplication of math table from 1 to n
           while (i<=n){int m=a*i;
                        cout <<a<<"*"<<i<<" = "<<m<<endl;
                        i++;
                        }
           //closing the program
           return 0;
}
