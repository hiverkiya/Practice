#include<bits/stdc++.h>
using namespace std;
int main()
 {
 cin.tie(NULL);
 ios_base::sync_with_stdio(false);
 int t,n,k;
 cin>>t;
  while(t--)
  {
      cin>>n>>k;
      int a[n];
      for(int i=0;i<n;i++)
      cin>>a[i];
      cout<<a[k]<<endl;
      
  }
	return 0;
}