#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	int i,n,num,max,maxsenior,count;
	scanf("%d",&n);
	while(n--){
		max=maxsenior=-150000; // 
		scanf("%d",&count);
		while(count--){ //
			scanf("%d",&num);
			if(maxsenior-num>max) max=maxsenior-num;
			if(num>maxsenior) maxsenior=num; // 
		}
		printf("%d\n",max);
	}
}
