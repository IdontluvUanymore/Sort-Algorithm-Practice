#include<bits/stdc++.h>
using namespace std;
int main(){
	while(true){
		int sum,mn;
    	cin>>sum;
    	int a[sum];
    	for(int u=0;u<sum;u++){
    		cin>>a[u];
		}
    	for(int i=0;i<sum-1;i++){
    		mn=i;
    	    for(int j=i+1;j<sum;j++){
    	    	if(a[j]<a[mn]){
    	    		mn=j;
				}
			}
			swap(a[i],a[mn]);
    	}
    	for(int u=0;u<sum;u++){
    		cout<<a[u]<<" ";
		}
		cout<<"\n\n";
	}
	return 0;
}
