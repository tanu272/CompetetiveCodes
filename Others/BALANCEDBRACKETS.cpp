#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str1;
	int index=0, flag = true, a;
	char top;
	cin>>str1;
	stack<char>s1;
	while(index<str1.length())
		{
		    if (s1.empty())
		    	a=index;
			if(str1[index]=='['||str1[index]=='{'||str1[index]=='(')
				s1.push(str1[index]);
			else
			{
				if((str1[index]==']'||str1[index]=='}'||str1[index]==')'))
				{
				 if(s1.empty())
				{
					flag=false;
					break;
				}
				else
				{
					top=s1.top();
					s1.pop();
				    if(( top =='[' && str1[index]!=']')||( top=='{' && str1[index]!='}')||( top=='(' && str1[index]!=')'))
				    {
				    	flag=false;
						break;
				    }
				}
				}
			}
				index+=1;
		}
	if(flag&&s1.empty())
		cout<<"Success"<<endl;
	else
	{
		if((index>=str1.size())&&!s1.empty())
			cout<<a+1<<endl;
		else
			cout<<index+1<<endl;
	}
    return 0;
}
