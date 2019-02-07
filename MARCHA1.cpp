#include<bits/stdc++.h>
using namespace std;
bool find(int set[],int sum,int n){
	
	// if(sum == 0){
	// 	return 1;
	// }
	// if( n == 0){
	// 	return 0;
	// }
	// if(sum < ar[n-1]){
	// 	return find(ar,sum,n-1);
	// }
	// return find(ar,sum,n-1) || find(ar,sum - ar[n-1],n-1);


	bool subset[n+1][sum+1]={0}; 
   
    for (int i = 0; i <= n; i++) 
      subset[i][0] = true; 
   
	for (int i = 1; i <= sum; i++) 
      subset[0][i] = false; 

   
    for (int i = 1; i <= n; i++) 
     { 
       for (int j = 1; j <= sum; j++) 
       { 
        	if(j<set[i-1]) 
        		subset[i][j] = subset[i-1][j]; 
        	if (j >= set[i-1]) 
           		subset[i][j] = subset[i-1][j] ||  subset[i - 1][j-set[i-1]]; 
       } 
     } 

    // for (int i = 0; i <= n; i++) 
    // { 
    //    for (int j = 0; j <= sum; j++) 
    // 	{
    // 		cout<<subset[i][j]<<" ";
    // 	} 
    // 	cout<<endl;
    // } 

     return subset[n][sum]; 

}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,sum;
		cin>>n>>sum;
		int ar[n];
		for(int i=0;i<n;i++)
			cin>>ar[i];
		if(find(ar,sum,n)){
			cout<<"Yes\n";
		}else{
			cout<<"No\n";
		}
	}
	return 0;
}