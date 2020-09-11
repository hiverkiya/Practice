#include<bits/stdc++.h>
using namespace std;
long long fun(long long a,long long b, long long c)
{
    if(b==0)
    return 0;
    long long s=fun(a,b/2,c);
if(b%2==1)
return (a%c+(2*(s%c)))%c;
else
return
(2*(s%c))%c;}
int main()
 {
 cin.tie(NULL);
 ios_base::sync_with_stdio(false);
 int t;
 cin>>t;
 long long int a,b,c;
 while(t--)
 {
     cin>>a>>b>>c;
     cout<<fun(a,b,c)<<endl;
     
 }
	return 0;
}