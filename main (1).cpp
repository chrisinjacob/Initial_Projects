#include <iostream>
using namespace std;

void bubblesort (float val[], int size)
{
    int i = 0, j = 1;
    float a;
    while (j < size)
        {
            i = 0;
            while (i < size - j)
                {
                    if (val[i] < val[i + 1])
                        {
                            a = val[i];
                            val[i] = val[i + 1];
                            val[i + 1] = a;
                        }
                    i++;
                }
            j++;
        }
}
int main ()
{
    float grade[100];
    int j = 0, cnt;
    cout << "Enter grade";
    cin >> grade[j];
    while (grade[j] != -1 && j < 100)
        {
            j++;
            cout << "Enter grade (enter -1 to terminate)";
            cin >> grade[j];
        }
    if (j == 100)
        {
            cout << "Too many data entered";
            return 0;
        }
    cnt = j;
    bubblesort (grade, cnt);
    j = 0;
    while (j < cnt)
        {
            cout << grade[j] << endl;
            j++;
        }
}


