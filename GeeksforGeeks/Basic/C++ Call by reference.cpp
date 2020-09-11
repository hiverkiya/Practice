//Initial Template for C++

#include <iostream>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

void reverse_dig(int &a,int &b)
{
    
    long out = 0;
    while(a)
    {
        out *= 10;
        out += a % 10;
        a /= 10;
    }
    a=out;
     out = 0;
    while(b)
    {
        out *= 10;
        out += b % 10;
        b /= 10;
    }
    b=out;
    //Add your code here.
}
void swap(int &a,int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    //Add your code here.
}


// { Driver Code Starts.

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
	    cin>>a>>b;
	
	    reverse_dig(a,b);
	    swap(a,b);
	    cout<<a<<" "<<b<<endl;
    }
	return 0;
}  // } Driver Code Ends