#include<bits/stdc++.h>
using namespace std;
int main()
 {
 cin.tie(NULL);
 ios_base::sync_with_stdio(false);
 int t;
 cin>>t;
 while(t--)
 {
     int n;
     cin>>n;
     switch(n)
     {
         case 1: int a,b;
         cin>>a>>b;
         cout<<(a>b?a:b)<<endl;
         break;
         case 2: char c,d;
         cin>>c>>d;
         cout<<(c>d?c:d)<<endl;
         break;
         case 3:
         double e,f;
         cin>>e>>f;
         cout<<(e>f?e:f)<<endl;
         break;
     }
 }
	return 0;
}