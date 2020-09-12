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
     int a,n,sum=0;
     cin>>n;
     
     for(int i=0;i<n;i++)
     {
         cin>>a;
         sum+=a;
     }
     cout<<sum<<endl;
 }
	return 0;
}