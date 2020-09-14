#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b)         for(i=a;i<b;i++)
#define ford(i,a,b)        for(i=a;i>b;i--)
#define pb                 push_back
#define mp                 make_pair
#define ld                 long double
#define vi                 vector<int>
#define vvi                vector<vector<int>>
#define vpii               vector<pair<int,int>>
#define pii                pair<int,int>
#define mii                map<int,int>
#define umap               unordered_map
#define all(c)             c.begin(),c.end()
#define si(c)              (int)c.size()
#define lb                 lower_bound
#define ub                 upper_bound
#define gi                 greater<int>
#define rev                reverse
#define ff                 first
#define ss                 second
#define yes                cout << "YES" << endl
#define no                 cout << "NO" << endl
#define ayes               cout << "Yes" << endl;
#define ano                cout << "No" << endl;
#define imp                cout << "IMPOSSIBLE" << endl
#define nl                 cout << endl
#define hello              cout << "hello" << endl
#define sp(x)              fixed << setprecision(x)
#define re                 return
#define p_q                priority_queue
#define FAST               ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
typedef long long int llt;

int32_t main()
{
	FAST;
	llt t, n, i; 
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    llt sum= n*(n+1)/2;
	    long double rem = sum/2;
	    
	    if(n==2||n==1||(sum%2==1))
	        {cout<<0; nl;}
	    /*else if(n==3)
	    {
	        cout<<2; nl;
	    }*/
	    
	    else
	    {
            llt sum_temp=0, ii=1;
            while(rem>=sum_temp)
            {
                sum_temp= sum_temp+ii;
                ii++;
            }
            ii--;
            llt res = sum_temp-ii;
            //cout<<res; nl; nl;
            if(res==(sum-res))
            {
                ii--;
                llt ans= (ii-1)*ii/2;
                llt m = n-ii-1;
                llt ans1= m*(m+1)/2;
                
                cout<<ans+ans1+m+1; nl;
                continue;
            }
            cout<<n-ii+1; nl;
	    }
	}
	return 0;
}
