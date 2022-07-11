#include <stdio.h>

bool compara( int inicial, int atual , int m)
{
    for( int i = 0; i < m; i++ )
    {
        if( inicial[i] != atual[i] )
        {
            return true;
        }
    }
    return false;
}

bool off(int  atual, int m)
{
    for(int i = 0; i < m; i++ )
    {
        if(atual[i] != -1)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n,m,l,x,k,y,cont;
    scanf("%d, %d", &n, &m);

    int lampadas[m],inicial[m];
    int interruptores[n];

    for(int i = 0; i <m;i++)
    {
        scanf("%d", &x);
        for(int j=0;j<k;j++)
        {
            scanf("%d", &y);
        }
    }
}