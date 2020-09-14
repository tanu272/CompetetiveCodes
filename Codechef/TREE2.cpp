#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b)         for(i=a;i<b;i++)
#define ford(i,a,b)        for(i=a;i>b;i--)
#define pb                 push_back
#define MAX                100000000
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
	llt t, n, i, a[100000];
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    FOR(i, 0, n)
	    {
	        cin>>a[i];
	    }
	    sort(a, a+n);
	    llt m= n;
	    set<int> s; 
	    FOR(i, 0, n)
	    {
	        if(a[i]!=0)
	            s.insert(a[i]);
	    }
	    set<int>::iterator it;
	    llt res =0;
 
        for (it = s.begin(); it != s.end(); ++it) 
        {
            res++;
        }
	    
	    cout<<res<<"\n";
	}
	return 0;
}
