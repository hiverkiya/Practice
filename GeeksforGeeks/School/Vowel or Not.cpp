 #include<bits/stdc++.h>
 using namespace std;
  int main(){
 cin.tie(NULL);
 ios_base::sync_with_stdio(false);
 int t;
 cin>>t;
 while(t--)
 {
     char c;
     cin>>c;
     if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
     cout<<"YES";
     else
     cout<<"NO";
     cout<<endl;
 }
	return 0;
}