#include <iostream>
#include <string>
using namespace std;    

double exit_function (string a){
    if (a == "Y")
    {
        cout << "BYE";
        return 0;
    }
    else {
        cout << "Number System Conversion" << endl
             << "Choose your number system" << endl
             << "2.BINARY" << endl
             << "3.TERNARY" << endl
             <<"4.QUATERNARY" << endl
             << "5. QUINARY" << endl
             <<"6. SENARY" << endl
             << "7. SEPTENARY" << endl
             << "8.OCTAL" << endl
             << "9.NONARY" << endl
             <<"10. DECIMAL" << endl
             << "16. HEXADECIMAL" << endl
             << "Input any other value to exit the program" << endl;
    }
}
int main()
{
    int x;
    string y, z;
    cout << "Number System Conversion" << endl
             << "Choose your number system" << endl
             << "2.BINARY" << endl
             << "3.TERNARY" << endl
             <<"4.QUATERNARY" << endl
             << "5. QUINARY" << endl
             <<"6. SENARY" << endl
             << "7. SEPTENARY" << endl
             << "8.OCTAL" << endl
             << "9.NONARY" << endl
             <<"10. DECIMAL" << endl
             << "16. HEXADECIMAL" << endl
             << "Input any other value to exit the program" << endl;
    cin >> x;
    if ((x >= 2 && x <= 10) || x == 16)
        {
            cout << "SOURCE NUMBER SYSTEM = " << x << endl
                 << "Choose your target number system " << endl;
            cin  >> y;
            if (y >= 2 && y <= 10 && y == 16){
                
            }
        }
    else {
        cout << "Are you sure you want to quit the program? (Y/N)" << endl;
        cin >> z;
        exit_function (z);
    }
            
    
}


