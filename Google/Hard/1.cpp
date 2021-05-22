//Code written by Jaswant Singh
//PR with more optimised code or implementation in other language is welcome
#include<bits/stdc++.h>
using namespace std;

long long Nth_num(long long n)
{
    long long rem=0,tens=0;
    while(n>=9)
    {
        rem += (n%9)*pow(10,tens);
        n /= 9;
        tens++;
    }
    rem += (n)*pow(10,tens);
    return rem;
}

int main()
{
    ios::sync_with_stdio(0);
    long long n;
    cin >> n;
    cout << Nth_num(n) << endl;
    return 0;
}
