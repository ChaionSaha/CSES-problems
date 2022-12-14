#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin >> n;
    bool isContinue = true;
    cout << n << "\t";

    while (isContinue)
    {
        if(n==1)
        {
            isContinue = false;
            break;
        }
        else if(n%2==0)
        {
            n = n / 2;
            cout << n << "\t";
            continue;
        }
        else if(n%2!=0)
        {
            n = (n * 3) + 1;
            cout << n << "\t";
            continue;
        }
    }
    
}