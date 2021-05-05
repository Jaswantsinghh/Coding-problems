/* Problem Statement in Readme.md file 
 If you have found more optimized solution than this one that you're welcome to send me a PR. */

//Coded by Jaswant Singh
#include<bits/stdc++.h>
#define  ll long long
using namespace std;

ll check(ll p,ll q)
{
    ll dig1 = (ll)log10(p);
    ll dig2 = (ll)log10(q);
    ll pd=p,qd=q;
    if(dig1 == dig2)
    {
        return p>q?p:q;
    }
    if(p==0||q==0)
    {
        return p==0?q:p;
    }
    if(dig1!=dig2)
    {
        pd = (ceil)(p/(pow(10,dig1)));
        qd = (ceil)(q/(pow(10,dig2)));
        
        if(pd!=qd)
        {
            return pd>qd?p:q;
        }
        if(pd==qd)
        {
            if(dig1>dig2)
            {
                ll rem = dig1-dig2;
                ll itr=0;
                ll dp=p, dq=q*(pow(10,rem));
                while(itr<rem)
                {
                    dq += (dp%10)*(pow(10,itr));
                    dp=dp/10;
                    itr++;
                }
                dp=p;
                return dp>dq?p:q;
            }
            if(dig1<dig2)
            {
                ll rem = dig2-dig1;
                ll itr=0;
                ll dq=q, dp=p*(pow(10,rem));
                while(itr<rem)
                {
                    dp += (dp%10)*(pow(10,itr));
                    dq=dq/10;
                    itr++;
                }
                dq=q;
                return dp>dq?p:q;
            }
        }
    }
}

ll large_num(ll arr[],ll n)
{
    ll itr=0,num=0;
    for(ll i=n-1;i>=0;--i)
    {
        num += arr[i]*(pow(10,itr));
        if(arr[i]%10==0)
        {
            itr += (ceil)(log10(arr[i]+1));
        }
        else
        {
        itr += (ceil)(log10(arr[i]));
        }
    }
    return num;
}


int main()
{
    ll n,large,ind,j=0;
    cin >> n;
    ll arr[n], darr[n];
    for(ll i=0;i<n;++i)
    {
        cin >> arr[i];
    }
    while(j<n)
    {
        large=0,ind=-1;
        for(ll i=0;i<n;++i)
        {
            if(check(arr[i],large) == arr[i])
            {
              large = arr[i];
              ind = i;
            }
        }
       
        darr[j]=large;
        arr[ind]=0;
        j++;
    }
    cout << large_num(darr,n) <<"\n";
    return 0;
}
