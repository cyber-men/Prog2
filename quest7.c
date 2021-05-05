#include <stdio.h>

/*Faça uma função que recebe um	valor inteiro e	verifica se	o valor	é par. A	
função deve	retornar 1 se o	número for par e 0 se for ímpar. */

int num, result;

int check(int a);

int main(){
	printf("Digite um valor inteiro\n");
	scanf("%d" , &num);
	result= check(num);
	printf(" %d\n", result);

	return 0;
}int check(int a){
	if (a%2==0){
	
		return 1;
	}else{ 
		return 0;
	}

}