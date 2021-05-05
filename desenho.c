#include <stdio.h>
#include <stdlib.h>

// Declarando a constante TAMANHO e atribuindo valor 18.
#define TAMANHO 18

int main(void) {
    
    
    
    char elemento[10];
    int recuo = 0;
    
    // Atribuindo um título a janela.
    system("title Desenho"); // Requer o uso da biblioteca "stdlib.h".
    
    printf("\n\t\tDesenhando um X na tela.\n\n");
    
    printf("\tDigite um nome ou numero: ");
    scanf("%s", &elemento);
    
    printf("\n\n\t");
    
    
    /*
    Este bloco de comando realiza a parte operacional do programa, formar um X
    com a entrada do usuário (armazenada na variável elemento). 
    Para formar o desenho, a variável linha e coluna irá variar de 1 até TAMANHO
    (uma constante). Quando linha e coluna tiverem o mesmo valor ou coluna for
    igual a diferença de TAMANHO e recuo, a variável elemento será exibida na 
    tela. Caso contrário, será dado espaços em branco.
    */
    for (int linha = 1; linha <= TAMANHO; linha++) {
        
        for (int coluna = 1; coluna <= TAMANHO; coluna++) {
            
            if (coluna == linha || (coluna == TAMANHO - recuo))
                printf("%s", elemento);
            else
                printf(" ");
            
            if (coluna == TAMANHO) {
                recuo++;
                printf("\n\t");
            }
        }
    }
    
    //getch();
    return 0;
}
