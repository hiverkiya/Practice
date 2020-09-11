#include<bits/stdc++.h>
using namespace std;
int main()
{
//code
int T;
string str;
cin >> T;
while(T--) {
cin >> str;
//
if ( !isdigit(str.front()) ) {
cout << sizeof(char) << endl;
}
else if (str.find('.')==string::npos) {
cout << sizeof(int) << endl;
}
else if((str.size() - str.find('.')) <= 6)
{
cout << sizeof(float) << endl;
}
else
{
cout << sizeof(double) << endl;
}
//

}
	return 0;
}