#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	int c[101],num,i,j,n;
	scanf("%d",&n);
	while(n){
	memset(c,0,sizeof(c));
	for(i=0;i<n;i++){
		scanf("%d",&num);
		c[num]+=1;
	}
	
	for(i=1;i<101;i++){
		c[i]+=c[i-1];
	}
	
	for(i=1;i<101;i++){
		for(j=c[i-1];j<c[i];j++)
		printf("%d ",i);
	}
	printf("\n");
	scanf("%d",&n);
	}
	
}
