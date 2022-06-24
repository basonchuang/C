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
    int T;
    int N;
    int M;
    int *C = (int*)malloc(sizeof(int)*1000);
    int len = 0;
    

    scanf("%d", &T);

    int ans[T];
    for(int i=0; i<T; i++){
        scanf("%d %d",&N, &M);

        input(C, &len);
        
        ans[i] = sol(N,M,C,len);   
    }
    for(int i=0; i<T; i++){
        printf("Case #%d: %d\n",i+1, ans[i]);
    }
    free(C);
    return 0;
}