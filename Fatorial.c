#include<stdio.h>

int main(){
	int fat, i,numero;
	printf("Digite um numero inteiro para o Calculo do Fatorial: ");
	scanf("%d", &numero);

	fat = 1;
		for(i=1; i<=numero; i++){
		fat = fat * i;	
	}
	printf("%d\n", fat);
	scanf("%d", fat);
	
	system("pause");
	return 0;
	
}
