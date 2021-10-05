#include <stdlib.h>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void insertionSort(int a[], int n)
{
    int i,j,temp;
    for (int i = 1; i < n; i++)
    {
        temp = a[i];
        j = i-1;
        while (j>=0 && a[j]>temp)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1]=temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<"a["<<i<<"] = "<<a[i]<<endl;
    }
    
}



int main()
{
    int a[5] = {25,17,31,13,2};
    int n = sizeof(a)/sizeof(a[0]);
    insertionSort(a,n);
    return 0;
}