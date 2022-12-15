#include<iostream>
#include<bits/stdc++.h>
#include<string>

using namespace std;

int main(){
    string str;
    getline(cin, str);
    int count = 1, prevCount=1;

    for (int i = 0; i < str.length() - 1; i++)
    {
        if(str[i]==str[i+1]){
            prevCount++;
        }
        else
            prevCount = 1;

        if(prevCount > count)
            count = prevCount;
    }

    cout << count;
}