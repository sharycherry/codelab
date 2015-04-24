#include <stdio.h>
int max(int x,int y){
	return x>y?x:y;
}
int main(){
	freopen("data.txt","r",stdin);
	int i,j,m,n,mi[1001],vi[8192],dp[10][182];
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++){
		scanf("%d",&mi[i]);
	}
	for(i=1;i<=n;i++){
		scanf("%d",&vi[i]);
	}
	for(i=0;i<m;i++){
		dp[0][i]=0;
	}
	for(i=0;i<n;i++){
		dp[i][0]=0;
	}
	for(j=0;j<m;j++){
		for(i=1;i<=n;i++){
			if(mi[i]<=m){
			dp[i][j]=max(dp[i-1][j],dp[i-1][j-mi[i]]+vi[i]);
		}
		else{
			dp[i][j]=dp[i-1][j];
		}
		}
	}
	for(i=1;i<=n;i++)
		printf("%d\n",dp[i][16]);
}