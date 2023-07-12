#include <stdio.h>

main()
{

    int x, y, resp1, resp2, resp3, resp4, resp5;

    printf("Dados os numeros: 1, 17, 25, 32, 49, 54, 63, 77, 81, 92, responda as questoes:\n\n");

    printf("[Questao 1]: 1 + 17 = ");
    scanf("%d", &resp1);
    printf("[Questao 2]: 25 + 32 = ");
    scanf("%d", &resp2);
    printf("[Questao 3]: 49 + 54 = ");
    scanf("%d", &resp3);
    printf("[Questao 4]: 63 + 77 = ");
    scanf("%d", &resp4);
    printf("[Questao 5]: 81 + 92 = ");
    scanf("%d", &resp5);

    system("cls");

    if (resp1 == 18)
        printf("[Questao 1] CORRETA\n");

    else
        printf("[Questao 1] ERRADA\n");

    if (resp2 == 57)
        printf("[Questao 2] CORRETA\n");

    else
        printf("[Questao 2] ERRADA\n");

    if (resp3 == 103)
        printf("[Questao 3] CORRETA\n");

    else
        printf("[Questao 3] ERRADA\n");

    if (resp4 == 140)
        printf("[Questao 4] CORRETA\n");

    else
        printf("[Questao 4] ERRADA\n");

    if (resp5 == 173)
        printf("[Questao 5] CORRETA\n");

    else
        printf("[Questao 5] ERRADA\n");
}
