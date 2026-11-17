#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	srand(time(NULL));
	
	int numeroRandom = rand() % 100 + 1;
	
	int tentativas = 0;
	
	int palpite;
	
	do{
		printf("DIGITE UM NÚMERO DE 1 a 100");
		scanf("%d", &palpite);
		tentativas++;
		
		if (palpite < numeroRandom){
			printf("Digite um número maior\n");
		} else if (palpite > numeroRandom){
			printf("Digite um número menor\n");
		} else {
			printf("Você acertou!\nTentativas %d\n", tentativas);
		}
	}while(palpite != numeroRandom);
}

