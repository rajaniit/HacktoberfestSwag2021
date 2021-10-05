#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int binarySearch(int a[], int n, int x)
{
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    int low = 0;
    int high = n-1;
    int mid = 0;

    while(low <= high )
    {
        mid = low+(high-low)/2;
        if(x > a[mid])
        {
            low = mid+1;
        }
        else if(x < a[mid])
        {
            high = mid-1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    int a[5] = {1,8,32,45,60};
    int x = 45;
    int n = sizeof(a)/sizeof(a[0]);
    int ans;
    ans = binarySearch(a,n,x);
    cout<<ans;
}