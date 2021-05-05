#include <stdio.h>
#include <stdlib.h>

/*Faça uma função que recebe um	valor inteiro e verifica se	o valor é	
positivo, negativo ou zero. A função deve retornar 1 para valores	
positivos, -1 para negativos e 0 para o	valor 0.*/	
 
 int num;
 int result;

int numero(int a);

 int main(){
 	
 	printf("Digite um número inteiro\n");
 	scanf("%d", &num);
 	result= numero(num);
 	printf("Valor %d\n", result);


 	return 0;
	
 }int numero(int a){
 	if (num>0){

 		return 1;
 	}if (num<0)
 	{
 		return -1;
 	}if (num==0)
 	{
 		return 0;
 	}
 	
 	return 0;
 }