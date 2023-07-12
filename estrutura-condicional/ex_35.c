#include <stdio.h>

main()
{

    double salario_atual, salario_final, reajuste, bonus;
    int tempo_serv;

    printf("Digite o salario atual: ");
    scanf("%lf", &salario_atual);
    printf("Tempo de servico: ");
    scanf("%d", &tempo_serv);

    if (salario_atual <= 500.0)
    {

        reajuste = 0.25;

        if (tempo_serv < 1)
            printf("Sem bonus\n");

        else if (tempo_serv <= 3)
        {

            bonus = 100.0;
        }
        else if (tempo_serv <= 6)
        {

            bonus = 200.0;
        }

        else if (tempo_serv <= 10)
        {

            bonus = 300.0;
        }

        else
        {

            bonus = 500.0;
        }
    }

    else if (salario_atual <= 1000.0)
    {

        reajuste = 0.20;

        if (tempo_serv < 1)
            printf("Sem bonus\n");

        else if (tempo_serv <= 3)
        {

            bonus = 100.0;
        }
        else if (tempo_serv <= 6)
        {

            bonus = 200.0;
        }

        else if (tempo_serv <= 10)
        {

            bonus = 300.0;
        }

        else
        {

            bonus = 500.0;
        }
    }

    else if (salario_atual <= 1500.0)
    {

        reajuste = 0.15;

        if (tempo_serv < 1)
            printf("Sem bonus\n");

        else if (tempo_serv <= 3)
        {

            bonus = 100.0;
        }
        else if (tempo_serv <= 6)
        {

            bonus = 200.0;
        }

        else if (tempo_serv <= 10)
        {

            bonus = 300.0;
        }

        else
        {

            bonus = 500.0;
        }
    }

    else if (salario_atual <= 2000.0)
    {

        reajuste = 0.10;

        if (tempo_serv < 1)
            printf("Sem bonus\n");

        else if (tempo_serv <= 3)
        {

            bonus = 100.0;
        }
        else if (tempo_serv <= 6)
        {

            bonus = 200.0;
        }

        else if (tempo_serv <= 10)
        {

            bonus = 300.0;
        }

        else
        {

            bonus = 500.0;
        }
    }

    else
    {

        if (tempo_serv < 1)
            printf("Sem direito de aumento\n");

        else if (tempo_serv <= 3)
        {

            bonus = 100.0;
        }
        else if (tempo_serv <= 6)
        {

            bonus = 200.0;
        }

        else if (tempo_serv <= 10)
        {

            bonus = 300.0;
        }

        else
        {

            bonus = 500.0;
        }
    }

    salario_final = salario_atual + salario_atual * reajuste + bonus;

    printf("Salario Final do Funcionario: %.2lf", salario_final);
}
