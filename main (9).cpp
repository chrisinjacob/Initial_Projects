#include <iostream>
using namespace std;

int main()
{
    double a = 0, b = 0, c = 0, d = 0, e = 0, sum = 0, tax;
    cout << "Restaurant Menu:" << endl
         << "1. How many Caesar Salads ($9)? " << endl;
    cin  >> a;
    if (a > 0)
        {
            a *= 9;
            sum += a;
        }
    else 
        cout << "Error" << endl;
    cout << "2. How many Cheesesteaks ($10)? " << endl;
    cin  >> b;
    if (b > 0)
        {
            b *= 10;
            sum += b;
        }
    else 
        cout << "Error" << endl;
    cout << "3. How many Pizza ($15)? " << endl;
    cin  >> c;
    if (c > 0)
        {
            c *= 15;
            sum += c;
        }
    else 
        cout << "Error" << endl;
    cout << "4. How many Sodas ($2.25)? " << endl;
    cin  >> d;
    if (d > 0)
        {
            d *= 2.25;
            sum += d;
        }
    else 
        cout << "Error" << endl;
    cout << "5. How many Coffees ($2)? " << endl;
    cin >> e;
    if (e > 0) 
        {
            e *= 2;
            sum += e;
        }
    else 
        cout << "Error" << endl;
    cout << "Order total = " << sum << endl;
    tax = sum*0.25;
    cout << "Tax = " << tax << endl; 
    cout << "Total = " << sum + tax;
}


