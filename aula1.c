#include<stdio.h>

int main(){
    //Variaveis 
    int idade = 20;
    float valorDoPgto = 12.42;
    double velParticula = 2.346634645;   
    char tipoHabMotor = 'A'; 

    //Instrucoes
    printf("Informe a idade: ");
    scanf("%d", &idade);
    printf("Informe o Valor do Pagamento: ");
    scanf("%d", &valorDoPgto);
    printf("Informe a Velocidade da Particula: ");
    scanf("%d", &velParticula);
    printf("Informe o tipo de abilitacao: ");
    scanf("%d", &tipoHabMotor);

    printf("Dados Informados: %d, %f, %lf, %c"idade, valorDoPgto, velParticula, tipoHabMotor);

    return 0;
}