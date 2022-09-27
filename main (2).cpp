#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
using namespace std;

//Chrisin Jacob
//CSCI 272 - Exam 1

int menu (vector <string> &prod)
{
    int i = 1;
    cout << "Menu: \n";
    for (string p: prod)
        {
            cout << i++ << "." << " " << p << endl;
        }
    cout << "Enter your choice: ";
    cin >> i;
    return i;
}
bool order (vector <string> &p, vector <int> &q, int choice)
{
    int i;
    cout << "Enter quantity needed: ";
    cin >> i;
    if (choice == 1)
        {
            if (i <= q[0])
                {
                    q[0] -= i;
                    return true;
                }
            else
                return false;
        }
    else if (choice == 2)
        {
            if (i <= q[1])
                {
                    q[1] -= i;
                    return true;
                }
            else
                return false;
        }
    else if (choice == 3)
        {
           if (i <= q[2])
                {
                    q[2] -= i;
                    return true;
                }
            else
                return false;
        }
    else if (choice == 4)
        {
           if (i <= q[3])
                {
                    q[3] -= i;
                    return true;
                }
            else
                return false;
        }
    else
        {
           if (i <= q[4])
                {
                    q[4] -= i;
                    return true;
                }
            else
                return false;
        }
}
void result (vector <string> &p, vector <int> &q)
{
    cout <<"Remaining Inventory:\n";
    cout << "Name\t" << "Remaining Quantity\n";
    int i = 0;
    for (string name: p)
        {
            cout << name << "\t" << q[i] << "\n";
            i++;
        }
}
int main()
{
    int number, choice, success = 0, fail = 0;
    vector <string> product {"Cake", "Pie", "Cookies", "Donuts", "Muffins"};
    vector <int> quantity {10, 20, 30, 40, 50};
    number = rand () % 20 + 1;
    for (int i = 1; i <= number; i++)
        {
            choice = menu (product);
            if (order (product, quantity, choice))
                {
                    success++;
                    cout << "Thank you for buying from us!\n";
                }
            else
                {
                    fail++;
                    cout << "Sorry the entered quantity is not available. Here is a discount coupon\n";
                }

        }
    result (product, quantity);
    cout << "Recap: \n"
         << "Sucessful Orders\t" << "Discount coupons given out\n"
         << success << "\t\t\t" << fail;
    
}


