/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
 int a,b,c;
 cin>>a;
 if(99<a&&a<1000){
 b=(a/10)%10;
 c=(a%10);
 a=a/100;
 cout<<c<<b<<a;
 }
 else{
 cout<<"error";
 }
 return 0;
}