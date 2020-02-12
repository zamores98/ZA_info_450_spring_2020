    #include <iostream>
    #include <cmath>
    using namespace std;
    float array(float data[]);
    float mean;
    float sum;
    int main()
    {
        int x;
        float data[10];
        cout << "Please Enter 10 Numbers ";
        for(x = 0; x < 10; ++x)
            cin >> data[x];
        cout << endl << "The STD Deviation of this set is: " << array(data);
    }
    float array(float data[])
    {
        float sum = 0, mean, stddev = 0;
        int x;
        for(x = 0; x < 10; ++x)
        {
            sum += data[x];
        }
        mean = sum/10;
        for(x = 0; x < 10; ++x)
            stddev += pow(data[x] - mean, 2);
        return sqrt(stddev / 10);
    }
