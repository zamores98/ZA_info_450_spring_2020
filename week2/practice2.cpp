#include <iostream>
    #include <cmath>
    using namespace std;
    int main()
    {
        int number, x, y=0, z=0
            cout << "Enter a number to check if it's Prime ";
            cin >> number;
        y=number/2
        for(x = 2; x<=y; x++)
        {
            if(number % x ==0)
            {
                cout << "Not a Prime Number" << endl;
                z=1;
                break;
            }
        }
        if(z==0)
            cout << "That's a Prime number!" << endl;
        return 0;
    }
        

