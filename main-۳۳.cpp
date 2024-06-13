/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<iostream>
using namespace std;
struct Mobile{
 char number[11];
 bool isvalid(){
 if(number[0]=='0'&&number[1]=='9'){
 return 1;
 }
 return 0;
 }
};
int main()
{
 Mobile mobile;
 cin>>mobile.number;
if(mobile.isvalid()){
 cout<<"valid";
 }else{
 cout<<"invalid";
 }
 return 1;
}