#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  string userinput;
  string again = "Yes";
  while (again.length() > 0)
  {
    
  cout << "Please enter a string:" << endl;
  getline(cin,userinput);
  if (userinput.length() < 1)
  {
  again.length() == 0;
  cout << "Bye";
  return 0;
  }
  
  else if (userinput.length() > 0)
  cout << "You entered:" << endl << userinput << endl;
  cout << "Here is your string in reverse:" << endl;
  reverse(userinput.begin(),userinput.end());
  cout << userinput<<endl;
  }
  return 0; 
}
