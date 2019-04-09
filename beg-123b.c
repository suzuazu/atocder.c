#include <stdio.h>

int main(void)
{
    int A[6],i,j,k=1,l,sum=0,num,amari=9;

    for(i=1;i<6;i++){
        scanf("%d",&A[i]);
    }
    
    for(j=1;j<5;j++){
        if(A[j]%10<amari){
            amari=A[j];
            num=j;
        }
    }
    for(l=1;l<6;l++){
        if((l!=num)&&(A[l]%10!=0)){
            sum+=(A[l]/10)*10+10;
        }else{
            sum+=A[l];
        }
    }
    printf("ans=%d\n",sum);

    return 0;
}