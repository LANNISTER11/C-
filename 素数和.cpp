# include<stdio.h>
int main(){
	int x=2;
    int cnt=0;
	int m,n;
	scanf("%d%d",&m,&n);
	int sum=0;
	while(cnt<n){
		int i;
		int prime=1;//������
		for(int i=2;i<x;i++){
			if(x%i==0){
				prime=0;//�������� 
				break;
			}
			else{
				prime=1;//������ 
				
			} 
		} 
		if(prime==1){
			
			//printf("%d ",x);
			cnt++;
			if(cnt>=m&&cnt<=n){
				
			    	
				sum=sum+x;
			}
		}
	
		x++;
	} 
	printf("%d",sum);
	return 0;
}
