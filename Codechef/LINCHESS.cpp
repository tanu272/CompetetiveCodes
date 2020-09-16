#include <bits/stdc++.h>
using namespace std;
typedef long long int llt;

int main() {
	llt t, n, k, step, a[1000000];
	cin>>t;
	while(t--)
	{
	    cin>>n>>k;
	    for(llt i=0; i<n; i++)
	    {
	        cin>>a[i];
	    }
	    sort( a, a+n );
	    if(a[0]>k)
	    {
	        cout<<-1;
	        break;
	    }
	    else
	    {
	        bool flag=0;
	        for(llt i=0;i<n;i++)
	        {
	            if(k%a[i]==0)
	            {
	                step=a[i];
	                flag=1;
	            }
	        }
	        if(flag==1)
	        {
	            cout<<step;
	        }
	        else
	        {
	            cout<<-1;
	        }
	    }
	    cout<<"\n";
	}
	return 0;
}
