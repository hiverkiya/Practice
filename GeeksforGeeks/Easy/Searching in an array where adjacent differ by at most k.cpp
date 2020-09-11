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
     int n,k,x;
     cin>>n>>k;
     int a[n];
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
     cin>>x;
     int flag=0,ii=0;
     for(int i=0;i<n;i++)
     {
         if(x==a[i])
         {
             flag=1;
             ii=i;
             break;
         }
     }
     if(flag==1)
     cout<<ii<<endl;
     else
     cout<<-1<<endl;
 }
	return 0;
}