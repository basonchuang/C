#include <stdio.h>
#include <stdlib.h>

int main(){
	int num,size,i,j;
	int **a;
	
	printf("How many arrays you want to enter: ");
	scanf("%d",&num);

	printf("How many numbers in one array: ");
	scanf("%d",&size);

	a = (int**)malloc(num*sizeof(int*));
	for(i=0;i<num;i++)
		*(a+i) = (int*)malloc(size*sizeof(int));

	for(i=0;i<num;i++)
		for(j=0;j<size;j++)
			scanf("%d",*(a+i)+j);
			
	for(i=0;i<num;i++)
		for(j=0;j<size;j++)
			printf("[%d][%d]: %d\n",i,j,*(*(a+i))+j);
	
}
