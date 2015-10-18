#include <stdio.h>

int main()
{
    float peso; //peso
    float altura; //altura
    float imc; //peso/altura^2
    int exitFlag = -1; //flag de saida do programa

    while ( exitFlag != 0 ) {
    	// atribuir valores peso e altura
	printf("\nEntre com o seu peso:");
	scanf("%f", &peso);
	    
    	printf("\nEntre com a sua altura:");
    	scanf("%f", &altura);
    
    	// calcular imc
    	imc = peso / ( altura * altura );
    
    	// imprimir o resultado
    
    	if (imc < 19) {
        	printf("O seu IMC é %.2f e você esta abaixo do peso\n", imc);
    	}
        
    	if ( ( imc >= 20 ) && ( imc < 26 ) ) {
        	printf("O seu IMC é %.2f e sua situação está normal\n", imc);
    	}
        
    	if ( ( imc > 25 ) && ( imc <= 30) ) {
        	printf ("O seu IMC é %.2f e você está acima do peso\n", imc);
    	}
        
    	if ( imc >= 30 ) {
        	printf("O seu IMC é %.2f e você esta com Obesidade Mrbida\n", imc);
    	}

	printf("\nCaso deseje sair, pressione 0, ou qualquer numero para continuar");
	scanf("%i", &exitFlag);
    }
           
    return exitFlag;
}
