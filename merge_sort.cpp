#include <stdlib.h>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void merge(int *a, int start, int mid, int end)
{
    int temp[end-start+1];
    int i = start, j = mid+1, k =0;

    while (i<= mid && j<= end)
    {
        if(a[i]<=a[j])
        {
            temp[k]=a[i];
            k++;
            i++;
        }
        else
        {
            temp[k]=a[j];
            k++;
            j++;
        }
    }
    while(i <= mid)
    {
        temp[k] = a[i];
        k++;
        i++;
    }
    while(j <= end)
    {
        temp[k] = a[j];
        k++;
        j++;
    }

    for (int i = start; i <= end; i++)
    {
        a[i] = temp[i-start];
    }
}

void mergeSort(int *a, int start, int end)
{
    if(start<end)
    {
        int mid = (start+end)/2;
        mergeSort(a, start, mid);
        mergeSort(a, mid+1, end);
        merge(a, start, mid, end);
    }
}

int main()
{
    int a[8] = {14,7,3,12,9,11,6,2};
    int start = 0;
    int end = 7;
    mergeSort(a, start, end);
    for (int i = 0; i <= end; i++)
    {
        cout<<a[i]<<endl;
    }
}