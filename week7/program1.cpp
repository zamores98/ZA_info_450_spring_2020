#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  string userinput;
  cout << "Please enter a string!:" << endl;
  getline(cin,userinput);
  cout<< "You entered:" << endl << userinput << endl;
 
  cout << "Here is your string in reverse!" << endl;
  reverse(userinput.begin(),userinput.end());
  cout << userinput<<endl;
}
