#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

lli solve(lli x, lli a[], lli n)
{
    lli l=0,r=n-1,m,ans;

    while(r>=l)
    {
        m= l+(r-l)/2;

        if(a[m]>= x)
        {
            ans=m;
            r=m-1;
        }
        else
        l=m+1;

    }

    return ans;

}

int main()
{
    lli n,q,x,i;
    cin>>n;
    lli a[n];

    for(i=0;i<n;i++)
    {
        cin>>a[i];
        
        if(i>0)
        a[i]=a[i]+a[i-1];
    }

    cin>>q;
    while(q--)
    {
        cin>>x;
        lli m = solve(x, a, n);

        cout<<m+1<<"\n";
    }
}