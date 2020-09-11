#include<bits/stdc++.h>
using namespace std;
void fun(int n)
{int f=0;
    for(int i=1,sum=0;i<n;i+=2)
    {
        sum+=i;
        if(sum==n)
        {f=1;
            cout<<1<<endl;
            break;
        }
    }
    if(f==0)
    cout<<0<<endl;
}
int main()
 {
 cin.tie(NULL);
 ios_base::sync_with_stdio(false);
 int t,n;
 cin>>t;
 while(t--)
 {
     cin>>n;
    
    fun(n);
     
     
 }
	return 0;
}