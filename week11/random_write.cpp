#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  ofstream randoms;
  randoms.open("randoms.txt");
  if (!randoms) {
     cout << "Cannot open file." << endl;
     return 1;
  }

  int place = 0;

  while (place < 1000){
  randoms << rand() % 2001 + -1000 << endl;
  place++;
  }

  randoms.close();
  return 0;
}
