#include <stdio.h>

int menu () {
	
	int op;
	system ("cls");
	printf ("[1] Dados do Cliente\n");
	printf ("[2] Saldo\n");
	printf ("[3] Cheque Especial\n");
	printf ("[4] Saque\n");
	printf ("[5] Deposito\n");
	printf ("[6] Aplicacao Financeira\n");
	printf ("[7] Aquisicao Cartao de Credito\n");
	printf ("[8] Pagamento do Cartao de Credito\n");
	printf ("[9] Fim do Programa\n");
	printf ("Escolha a opcao: ");
	scanf ("%d", &op);
	
	return op;
}

int main () {
	double saldo = 0;
	int op;
	double cheque = 0;
	int  cartao = 0, conta = 0;
	
	while (1) {
		
		int numConta;
		char nome[10];
		
		op = menu ();
		
		if (op == 1 ) {						
			
			printf ("Digite o numero da conta: ");
			scanf ("%d", &numConta);
			printf ("Digite o nome do cliente: ");
			scanf ("%s", &nome);
            conta = 1;
		}
		
		else if (op == 2) {
			
			
			printf ("-Saldo Cliente: R$ %2.lf\n", saldo);
			printf ("-Limite de Cheque Especial: R$ %2.lf\n", cheque);
			printf ("-Saldo para Saque: R$ %.2lf\n", saldo + cheque);
			
			system ("pause");
		
		}
		else if (op == 3) {
		 	cheque = 800;
			printf ("-Limite de Cheque Especial: R$ %2.lf\n", cheque);
			
			system ("pause");	
		}
		else if (op == 4) {
			
			double saque;
			
			printf ("Valor do saque: ");
			scanf ("%lf", &saque);
			
			if (saque > saldo + cheque) printf ("Saldo insuficiente!");
			
			else 
			 saldo = saldo - saque;
		}
		else if (op == 5) {
			
			double deposito;
			
			printf ("Valor do deposito: ");
			scanf ("%lf", &deposito);
			
			saldo = saldo + deposito;
		}							
		else if (op == 6) {
			
			double valor;
			
			printf ("Valor da aplicacao: ");
			scanf ("%lf", &valor);
			
			if (saldo < valor) {
			printf ("Saldo insuficiente!");
			system ("pause");
		}
			else saldo = saldo + valor*1.05;

		}								
		else if (op == 7) {
			
			if (cartao == 1 && conta !=0) {printf ("Cliente ja possui cartao!\n");
            system ("pause");
            }	
			else if (conta == 0) {
			 printf ("Cliente precisa cadastrar uma conta!\n");
			 system ("pause");
		}	
			else {
		
			printf ("%s conta %d tem direito a um cartao de credito.\n", nome, numConta);
			system ("pause");
			cartao = 1;
		}
		printf ("cartao", cartao);
	}
		else if (op == 8) {
			
			if (cartao == 0) {
			
			printf ("Cliente precisa cadastrar um cartao primeiro!\n");
			system ("pause");
		}
	
			else {
			double pagamento;
			printf ("Valor a pagar: R$ ");
			scanf ("%lf", &pagamento);
			
			saldo = pagamento - saldo;
			
			if (pagamento > saldo) {
				
				printf ("Pendencia: R$ %.2lf", saldo);
				system ("pause");
				
				
			}
			}
		
		}
		else if (op == 9) {
		
			break;
		}
			

		}
		
		return 0;					
}

