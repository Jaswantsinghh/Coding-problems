//Problem Statement in README.md file
//If you're have more accurate, optimized or well structured code, you're welcome for sending me a PR
//you are also welcome for line by line documentation

//Written by Jaswant Singh
#include <bits/stdc++.h>
using namespace std;

int towerofhanoi(int n,char from,char aux,char to)
{
    if(n==1)
    {
        cout << "Move disk 1 from "<<from<<" to "<<to<<"\n";
    }
    else
    {
        towerofhanoi(n-1,from,to,aux);
        cout << "Move disk "<<n<<" from "<<from<<" to "<<to<<"\n";
        towerofhanoi(n-1,aux,from,to);
    }
  return pow(2,N)-1;
}

int main()
{
    int n;
    char from ,aux ,to;
    cin >> n;
    from = 'A';
    aux = 'B';
    to = 'C';
    cout << towerofhanoi(n,from,aux,to) <<"\n";
    return 0;
}
