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
     if(n==5)
     {
         cout<<"Equal to 5"<<endl;
     }
     else if(n>5)
     cout<<"Greater than 5"<<endl;
     else 
     cout<<"Less than 5"<<endl;
 }
	return 0;
}