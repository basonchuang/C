#include <stdio.h>
#include <string.h>
#define LEN 105

void Print(char n[]){
	int i;
	for(i=LEN;i>=0;i--){
		if(n[i]!=0)
			break;
	}
	for(;i>=0;i--)
		printf("%d",n[i]);
	printf("\n");
}
void Add(char a[],char b[],char c[]){
	int i;
	for(i=0;i<=LEN;i++)
		c[i] = a[i]+b[i];
	for(i=0;i<=LEN;i++){
		if(c[i]>=10){
			c[i+1] = c[i+1]+(c[i]/10);
			c[i]=c[i]%10;
		}
	}
	Print(c);
	for(i=0;i<LEN;i++){
		a[i]=b[i];
		b[i]=c[i];
		c[i]=0;
	}
}
int main(){
	int g,i;
	char a[LEN],b[LEN],c[LEN];
	while(1){
		printf("Please input the number of generation(1-500): ");
		scanf("%d",&g);

		if(g<1 || g>500)
			continue;
		else{
			a[0]=1;
			b[0]=1;
			for(i=1;i<=LEN;i++){
				a[i]=0;
				b[i]=0;
			}
			if(g==1||g==2)
				for(i=1;i<=g;i++)
					printf("The %003dth numbers: 1\n",i);
			else{
				printf("The 001th numbers: 1\n");
				printf("The 002th numbers: 1\n");
				for(i=3;i<=g;i++){
					printf("The %003dth numbers: ",i);
					Add(a,b,c);
				}
			}
			break;
		}
	}
}
