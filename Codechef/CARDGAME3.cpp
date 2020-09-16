#include <bits/stdc++.h>
using namespace std;
typedef long long int llt;

int main() {
	llt t, n, r, c, step1, step2;
	cin>>t;
	while(t--)
	{
	    cin>>c>>r;
	    if(c%9==0)
	    {
	        step1= c/9 ;
	    }
	    else
	    {
	        step1= c/9 + 1;
	    }
	    if(r%9==0)
	    {
	        step2= r/9 ;
	    }
	    else
	    {
	        step2= r/9 + 1;
	    }
	    if(step2<=step1)
	    {
	        cout<<"1 "<<step2;
	    }
	    else
	    {
	        cout<<"0 "<<step1;
	    }
	    cout<<"\n";
	}
	return 0;
}
