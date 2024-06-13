/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
 int hour;
 cin>>hour;
 if(hour<=11&&hour>=0){
 cout<<"AM";
 }
 else if(hour<=23&&hour>=12){
 cout<<"PM";
 }
 else{
 cout<<"invalid";
 }
 return 0;
}