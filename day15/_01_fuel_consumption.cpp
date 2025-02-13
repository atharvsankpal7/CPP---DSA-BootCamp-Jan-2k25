#include <bits/stdc++.h>
using namespace std;
int main()
{
    // capactiy of fuel tank
    // distance we can drive
    int tankCapacity;
    int distance;
    cin >> tankCapacity >> distance;
    int CONSTANT = 100;
    float output = (tankCapacity * CONSTANT) / (float)distance;
    cout << output << endl;

    // for imperial system
    double miles = distance * 0.6214;
    double gallon = tankCapacity * 0.2642;
    
    double milesPerG = miles / gallon; 
    cout << milesPerG << endl;
    return 0;
}