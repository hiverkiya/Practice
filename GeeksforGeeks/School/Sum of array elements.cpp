#include<bits/stdc++.h>
using namespace std;
int main()
 {
 cin.tie(NULL);
 ios_base::sync_with_stdio(false);
 int n,t,s=0;
 cin>>t;
 while(t--)
 {cin>>n;
 long ss=0;
 for(int i=0;i<n;i++)
 {
     cin>>s;
     ss+=s;
     
 }
 cout<<ss<<endl;
     
 }
	return 0;
}