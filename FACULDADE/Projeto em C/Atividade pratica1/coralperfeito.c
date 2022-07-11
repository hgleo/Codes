#include <stdio.h>

int main()
{
    int N;

    while (scanf("%d", &N) != EOF) {
        int i, nota[10000], som = 0;

        for (i = 0; i < N; ++i) {
            scanf("%d", &nota[i]);
            som += nota[i];
        }

        if (som % N)
            puts("-1");
        else {
            int avg = som / N;
            int somdif = 0;

            for (i = 0; i < N; ++i)
                if (nota[i] > avg)
                    somdif += nota[i] - avg;

            printf("%d\n", somdif + 1);
        }
    }

    return 0;
}