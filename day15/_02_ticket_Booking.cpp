#include <bits/stdc++.h>
using namespace std;

int main()
{
    int numT;
    cin >> numT;
    // between 5 and 40
    if (numT > 40 || numT < 5)
    {
        cout << "Minimum of 5 and Maximum of 40 Tickets" << endl;
        return;
    }

    string refreshment;
    cin >> refreshment;
    bool c;
    cin >> c;
    char circle;
    cin >> circle;
    if (circle != 'k' || circle != 'q')
    {
        cout << "Invalid Input" << endl;
        return;
    }

    int ticketPrice;
    if (circle == 'k')
    {
        ticketPrice = 75;
    }
    else
    {
        ticketPrice = 150;
    }
    double totalPrice = ticketPrice * numT;
    if (numT > 20)
    {
        totalPrice *= .9;
    }

    if (c == true)
    {
        double discount = totalPrice * (2 / 100.0);
        totalPrice -= discount;
    }

    if (refreshment == "yes")
    {
        totalPrice += 50 * numT;
    }   
    cout  << totalPrice << endl;

    return 0;
}