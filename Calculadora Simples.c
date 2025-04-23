//CalculadoraSimples.C
#include <stdio.h>
int main (void){


	float n1, n2, result;
	char operacao;
	
		printf ("Calculadora simpes\n\n");
		printf ("\nOperacoes disponiveis: \n");
        printf("'+' : soma\n");
    	printf("'-' : subtracao\n");
        printf("'*' : multiplicao\n");
        printf("'/' : divisao\n");
        
        printf ("Se o n�mero tiver casas decimais, utilize ponto ao inves de virgula, pois a virgula n�o � reconhecida.\n");
        
        printf ("\nDigite o 1 numero: ");
        scanf ("%f", &n1);
        
        printf ("\nDigite o 2 numero: ");
        scanf ("%f", &n2);
        
        printf ("\nDigite a operacao: ");
        scanf (" %c", &operacao);
        
        switch (operacao){
        	case '+' :
        		printf ("\nO resultado e: %.2f\n\n", n1 + n2);
        		break;
        		
        	case '-' :
        		printf ("\nO resultado e: %.2f\n\n", n1 - n2);
        		break;
        		
        	case '*' :
        		printf ("\nO resultado e: %.2f\n\n", n1 * n2);
        		break;
        
        	case '/' :
        		if (n2 != 0)
        		printf ("\nO resultado e: %.2f\n\n", n1 / n2);
        		else 
        		{
				printf("\nErro: divis�o por zero");}
				break;
        		
         default:
         printf("\nOperador inv�lido");
         return 1;
        }
		
	return 0;
}
