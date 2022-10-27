#include <stdio.h>
//O que o algoritmo deve entregar? - O código deve entregar um programa que lê os dados sobre uma loja de esportes que o usuário digitar e entregá-los na tela.

struct esportes{

    int escolha;
    char nome_loja[30] = "Imperio_SaoPaulino";
    char endereco[30] = "rua_coronel_tavares";
    float faturamento = 753.54;
    
};

int main(){
    
    //trazendo o struct pra função principal
    
    struct esportes loja;
    
    //entrada
    printf("Digite 0 para saber a matrix de nossas lojas e 1 para nossas filiais: ");
    scanf("%d", &loja.escolha);
    
    
    //processando os dados a partir da escolha do usuário "0 ou 1"
    if(loja.escolha == 0){
        printf("\nA matrix da loja fica no centro");
        printf("\nConheca nossas lojas %s!", loja.nome_loja);
        printf("\nEstamos localizados na %s", loja.endereco);
        printf("\nO faturamento da loja eh de:R$%.2f", loja.faturamento);
        }
        
    else if(loja.escolha == 1){
        printf("\nAs filias da loja ficam em mangabeira e tambau");
        printf("\nConheca nossas lojas %s!", loja.nome_loja);
        printf("\nEstamos localizados na %s", loja.endereco);
        printf("\nO faturamento da loja eh de:R$%.2f ", loja.faturamento);
        }
        
    else{
        printf("\nDigito invalido");
    }
    
    
    return(0);

}


    