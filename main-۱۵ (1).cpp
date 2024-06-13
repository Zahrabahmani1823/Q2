/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<iostream>
using namespace std;
int main()
{
 int a;
 cout<<"please enter a number"<<endl;
 cin>>a;
 for(int e=0;e<a;e++){
 for(int s=0;s<e+1;s++){
 cout<<"*";
 }
 cout<<endl;
 }
 return 0;
}