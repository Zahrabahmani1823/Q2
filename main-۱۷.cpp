/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
 int a,z;
 cout<<"enter a number"<<endl;
 cin>>a;
 for(int i=1;i<=100;i++){
 z=a*i;
 if(z<=100){
 cout<<i<<"×"<<a<<"="<<z<<" ";
 }else{
 break;
 }
 }
 return 0;
}