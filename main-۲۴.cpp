/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<iostream>
using namespace std;
int main() 
{
 int a,b;
 cin >>a>>b;
 if(a>b){
 cout<<a<<">"<<b<<endl;
 }
 if(a<b){
 cout<<a<<"<"<<b<<endl;
 }
 else{
 cout<<b<<"="<<a<<endl;
 }
 if(a>0&&b>0){
 cout<<a<<"&"<<b<<">0"<<endl;
 }
 if(a<0&b<0){
 cout<<a<<"&"<<b<<"<0"<<endl;
}
 if(a==0&&b==0){
 cout<<a<<"&"<<b<<"=0"<<endl;
 }
 if(!a==0&&!b==0){ 
 if(a>0){
 cout<<"number1 is +"<<endl;
 }
 else{
 cout<<"number1 is -"<<endl;
 }
 if(b>0){
 cout<<"number2 is +"<<endl;
 }
 else{
 cout<<"number2 is -";
 }
 }
 return 0;
}