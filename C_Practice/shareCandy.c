#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void input(int *a, int *len);
void print(int *a, int len);

void input(int *a, int *len){
    int cnt = 0;
    int n = 1;
    char ch;
    do{
        scanf("%d%c", a, &ch);
        a++;
        cnt++;
    }while((int)ch != 10);
    *len = cnt;
}

void print(int *a, int len){
    int j;
    for(j=0; j<len; j++,a++){
        printf("%d\n", *a);
    }
}

int sol(int N, int M, int* C, int Csize){
    int remain = 0;
    int i,j;
    for(i = 0; i < Csize; i++){
        remain += C[i];
    }
    remain %= M;

    return remain;
}
int main(){
    int T = 2;
    int N;
    int M;
    int *C = (int*)malloc(sizeof(int)*1000);
    int len = 0;
    int ans = 0;
    
    for(int i=0; i<T; i++){
        printf("N M: ");
        scanf("%d %d",&N, &M);

        input(C, &len);
        
        ans = sol(N,M,C,len);
        printf("Case #%d: %d\n",i+1, ans);
    }
    free(C);
    return 0;
}