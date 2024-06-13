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
 cout<<"The amount of fuel in the car"<<endl;
 cin>>a;
 cout<<"Fuel consumption in your car at 100 km"<<endl;
 cin>>b;
 c=(a/b)*100;
 if(c==0){
 cout<<"please refill tank"<<endl;
 }
 else{
 cout<<"you can go"<<c<<"km another";
 }
return 0;
}
