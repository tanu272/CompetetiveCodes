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

void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  

int b_sort(int arr[], int x, int n)
{
    int i, j;  
    int visited[n]={0};
    visited[x] = 1;
    
    for (i = 0; i < n-1; i++)      
    // Last i elements are already in place  
    {
        for (j = 0; j < n-i-1; j++)  
        {
            if (arr[j] > arr[j+1])  
            {
                if(visited[j]==1)
                    visited[j+1] = 1;
                    
                else if(visited[j+1]==1)
                {
                    visited[j] = 1;
                }
                else
                {
                    visited[j]=0; visited[j+1]=0;
                }
            swap(&arr[j], &arr[j+1]);  
            }
        }
    }
    
    int count =0;
    for (i = 0; i < n; i++)
    {
        if(visited[i]==1)
            count++;
        //cout<<visited[i]<<" ";
    }//nl;
    return count;
}

int32_t main()
{
	FAST;
	llt t;
	int i, j, k, l, n, a[6];
	
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    FOR(i, 0, n)
	    {
	        cin>>a[i];
	    }
	    int arr[n][n]= {0};
	    FOR(i, 0, n)
	    {
	        FOR(j, 0, n)
	        {
	            arr[i][j]=a[j];
	        }
	    }
	    
	    int sum[6]={0};
	    FOR(i, 0, n)
	    {
	        sum[i] = b_sort(arr[i], i, n);
	    }
	    sort(sum, sum+n);
	    /*FOR(i, 0, n)
	    {
	        cout<<sum[i]<<" ";
	    }
	    nl;*/
	    cout<<sum[0]<<" "<<sum[n-1];
	    nl;
	}
	return 0;
}
