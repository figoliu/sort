#include <iostream>
using namespace std;
/*
插入排序
*/
int main (){
    int a[10] = {34, 56, 98, 23, 67, 277, 8, 87, 56, 145};
    for(int i = 1; i < 10; i++)
    {
        int f = a[i];
        int j = i - 1;
        while(j >= 0 && a[j] > f)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = f;
    }
    for(int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
