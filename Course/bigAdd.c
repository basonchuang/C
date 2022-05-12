#include<stdio.h>
#include<string.h>
#define LEN 105

int Input(char n[])
{
	char s[LEN];
	int i, l;
	for(i=0; i<LEN; i++)
		n[i]=0;
	if(scanf("%s", s)<1) return -1;
	l=strlen(s);
	for(i=0; i<l; i++){
		n[i]=s[l-i-1]-'0';
	}
	return 0;
}

void Print(char n[])
{
	int i;
	for(i=LEN-1; i>0; i--)
   		if(n[i]!=0) break;
	for(; i>=0; i--)
		printf("%d", n[i]);
	printf("\n");
}

void Add(char a[], char b[], char c[])
{
	int i;
	for(i=0; i<LEN; i++)
		c[i]=a[i]+b[i];
	for(i=0; i<LEN-1; i++) {
		if(c[i]>=10) {
    	c[i+1]+=c[i]/10;
    	c[i]=c[i]%10;
		}
	}
}

int main()
{
	int g;
	char a[LEN], b[LEN], c[LEN];
	Input(a);
	Input(b);
	Add(a, b, c);
	Print(c);
	return 0;
}
