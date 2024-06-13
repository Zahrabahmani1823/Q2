/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<iostream>
using namespace std;
int main()
{
 int a,j;
 cout<<"Enter any num :";
 cin>>a;
 for(int i=1;i<2*a;i++){
for(j=1;j<=2*a+i;j++){
 cout<<' ';
 } 
 for(int i=1;i<=a;i++){
 cout<<'*';
 }
 cout<<endl;
 }
 for(int i=1;i<=5*a;i++){
 cout<<'*';
 }
 cout<<endl;
 for(int i=1;i<(2*a);i++){
 for(int c=j-i;c>0;c--){
 cout<<' ';
 }
 for(int i=1;i<=a;i++){
 cout<<'*';
 }
cout<<endl;
 }
 return 0;
}
