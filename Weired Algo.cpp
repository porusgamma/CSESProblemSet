//
// Created by Porus on 22-10-2025.
//
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  cout << n;
  for (; n != 1;)
  {
    if (n%2 == 0)
    {
      n= n/2;
    }
    else
    {
      n= (n*3)+1;
    }
    cout << " "<< n;
  }
  cout << endl;
    return 0;
  }



