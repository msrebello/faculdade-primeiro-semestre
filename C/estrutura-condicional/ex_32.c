#include <stdio.h>

int main()
{

        double comissao, venda;

        scanf("%lf", &venda); // Lê o valor da venda

        if (venda < 20000.0)
                comissao = 400 + venda * 0.14;

        else if (venda < 40000.0)
                comissao = 500 + venda * 0.14;

        else if (venda < 60000.0)
                comissao = 550 + venda * 0.14;

        else if (venda < 80000.0)
                comissao = 600 + venda * 0.14;

        else if (venda < 100000.0)
                comissao = 650 + venda * 0.14;

        else
                comissao = 700 + venda * 0.16;

        printf("Comissao: %.2lf\n", comissao);

        return 0;
}
