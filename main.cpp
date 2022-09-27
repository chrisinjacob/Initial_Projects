#include <iostream>
using namespace std;

int main()
{
    int id, i = 0, a[1000], search;
    float gpa, b[1000];
    cout << "Enter ID";
    cin >> a[i];
    cout << "Enter GPA";
    cin >> b[i];
    while (a[i] != -1 && b[i] != -1 && i < 1000)
        {
            i++;
            cout <<"Enter ID";
            cin >> a[i];
            cout << "Enter GPA";
            cin >> b[i];
        }
    if (i == 1000)
        {
            cout << "Too many data entered. It exceeds the given amount";
            return 0;
        }
    int cnt = i, j = 0;
    i = 0;
    cout << "Enter search id";
    cin >> search;
    while (search != -1)
        {
            j = 0, i = 0;
            while (i < cnt && j != -1)
                {
                    if (a[i] == search)
                        {
                            cout << b[i] << endl;
                            j = -1;
                        }
                    i++;
                }
            cout << "Enter search id (enter -1 to terminate)";
            cin >> search;
        }
}

