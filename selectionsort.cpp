#include <iostream>
using namespace std;

int main()
{
    int a[10] = {34, 56, 98, 23, 67, 277, 8, 87, 56, 145};
    int min;
    for(int i = 0; i < 10; i++)
    {
        min = i;
        for(int j = i + 1; j < 10; j++)
        {
            if(a[j] < a[min])
            {
                min = j;
            }
        }
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    for(int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
}
