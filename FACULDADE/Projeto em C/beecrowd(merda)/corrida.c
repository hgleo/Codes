#include <stdio.h>

int numPlacas(int v, int n){
    int aux;
    char aux2;
    
    for(int i=1; i<10;i++){
        //printf("%d",((v * n * i)/10)+1);
        if((v*n*i)%10){
            aux = ((v*n*i)/10)+1;
        }else{
            aux=(v*n*i)/10;
        }

        if(i<9){
            aux2 = ' ';
        }else{
            aux2 = '\n';
        }
        printf("%d%c",aux,aux2);
    }
}

int main() {
    int n,v;
    scanf("%d %d",&v,&n);
    numPlacas(v,n);
}
