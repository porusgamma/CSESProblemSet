//
// Created by Porus on 24-10-2025.
//
#include <bits/stdc++.h>
using namespace std;
int solve(string s)
{
    int count =1, ans =1;
    for (int i=1; i<s.length(); i++)
    {
        if (s[i]==s[i-1])

            count+=1;

        else

            count=1;
        ans=max (count,ans);
    }
    return ans;
}
int main()
{
    string s;
    cin>>s;
    cout<<solve(s);
}

