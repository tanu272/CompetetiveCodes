#include <bits/stdc++.h>
using namespace std;
typedef long long int llt;

void starwars(llt h, llt p)
{
    while(h!=0||p!=0)
    {
        h-=p;
        p/=2;
        if(h<=0)
        {
            cout<<1;
            break;
        }
        else if(p<=0)
        {
            cout<<0;
            break;
        }
        else
        {
            continue;
        }
    }
    cout<<"\n";
}

int main() {
	llt t, n, h,p;
	cin>>t;
	while(t--)
	{
	    cin>>h>>p;
	    starwars(h,p);
	}
	return 0;
}
