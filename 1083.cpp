#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int sumOfNumbers(int n);

int main(){
    int n;
    cin >> n;
    int mainSum = sumOfNumbers(n), inputSum = 0, input;

    for (int i = 0; i < n-1; i++)
    {
        cin >> input;
        inputSum += input;
    }

    cout << mainSum - inputSum;
}

int sumOfNumbers(int n)
{
    int sum = 0;
    for (int i = 1; i <=n; i++)
    {
        sum += i;
    }
    return sum;
}