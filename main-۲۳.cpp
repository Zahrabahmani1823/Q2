/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
 int a;
 cout<<" Enter a number between 1 and 10"<<endl;
 cin>>a;
 if(a%2==1){
 cout<<"Odd";
 }
 else if(a>5){
 cout<<"even"<<"&"<<a<<">5"<<endl;
 }
 else{
 cout<<"even"<<"&"<<a<<"<5"<<endl;
 }
return 0;
}
