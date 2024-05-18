#include <bits/stdc++.h>
using namespace std;



 void solve(){
 long long x;
 cin>>x;
 
 string s=to_string(x);
 
 
 for(int i=0;i<s.length();i++){
    int dig=s[i]-'0';
    if(dig>=5)s[i]='9'-s[i]+'0';
 }   
 cout<<s;


 }


// Use shift + caplock to compile and run the program.
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
    //cin>>t;
   
	while(t--){
		solve();
	}
	
	return 0;
}



