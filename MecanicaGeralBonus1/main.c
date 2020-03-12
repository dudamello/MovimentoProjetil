//
//  main.c
//  MecanicaGeralBonus1
//
//  Created by Eduarda Mello on 12/03/20.
//  Copyright © 2020 Eduarda Mello. All rights reserved.
//

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    printf("Nome:Eduarda Linhares Mello e Milena Aparecida Buba\n");
    printf("Mecânica Geral - Bônus 1\n");
    printf("Lancamento de Projetil\n");
    printf("\n\n");
    
    float anguloRadiano,seno,cosseno,anguloGrau,velInicial,alturaMax,tempo,alcance,alturaInicial;
    float g = 9.8;
    
    printf("Forneca a velocidade inicial(m/s):\n");
    scanf("%f",&velInicial);
    if(velInicial<0){
            printf("Valor inválido! Forneça um valor positivo para a velocidade: \n");
        scanf("%f", &velInicial);
             
             }
    
    printf("Digite um angulo em graus(°):\n");
    scanf("%f",&anguloGrau);
    anguloRadiano = (anguloGrau * M_PI)/180;
    
    printf("Digite a altura inicial em metros:\n");
    scanf("%f", &alturaInicial);
    
    
    //Calculo da altura maxima
    seno = sin(anguloRadiano);
    alturaMax = (pow(velInicial, 2)*(pow(seno, 2)))/(2*g);
    alturaMax = alturaMax + alturaInicial;
    printf("Altura maxima: %f\n", alturaMax);
    
    //Calculando o tempo de voo
    seno = sin(anguloRadiano);
    tempo = (2*velInicial*seno)/g;
    
    
    //Calculo do alcance
    cosseno = cos(anguloRadiano);
    seno = sin(anguloRadiano);
    alcance = (2*pow(velInicial, 2)*(cosseno*seno)/g);
    printf("Alcance Horizontal: %f\n", alcance);
    
    
 
    return 0;
}
