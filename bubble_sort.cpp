#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main()
{
    int a[5] = {50,33,27,20,10};

    int n = sizeof(a)/sizeof(a[0]);
    // cout<<n;
    int j = n-1;
    int temp = 0;
    while(j>0)
    {
        for (int i = 0; i < j; i++)
        {
            if (a[i]>a[i+1])
            {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
            
        }
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
}