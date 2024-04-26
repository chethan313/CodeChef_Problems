#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        int a,b,c;
        scanf("%d%d",&a,&b);
        c=a+b;
        if(c<=6){
            printf("No\n");
        }else{
            printf("YES\n");
        }
    }
}
