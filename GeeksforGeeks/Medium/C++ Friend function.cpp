//Initial Template for C++

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class student
{
    private:
    string first_name;
    string last_name;
    
    public:
    void set_name(string f, string l)
    {
        first_name = f;
        last_name = l;
    }
       
    friend void check_name(student k);
};

    
 // } Driver Code Ends


//User function Template for C++

void check_name(student k)
{
int hash[128]={0};
for(char &i:k.first_name) hash[(int)i]++;
for(char &i:k.last_name) hash[(int)i]--;
for(char &i:k.last_name)
if(hash[(int)i]){ printf("NOT ANAGRAM\n"); return; }
printf("ANAGRAM\n");

}

// { Driver Code Starts.
  
  
  
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	   
	    string f,l;
	    cin>>f>>l;
	   
	    student s1;
	    s1.set_name(f,l);
	    check_name(s1);
	    
	    
	    
	}
	return 0;
}  // } Driver Code Ends