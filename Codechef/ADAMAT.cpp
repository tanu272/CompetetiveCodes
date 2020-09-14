#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b)         for(i=a;i<b;i++)
#define ford(i,a,b)        for(i=a;i>b;i--)
#define pb                 push_back
#define mp                 make_pair
#define ld                 long double
#define vli                vector<long int>
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
	llt t, n, i, j;
	long int a[64][64], mat[64][64];
  
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    FOR(i, 0, n)
	    {
	        FOR(j, 0, n)
	        {
	            cin>>mat[i][j];
	        }
	    }
	    long int m=1;
	    FOR(i, 0, n)
    	{
    	    FOR(j, 0, n)
    	    {
    	        a[i][j]=m;
    	        m++;
    	    }
    	}
    	
    	long int res=0;
    	
    	top:
        	long int k=0;
        	FOR(i, 1, n)
        	{
        	    if(a[0][i]!=mat[0][i])
        	    {
        	        k = i;
        	    }
        	}
    	
    	if(k!=0)
    	{
        	res++;
        	llt A[64][64];
        	FOR(i, 0, k+1)
        	{
        	    FOR(j, 0, k+1)
        	    {
        	        A[j][i]= mat[i][j];
        	    }
        	}
        	FOR(i, 0, k+1)
        	{
        	    FOR(j, 0, k+1)
        	    {
        	        mat[i][j]= A[i][j];
        	    }
        	}
        	goto top;
    	}
    	else
    	{
    	    goto pout;
    	}
    	
    	
    	pout:
        	/*FOR(i, 0, n)
        	{
        	    FOR(j, 0, n)
        	    {
        	        cout<<mat[i][j]<<" ";
        	    }nl;
        	}*/
        	cout<<res; nl;
	}
	return 0;
}
