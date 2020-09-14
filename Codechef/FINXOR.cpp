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
	llt t, n, res1, i, sum;
	cin>>t;

    
	while(t--)
	{
	    llt a[22]={0};
        a[0]=1;
        FOR(i, 1, 21)
        {   a[i]=a[i-1]*2; }
        
        cin>>n;
	    
	    cout<<1<<" "<< a[20]; nl;
	    cout<<flush;
	    cin>>sum;
	        sum = sum- (a[20]*n);
	   //cout<<sum; nl;
	   
	    llt res_xor = 0;
	    if(sum%2!=0)
	    {   res_xor= res_xor+1;}
	    
	    FOR(i, 1, 20)
	    {
	        llt sum_i = sum +(a[i]*n);
	        cout<<1<<" "<<a[i]<<"\n";
	        cout<<flush;
	        
	        llt sum_o;
	        cin>>sum_o;
	        llt m= (sum_i - sum_o)/(a[i]*2);
	        if(m%2!=0)
	            res_xor = res_xor +a[i];
	    }
	    
	    cout<<2<<" "<<res_xor; nl;
	    cout<<flush;
	    cin>>res1;
	    if(res1==1)
	    {
	        continue;
      }
	    else
	    {
	        exit(0);
	    }
	}
	return 0;
}
