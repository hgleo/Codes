#include <stdio.h>
#include <stdlib.h>

int organiza(int pe[],char lado[],int pares){

    int quant_pares = 0;

        int i,j;
          for(i=1;i<=pares;i++){
            for(j=2;j<=pares;j++){
                if(pe[i] == pe[j] && lado[i] != lado[j]){
                  if(lado[i]!='V' && lado[j]!= 'V'){ // LADO = V QUER DIZER QUE JÁ FOI VERIFICADO 
                    lado[i] = 'V';
                    lado[j] = 'V';
                    quant_pares+=1;
                  }      
                }
            }
          }
            printf("%d\n",quant_pares);
}
        

int main() {
    int pares;

    int pe[10000];
    char lado[10000];

    while(scanf("%d",&pares)!=EOF){
    for(int i=1; i<=pares; i++){
        scanf("%d %c",&pe[i],&lado[i]);
    }
    organiza(pe,lado,pares);
    }
}