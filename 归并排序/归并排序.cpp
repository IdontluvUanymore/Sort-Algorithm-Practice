#include<bits/stdc++.h>
using namespace std;
//初始化待排序的数组
int a[100005]={0};
//辅助数组，存放两个子序列合并的结果
int temp[100005]={0};
//合并函数
void merge(int ls,int le,int rs,int re){
	//标记左序列的第一个未排序的元素
	int flag = ls;
	//辅助数组的下标
	int x=ls;
	//合并数组
	while(ls<=le && rs<=re){
		//如果左序列剩余第一个元素更小
		if(a[ls]<a[rs]){
			temp[x++]=a[ls++];
		}//否则，右序列剩余第一个元素更小
		else{
			temp[x++]=a[rs++];
		}
	}
	//如果右序列先排序完，合并左序列剩余元素
	while(ls<=le){
		temp[x++]=a[ls++];
	}
	//如果左序列先排序完，合并右序列剩余元素
	while(rs<=re){
		temp[x++]=a[rs++];
	}
	//将辅助数组中的元素复制到原来的数组
	for(int i=flag;i<=re;i++){
		a[i]=temp[i];
	}
}

// 拆分函数
void merge_sort(int l,int r){
    // 如果只有一个元素，就不需要继续划分
	if(l<r){
        // 找中间点
        int mid=(l+r)/2;
        // 递归划分左序列
		merge_sort(l,mid);
        // 递归划分左序列
		merge_sort(mid+1,r);
		// 合并已经排序的部分
		merge(l,mid,mid+1,r);
	}
}
int main(){
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
    merge_sort(0,n-1); // 调用函数
    for(int i=0; i<n; i++){ // 输出排序后的数组
		cout << a[i] <<" ";
	}
	return 0;
}
