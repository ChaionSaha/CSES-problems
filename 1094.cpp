#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    long long int count = 0, prevCount = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    for (int i = 0; i < n-1; i++)
    {
        if(a[i+1]<a[i])
        {
            int diff = a[i] - a[i + 1];
            a[i + 1] = a[i + 1] + diff;
            prevCount = diff;
            count += prevCount;
        }

        
    }

    cout << count;
}