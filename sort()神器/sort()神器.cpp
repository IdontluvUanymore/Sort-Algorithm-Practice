#include<bits/stdc++.h>
using namespace std;
int cmd(int a,int b){
	return a>b;
}
int main(){
	string n;
	cin>>n;
	int len=n.length();
	int num[len];
	for(int i=0;i<len;i++){
		num[i]=n[i]-'0';
	}
	sort(num,num+6);
	for(int j=0;j<len;j++){
		cout<<num[j];
	}
	cout<<"\n";
	//按从小到大排序
	//int pos1=lower_bound(num,num+6,7)-num;    //返回数组中第一个大于或等于被查数的值
	//int pos2=upper_bound(num,num+6,7)-num;    //返回数组中第一个大于被查数的值
	//cout<<pos1<<" "<<num[pos1]<<endl;
	//cout<<pos2<<" "<<num[pos2]<<endl;
	sort(num,num+6,cmd);
	for(int k=0;k<len;k++){
		cout<<num[k];
	}
	//按从大到小排序
	//int pos3=lower_bound(num,num+6,7,greater<int>())-num;  //返回数组中第一个小于或等于被查数的值
	//int pos4=upper_bound(num,num+6,7,greater<int>())-num;  //返回数组中第一个小于被查数的值
	//cout<<pos3<<" "<<num[pos3]<<endl;
	//cout<<pos4<<" "<<num[pos4]<<endl;
	return 0;	
} 
