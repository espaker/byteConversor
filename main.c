#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char **argv)
{       int men1=0, men2=0, fim, cont1=1, cont2=1;
        float valor, resultado;
       
        while(cont1==1)
        {
                printf("Digite a unidade que deseja coverter:\n\n1-Bytes\n2-KiloBytes\n3-MegaBytes\n4-GigaBytes\n5-TeraBytes  : ");
                scanf("%d",&men1);
                if((men1<=5)&&(men1>=1))
                {
                        system("clear");
                        cont1--;
                       
                        switch (men1)
                        {      
                                case 1:
                                printf("digite quantos Bytes deseja converter: ");
                                scanf("%f",&valor);
                                break;
                               
                                case 2:
                                printf("digite quantos KiloBytes deseja converter: ");
                                scanf("%f",&valor);
                                break;
                               
                                case 3:
                                printf("digite quantos MegaBytes deseja converter: ");
                                scanf("%f",&valor);
                                break;
                               
                                case 4:
                                printf("digite quantos GigaBytes deseja converter: ");
                                scanf("%f",&valor);
                                break;
                               
                                case 5:
                                printf("digite quantos TeraBytes deseja converter: ");
                                scanf("%f",&valor);
                                break;
                               
                                default:
                                break;
                        }
                       
                       
                }
                system("clear");
               
        }
       
        if(valor<0)
                {
                        printf("O valor digitado é invalido");
                }
                else
                {              
                        while(cont2==1)
                        {
                                printf("Digite a unidade para qual deseja coverter:\n\n1-Bytes\n2-KiloBytes\n3-MegaBytes\n4-GigaBytes\n5-TeraBytes  : ");
                                scanf("%d",&men2);
                                if((men2<=5)&&(men2>=1))
                                {
                                        cont2--;
                                }
                                system("clear");
               
                        }
       
                fim=men1+men2;
       
                switch(fim)
                {
                        case 2:
                        printf("Não é necessario conversão");
                        break;
               
                        case 3:
                        if(men1<men2)
                        {
                                resultado=valor/1024;
                                printf("%.2fKB",resultado);
                        }
                        if(men1>men2)
                        {
                                resultado=valor*1024;
                                printf("%.2fB",resultado);
                        }
                        break;
                       
                        case 4:
                        if(men1==men2)
                        {
                                printf("Não é necessario conversão");
                        }
                        else
                        {
                                if(men1<men2)
                                {
                                        resultado=valor/1024/1024;
                                        printf("%.2fMB",resultado);
                                }
                                if(men1>men2)
                                {
                                        resultado=valor*1024*1024;
                                        printf("%.2fB",resultado);
                                }
                        }
                        break;
                       
                        case 5:
                        if(men1<men2)
                        {
                                if(men1==1)
                                {
                                        resultado=valor/1024/1024/1024;
                                        printf("%.2fGB",resultado);
                                }
                                if(men1==2)
                                {
                                        resultado=valor/1024;
                                        printf("%.2fMB",resultado);
                                }
                        }
                        if(men1>men2)
                        {
                                if(men1==4)
                                {
                                        resultado=valor*1024*1024*1024;
                                        printf("%.2fB",resultado);
                                }
                                if(men1==3)
                                {
                                        resultado=valor*1024;
                                        printf("%.2fKB",resultado);
                                }
                        }
                        break;
                       
                        case 6:
                        if(men1==men2)
                        {
                                printf("Não é necessario conversão");
                        }
                        else
                        {
                                if(men1<men2)
                                {
                                        if(men1==1)
                                        {
                                                resultado=valor/1024/1024/1024/1024;
                                                printf("%.2fTB",resultado);
                                        }
                                        if(men1==2)
                                        {
                                                resultado=valor/1024/1024;
                                                printf("%.2fGB",resultado);
                                        }
                                }
                                if(men1>men2)
                                {
                                        if(men2==1)
                                        {
                                                resultado=valor*1024*1024*1024*1024;
                                                printf("%.2fB",resultado);
                                        }
                                        if(men2==2)
                                        {
                                                resultado=valor*1024*1024;
                                                printf("%.2fKB",resultado);
                                        }
                                }
                        }
                        break;
                       
                        case 7:
                        if(men1<men2)
                        {
                                if(men1==2)
                                {
                                        resultado=valor/1024/1024/1024;
                                        printf("%.2fTB",resultado);
                                }
                                if(men1==3)
                                {
                                        resultado=valor/1024;
                                        printf("%.2fGB",resultado);
                                }
                        }
                        if(men1>men2)
                        {
                                if(men2==2)
                                {
                                        resultado=valor*1024*1024*1024;
                                        printf("%.2fKB",resultado);
                                }
                                if(men2==3)
                                {
                                        resultado=valor*1024;
                                        printf("%.2fMB",resultado);
                                }
                        }                      
                        break;
                               
                        case 8:
                        if(men1==men2)
                        {      
                                printf("Não é necessario conversão");
                        }
                        else
                        {
                                if(men1<men2)
                                {
                                        resultado=valor/1024/1024;
                                        printf("%.2fTB",resultado);
                                }
                                if(men1>men2)
                                {
                                        resultado=valor*1024*1024;
                                        printf("%.2fMB",resultado);
                                }
                        }
                        break;
                       
                        case 9:
                        if(men1<men2)
                        {
                                resultado=valor/1024;
                                printf("%.2fTB",resultado);
                        }                               if(men1>men2)
                        {
                                resultado=valor*1024;
                                printf("%.2fGB",resultado);
                        }
                        break;
 
                        default:
                        printf("Não é necessario conversão");
                        break;
                }
        }
       
        return 0;
