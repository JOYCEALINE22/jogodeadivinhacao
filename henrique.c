#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void) {
	
	int chave;
	int palpite;
	int tentativas = 1;
	
	srand(time(NULL));
	chave = (rand()%10);
	
	while ( 1 ) {	
		palpite = 1500;

		while ( 1 ) {
			if (palpite < 0 || palpite > 1000) {
				printf("Vamos achar o número chave que abre o cadeado!!! Digite um número entre 0 e 10: ");
				scanf ("%d", &palpite);
			}else
			  break;

		}
		if (palpite == chave) {
			printf ("Parabéns! Você acertou em %d tentativas!!! Tente bater seu record agora!\n", tentativas);
		 break;

		}else if (palpite < chave) {
			printf ("Digite um número MAIOR!!!\n");
		}else
			printf ("Digite um número MENOR!!!\n");

		tentativas = tentativas + 1;
}

return 0;

}
