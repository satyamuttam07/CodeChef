#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;


		int a[100000]={0};
		int s=0;
		

		for(int i=0;i<n;i++){
			cin>>a[i];
			s += a[i];
		}
		
		// cout<<"s = "<<s<<endl;

		int t1=0,t2 = 0;
		

		sort(a,a+n);
		
		for(int i=0;i<k;i++){
			t1 += a[i];
			t2 += a[n-i-1];
		}
		t1 = abs(s - 2*t1);
		t2 = abs(s - 2*t2);


		// cout<<"t1 = "<<t1<<endl;

		// cout<<"t2 = "<<t2<<endl;

		if(t1 > t2){
			cout<<t1<<endl;
		}else{
			cout<<t2<<endl;
		}
	}
	return 0;
}