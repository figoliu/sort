#include <iostream>
using namespace std;

int main (){
    int a[10] = {34, 56, 98, 23, 67, 277, 8, 87, 56, 145};
    bool isSwap = false;
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10 - i - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                isSwap = true;
            }
        }
        if(!isSwap)
        {
            break;
        } 
    }
    for(int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
