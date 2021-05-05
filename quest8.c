#include <stdio.h>
#include <stdlib.h>
 
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