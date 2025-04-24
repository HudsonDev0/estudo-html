// Online C compiler to run C program online
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

struct userdata{
    int i, idade, sexo;
    float altura;
};
 
int main(){
 
    struct userdata dado;
    
    printf("Ola, companheiro! Qual a sua idade?\n");
    scanf("%d", &dado.idade);

    printf("Beleza... e sua altura? Exemplo: 1.80\n");
    scanf("%f", &dado.altura);

    printf("Digite 1 para MASCULINO e 2 para FEMININO.\n");
    scanf("%d", &dado.sexo);
    printf("\n");
    
    if(dado.idade <= 18 && dado.altura > 1.63 && dado.sexo == 1){
        printf("Escuta essa musica...\n");
        printf("------------------------------------------------\n");
        system("Start www.youtube.com/watch?v=njLQnvU8vzk");
      //  printf("https://www.youtube.com/watch?v=njLQnvU8vzk");
    }
    if(dado.idade > 21 && dado.idade < 23 && dado.altura > 1.62 && dado.altura < 1.64 && dado.sexo == 1){
        printf("Ah.. e voce, desenvolvedor...\n");
        printf("------------------------------------------------\n");
        system("Start www.youtube.com/watch?v=EkOwPDa-DbM");
        //printf("toninho horta");
    }
    if(dado.idade > 18 && dado.altura >= 1.80 && dado.sexo == 1){
        printf("Escuta essa musica...\n");
        printf("------------------------------------------------\n");
        system("Start www.youtube.com/watch?v=m5vw4ajnWGA");
        //printf("rap");
    }
    if(dado.idade < 18 && dado.altura < 1.63 && dado.sexo == 1){
        printf("Escuta essa musica...\n");
        printf("------------------------------------------------\n");
        system("Start www.youtube.com/watch?v=XqZsoesa55w");
}

    if(dado.idade <= 18 && dado.altura >= 1.60 && dado.sexo == 2){
        printf("Escuta essa musica...\n");
        printf("------------------------------------------------\n");
        system("Start www.youtube.com/watch?v=nfWlot6h_JM");
    }
    if(dado.idade > 21 && dado.idade < 23 && dado.altura > 1.64 && dado.altura <= 1.65 && dado.sexo == 2){
        printf("so podia ser a mickaelle mesmo...\n");
        system("Start www.youtube.com/watch?v=mdOHJFmfs2g");
//        printf("little death");
    }
    
    if(dado.idade > 18 && dado.altura > 1.65 && dado.sexo == 2){
        printf("Escuta essa musica..\n");
        printf("-----------------------------------------------\n");
        system("Start www.youtube.com/watch?v=uelHwf8o7_U");
        //printf("algum pop melhorado");
    }
    //printf("\n\n");
    //printf("dados : idade; %d altura; %.2f sexo; %d", dado.idade, dado.altura, dado.sexo);

}