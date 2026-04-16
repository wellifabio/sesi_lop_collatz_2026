#include<stdio.h>
void main(){
	int n, x, cont;
	printf("Digite um número inteiro positivo:\n");
	scanf("%d", &n);
	cont = 0;
	x = n;
	do{
		if(x % 2  == 0){
			cont++;
			x /= 2;
			printf("%d, ", x);
		}else{
			cont++;
			x = x * 3 + 1;
			printf("%d, ", x);
		}
	}while(x != 1);
	printf("\nChegou ao número 1 com %d passos\n", cont);
	getch();
}