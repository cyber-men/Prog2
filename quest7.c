#include <stdio.h>

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