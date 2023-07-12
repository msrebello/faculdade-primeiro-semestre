#include <stdio.h>
#include <math.h>

main()
{

        int x;
        float log;

        scanf("%d", &x);

        if (x <= 0)
                printf("Numero invalido");

        else
        {
                log = log10(x);

                printf("Log = %.2f", log);
        }
}