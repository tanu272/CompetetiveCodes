    #include<bits/stdc++.h>
    using namespace std;
    #define llt long long int
    #define FOR(i, a, n) for(i=a; i<n; i++) 
    #define nl cout<<"\n"
     
    int main()
    {
        llt t, n, a[10000], i, x;
        string str;
        cin>>t;
        while(t--)
        {
            cin>>n;
            cin>>str;
            /*FOR(i, 0, n)
            {
                a[i]=x%10;
                x=x/10;
            }*/
            if(n==1)
            {
                if(int(str[0])%2==0)
                    {cout<<2; nl;}
                else
                {    cout<<1; nl;}
            }    
            else
            {
                if(n%2==0)
                {
                    bool flag =0;
                    for(i=1; i<n; i+=2)
                    {
                        if(int(str[i])%2==0)
                        {
                            flag=1;
                            cout<<2; nl; 
                            break;
                        }
                    }
                    if(flag==0)
                    {    cout<<1; nl;}
                }
                else
                {
                    bool flag =0;
                    for(i=0; i<n; i+=2)
                    {
                        if(int(str[i])%2==1)
                        {
                            flag=1;
                            cout<<1; nl; 
                            break;
                        }
                    }
                    if(flag==0)
                    {    cout<<2; nl;}
                }
            }
        }
        return 0;
    }
