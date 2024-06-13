/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main(void)
{
 string password;
 string userinput;
 cout << "Enter Password:" << endl;
 cin >> password;
 cout << "Guess the Password" << endl;
 do
 {
 cin >> userinput;
 if (userinput != password)
 {
 cout << "You guessed wrong, guess again!" << endl;
 }
 } while (userinput != password);
cout << "You guessed right!" << endl;
return 0;
}