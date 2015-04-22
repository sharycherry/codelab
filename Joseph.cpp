#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	int c,i,m,k,t,flag;
	while(scanf("%d",&k)==1&&k){
		flag=1;
		m=0;
		while(flag){
			c=0;//б╘ак 
			m++;
			for(i=0;i<k;i++){
			t=(m-c)%(2*k-i);
			if(t>k) c=2*k-t-i;//c=k-i-1;//c=2*k-t;
			else if(t==0) c=0;
			else {
				break;
			}
		}
		if(i==k) flag=0;  //success
	}
		if(flag==0) printf("%d\n",m);
	}
}
