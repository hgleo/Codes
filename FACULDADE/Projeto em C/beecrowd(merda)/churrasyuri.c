#include <string.h>
#include <stdio.h>
#include <stdlib.h>
typedef struct carnes
{
    int N;
    char Nl[100];
}carnes;

int compara(struct carnes carnes[],struct carnes troca[],int pecas){

    for(int j=1;j<=pecas;j++){
        for(int i=1;i<=pecas;i++){
            if(carnes[j].N<carnes[i].N){
                troca[j] = carnes[j];
                carnes[j]=carnes[i];
                carnes[i]=troca[j];
            }
        }
    }

    for(int i=1; i<=pecas; i++){
        if(i==pecas){
            printf("%s\n",carnes[i].Nl);
        }else{
            printf("%s ",carnes[i].Nl);   
        }
    }
}

int main() {

    struct carnes carnes[50];
    struct carnes troca[50];
    int pecas;

    while(scanf("%d",&pecas)!=EOF){
    
        for(int i=1;i<=pecas;i++){
            scanf("%s %d",carnes[i].Nl,&carnes[i].N);
        }

    compara(carnes,troca,pecas);
}
}