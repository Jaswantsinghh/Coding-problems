//Written by Jaswant Singh
//If you have solved it in more optimised way, PR is welcome
#include <bits/stdc++.h>
using namespace std;

int c=1;

bool isLucky(int n)
{
    c++;
    if(n<c) return true;
    else if(n%c==0) return false;
    return isLucky(n-(n/c));
}

int main()
{
    int n;
    cin >> n;
    cout << isLucky(n);
    return 0;
}
