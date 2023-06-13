#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

int perfeito() {
    int count = 0;
    int num = 2; // Começamos a busca pelo número 2

    printf("== ESSES SÃO OS 4 NUMEROS PERFEITOS ==\n"); // O programa não consegue fazer os cálculos do 10 primeiros numeros perfeitos, pois são muito grandes

    while (count < 4) {
        if (isPerfect(num)) {
            printf("%d\n", num);
            count++;
        }
        num++;
    }

    return 0;
}

void impares(){
    int i, p;
    printf("== ESSES SÃO OS 10 NUMEROS ÍMPARES ==\n");
        p = 1;

        for(i = 1; i <= 10; i++){
            p = p + 2;
            printf("%d\n", p);
        }
}



void pares(){
    int i, p;
    printf("== ESSES SÃO OS 10 NUMEROS PARES ==\n");
        
        for(i = 1; i <= 10; i++){

            p = i * 2;
            printf("%d\n", p);
        }
}

void primos(){
    int i, p, exp, exp_num;
    printf("== ESSES SÃO OS 10 NUMEROS PRIMOS ==\n");

    exp_num = 2;

    for(i = 1; i <= 10; i++){
        for(exp = 1; exp <= i; exp++){
            exp_num = exp_num * 2;
            
            if(exp == 1){
                exp_num = 2;
            }
        }
        p = exp_num - 1;
        printf("%d\n", p);
    }
}

void colorido(){
    printf("\033[1;34m");
    pares();
    printf("\033[1;32m");
    printf("\n\n");
    impares();
    printf("\033[1;31m");
    printf("\n\n");
    perfeito();
    printf("\033[1;0m");
}

void main(){
    setlocale(LC_ALL, "portuguese");
    int e;  // escolha
    /*
    1)NUMEROS PARES
    2)NUMEROS IMPARES
    3)NUMEROS PRIMOS
    4)NUMEROS PARES, ÍMPARES E PERFEOTPS(PARES AZUIS, ÍMPARES VERDE, PERFEITO VERMELHOKK)
    5)SAIR*/
    do{
    do{
        printf("== ESCOLHA UMA OPÇÃO ==\n1)NUMEROS PARES\n2)NÚMEROS ÍMPARES\n3)NÚMEROS PRIMOS\n4)NUMEROS PARES, ÍMPARES E PERFEITOS\n5)SAIR\n\n");
        scanf("%d", &e);
        system("clear");
        
    }
    while((e < 1) || (e > 5));

    switch(e){
        
        case 1:
        do{
        pares();
        printf("\nDeseja:\n5)Sair\n6)Voltar a tela inicial\n\n");
        scanf("%d", &e);

        if(e == 6){
            system("clear"); // limpa a tela para retornar ao menu principal
        }
        if(e == 5){
            system("clear");
            exit(0); // finaliza o programa
        }
        system("clear");


        } while((e < 5) || (e > 6));
        break;

        
        
        case 2:
        do{
        impares();
        printf("\nDeseja:\n5)Sair\n6)Voltar a tela inicial\n\n");
        scanf("%d", &e);

        if(e == 6){
            system("clear"); // limpa a tela para retornar ao menu principal
        }
        if(e == 5){
            system("clear");
            exit(0); // finaliza o programa
        }
        system("clear");


        } while((e < 5) || (e > 6));
        break;



        case 3:
        do{
        primos();
        printf("\nDeseja:\n5)Sair\n6)Voltar a tela inicial\n\n");
        scanf("%d", &e);

        if(e == 6){
            system("clear"); // limpa a tela para retornar ao menu principal
        }
        if(e == 5){
            exit(0); // finaliza o programa
            system("clear");
        }
        system("clear");


        } while((e < 5) || (e > 6));
        break;




        case 4:
        do{
        colorido();
        printf("\nDeseja:\n5)Sair\n6)Voltar a tela inicial\n\n");
        scanf("%d", &e);

        if(e == 6){
            system("clear"); // limpa a tela para retornar ao menu principal
            printf("\033[1;0m ");
        }
        if(e == 5){
            system("clear");
            exit(0); // finaliza o programa
        }
        system("clear");


        } while((e < 5) || (e > 6));
        break;


        case 5:
        exit(0);
        break;

    }
    }
    while((e != 5) || (e != 6));

}