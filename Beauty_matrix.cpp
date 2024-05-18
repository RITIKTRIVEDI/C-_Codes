#include <bits/stdc++.h>
using namespace std;



 void solve(){
int count=0;
for(int i=0;i<5;i++){
    for(int  j=0;j<5;j++){
        int a;
        cin>>a;
        if(a==1){
            count+= abs(2-i)+abs(2-j);
          
        }

    }
}
cout<<count;


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



