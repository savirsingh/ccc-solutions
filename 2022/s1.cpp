#include <bits/stdc++.h>
using namespace std; 
int main()
{
    int n; cin>>n;
    int ans=0;
    for(int i=0;i<=1000000;i++)
    {
        int total=i*5; 
        int rem=n-total;
        if(rem>=0 and rem%4==0) ans++; 
    }
    cout<<ans<<endl; 
}
