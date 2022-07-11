#include <stdio.h>
#include <stdlib.h>

int organiza(int m[],char l[],int n)
{
    int x = 0;

          for(int i=1;i<=n;i++){
            for(int j=2;j<=n;j++){
                if(m[i] == m[j] && l[i] != l[j]){
                  if(l[i]!='V' && l[j]!= 'V'){
                    l[i] = 'V';
                    l[j] = 'V';
                    x+=1;
                  }      
                }
            }
          }
            printf("%d\n",x);
}

int main() {
    int n;

    int m[10000];
    char l[10000];

    while(scanf("%d",&n)!=EOF){
    for(int i=1; i<=n; i++){
        scanf("%d %c",&m[i],&l[i]);
    }
    organiza(m,l,n);
    }
}