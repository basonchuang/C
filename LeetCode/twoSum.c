#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
	*returnSize = 2;
	int *returna = (int*)malloc(2*(sizeof(int)));
	for(int i=0; i<numsSize; i++){
		for(int j=i+1; j<numsSize; j++){
			if(nums[i]+nums[j]==target){
				returna[0]=i;
				returna[1]=j;
			}
		}
	}
	return returna;
}

int main(void){
	char input[50] = "Hello! We are learning about strtok";
	//char input[100];
	char * token = strtok(input," ");
	scanf("%[^\n]s", input);
	//printf("your input: %s",input);
	while(token!=NULL){
		printf("%s\n",token);
		token = strtok(NULL, " ");
	}
	//printf("%d",&nums[0]);
	
	return 0;
}
