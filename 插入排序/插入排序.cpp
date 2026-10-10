#include<bits/stdc++.h>
using namespace std;
int main(){
	while(true){
		int sum;
		cin>>sum;
		int a[sum];
		for(int u=0;u<sum;u++){
			cin>>a[u];
		}
		for(int i=0;i<sum;i++){
			int temp=a[i];
			int j=i-1;
			while(j>=0&&a[j]>temp){
				a[j+1]=a[j];
				j-=1;
			}
			a[j+1]=temp;
		}
		for(int u=0;u<sum;u++){
			cout<<a[u]<<" ";
		}
		cout<<"\n\n";
	}
	return 0;
}
