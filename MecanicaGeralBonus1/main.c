#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    while (1){
     float anguloRadiano,seno,cosseno,anguloGrau,velInicial,alturaMax,alcance,alturaInicial;
     float g = 9.8;
     int option;// escolha menu
    system("cls");
    printf("Nome:Eduarda Linhares Mello e Milena Aparecida Buba\n");
    printf("Mecanica Geral - Bonus 1\n");
    printf("\n\n");
    printf("\n************************ LANCAMENTO ******************************\n");
    printf("*************************** DE **** PROJETIL **************************\n\n\n\n");
    printf("           Um canhao lanca um projetil com uma\n ");
    printf("       determinada velocidade , uma altura do solo\n");
    printf("       e uma inclinacao em relacao ao solo.\n\n");
    printf("           Para calcular a altura maxima que o projetil\n");
    printf("       atinge , assim como o alcance maximo do mesmo ,\n");
    printf("       digite [1] .\n\n");
    printf("               Para sair digite [0]. \n\n\n\n\n");

     scanf("%d", &option);// opÁ„o menu
     if(option!=1 && option!=0){
        option = 1;
     }
  if (option ==0){
    break;// sair
  }



else{// coleta do dados necess·rios
         system("cls");
    printf("\n************************ Dados **************************\n\n\n\n");
    printf("Forneca a velocidade inicial(m/s):  ");
    scanf("%f",&velInicial);
    printf("\n");
    while(velInicial<0){// verificaÁ„o de valores fora do previsto
            printf("Valor invalido! Forneca um valor positivo para a velocidade: ");
        scanf("%f", &velInicial);
        printf("\n");
             };

    printf("Digite um angulo em graus(∞): ");
    scanf("%f",&anguloGrau);
    printf("\n");
     while((anguloGrau<0) || (anguloGrau>90)){// verificaÁ„o de valores fora do previsto
            printf("Valor invalido! Forneca um valor entre 0 e 90 graus : ");
        scanf("%f",&anguloGrau);
        printf("\n");
             };
    anguloRadiano = (anguloGrau * M_PI)/180;// convers„o graus para radianos

    printf("Digite a altura inicial em metros: ");
    scanf("%f", &alturaInicial);
    printf("\n");
    while(alturaInicial<0){// verificaÁ„o de valores fora do previsto
       printf("Valor invalido! Forneca um valor positivo para a altura inicial : ");
        scanf("%f",&alturaInicial);
        printf("\n");
    };
     printf("\n\n");
    system("Pause");

    //Calculo da altura maxima
    seno = sin(anguloRadiano);
    alturaMax = (pow(velInicial, 2)*(pow(seno, 2)))/(2*g);
    alturaMax = alturaMax + alturaInicial;
system("cls");
 printf("\n************************ ALTURA ******************************\n");
    printf("**************************** MAXIMA **************************\n\n");
printf("      Com g = 9.8 m/s^2 , a altura maxima do projetil  \n");
printf("        em relacao ao solo e ... %f m . \n ",alturaMax);
printf("\n\n");

    //Calculando o tempo de voo
    seno = sin(anguloRadiano);

float a,b,c,t,t1,t2,delta;//bhaskara
  a= -g/2;
  b= velInicial*seno;
  c= alturaInicial;
  delta= sqrt(pow(b,2)-4*a*c);
  t1= (-b+delta)/(2*a);
  t2= (-b-delta)/(2*a);


  if(t1>=0)// descarte do tempo negativo
    t = t1;
  if (t2>=0)
     t = t2;
    //Calculo do alcance
    cosseno = cos(anguloRadiano);
    seno = sin(anguloRadiano);
   alcance = velInicial*cosseno*t;

    printf("\n************************ ALCANCE ******************************\n");
    printf("**************************** HORIZONTAL **************************\n\n");
printf("      Com g = 9.8 m/s^2 , o alcance horizontal do projetil  \n");
printf("         e ... %f m . \n ",alcance);
printf("\n\n");
system("Pause");
    }//fecha else
system("cls");
    }// fecha while
    return 0;
}
