using namespace std;
int find(int arr[],int n,int k)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            return i;
        }
    }
    return -1;
}
int main()
 {
 cin.tie(NULL);
 ios_base::sync_with_stdio(false);
 int t,n,k;
 cin>>t;
 while(t--)
 {cin>>n;
 int arr[n];
 for (int i=0;i<n;i++)
 {
     cin>>arr[i];
 }
 cin>>k;
 cout<<find(arr,n,k)<<endl;
 
     
 }
	return 0;
}