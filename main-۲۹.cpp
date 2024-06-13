/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;
struct car{
 char brand[15];
 char model[15];
 int carcard;
 int drive(int a){
 return carcard+a;
 }
};
void showdata(car b){
 cout<<"Brand:"<<b.brand<<endl;
 cout<<"Model:"<<b.model<<endl;
 cout<<"Distance driven:"<<b.carcard<<endl;
}
int main(){
 car c;
cin>>c.brand;
 cin>>c.model;
cout<<"carcard ?"<<endl;
 cin>>c.carcard;
 showdata(c);
 int carcard2;
 cout<<"cheghadr b carcard ezaf she?"<<endl;
 cin>>carcard2;
 cout<<"carcard afzayesh yafte:"<<c.drive(carcard2);
return 0;
}