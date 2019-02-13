#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int result = 0;
	while(n--){
		float x1,x2,y1,y2,x3,y3;
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		float a,b,c;
		a = sqrt(pow(x1 - x2,2) + pow(y1 - y2,2));
		b = sqrt(pow(x3 - x2,2) + pow(y3 - y2,2));
		c = sqrt(pow(x1 - x3,2) + pow(y1 - y3,2));
		//cout<<"a = "<<a<<" b = "<<b<<" c = "<<c<<endl;
		if(a > b && a > c){
			if((b*b + c*c) == a*a)
				result++;
		}else if(b > c){
			if((a*a + c*c) == b*b)
				result++;
		}else{
			if((a*a + b*b) == c*c)
				result++;
		}
		cout<<result<<endl;
	}
	return 0;
}