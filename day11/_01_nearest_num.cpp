#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, num;
    cin >> num >> m;

    int greaterE = num;
    while(greaterE % m != 0){
        greaterE++;
    }
    int greaterDist = greaterE - num;

    int smallerE = num;
    while(smallerE % m != 0){
        smallerE--;
    }
    int smallerDist = num - smallerE;

    if(smallerDist < greaterDist){
        cout << smallerE << endl;
        return 0;
    }else{
        cout << greaterE << endl;
        return 0;
    }
    return 0;
}