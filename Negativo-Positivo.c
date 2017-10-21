#include <stdio.h>
int main(){
	int numero;
	printf("Entre com um numero");
	scanf("%d", &numero);
	if (numero<0) {
		printf("negativo \n");
	}else{
		printf("positivo \n");
	}
	system("pause");
	return 0;
}
