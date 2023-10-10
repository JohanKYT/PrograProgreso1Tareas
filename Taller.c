#include <stdio.h>
#include <math.h>
#include <stdint.h>
#define M_PI		3.14159265358979323846


int main(void){

    double catetoA;
    double catetoB;
    double anguloalfaa;
    double angulobetaa;
    double anguloingresado;
    double hipotenusaa;
    double angulo;
    int opcionMenu, opcionMenu2, opcionAngulo;
    double respuestafinal;

    do
    {
        printf("Escoja la opcion;\n");
        printf("\n");
        printf("1-Calcular lados y angulos de un triangulo rectangulo\n");
        printf("2-Calcular potencia de un numero\n");
        printf("3-Salir\n");

        scanf("%d",&opcionMenu);

        switch (opcionMenu)
        {
        case 1:
            do
            {
                printf("Escoja la opcion;\n");
                printf("\n");
                printf("1-Un angulo y un lado\n");
                printf("2-Dos lados\n");
                printf("Salir\n");

                scanf("%d",&opcionMenu2);

                switch (opcionMenu2)
                {
                case 1:
                    printf("Ingrese 1-CatetoOpuesto / 2-CatetoAdyacente\n");
                    printf("\n");

                    scanf("%d",&opcionAngulo);

                    switch (opcionAngulo)
                    {
                    case 1:

                        printf("Ingrese el angulo\n");
                        scanf("%lf",&angulo);
                        printf("Ingrese el Cateto Opuesto\n");
                        scanf("%lf",&catetoA);

                        angulobetaa=angulo;
                        anguloalfaa=90-angulobetaa;

                        angulo= (angulo*M_PI)/180;
                        catetoB=tan(angulo)*catetoA;

                        hipotenusaa=catetoA*catetoA + catetoB*catetoB;
                        hipotenusaa=sqrt(hipotenusaa);

                        printf("Cateto A: %lf\n", catetoA);
                        printf("Cateto B: %lf\n", catetoB);
                        printf("Hipotenusa: %lf\n", hipotenusaa);
                        printf("Angulo Alfa: %lf\n", anguloalfaa);
                        printf("Angulo Beta: %lf\n", angulobetaa);

                        break;
                    case 2:
                        printf("Ingrese el Cateto adyacente\n");
                        
                        scanf("%lf",&catetoB);

                        angulobetaa=angulo;
                        anguloalfaa=90-angulobetaa;

                        angulo= (angulo*M_PI)/180;
                        catetoA=catetoB/tan(angulo);

                        hipotenusaa=catetoA*catetoA + catetoB*catetoB;
                        hipotenusaa=sqrt(hipotenusaa);

                        printf("Cateto A: %lf\n", catetoA);
                        printf("Cateto B: %lf\n", catetoB);
                        printf("Hipotenusa: %lf\n", hipotenusaa);
                        printf("Angulo Alfa: %lf\n", anguloalfaa);
                        printf("Angulo Beta: %lf\n", angulobetaa);
                   
                    }

                
                    break;
  
                case 2:

                    printf("Ingrese el Cateto A");
                    scanf("%lf",&catetoA);

                    printf("Ingrese el Cateto B");
                    scanf("%lf",&catetoB);

                    hipotenusaa=catetoA*catetoA+catetoB*catetoB;
                    hipotenusaa=sqrt(hipotenusaa);

                    

                    break;
                }

                

                if (opcionMenu2>3 || opcionMenu2<1)
                {
                    printf("Esta opcion es incorrecta\n");
                }
                
            } while (opcionMenu2!=3);
            
            break;
        
        case 2:

            int Numpotencia;
            int numingresado;

            printf("Ingrese el numero\n");
            scanf("%d",numingresado);

            printf("Ingrese potencia");
            scanf("%d",Numpotencia);

            
            
            if (numingresado==0)
            {
                printf("La respuesta es: 0");
            }

            if (numingresado>0)
            {
                if (Numpotencia==0)
            {
                printf("La respuesta es: 1");
            }
                else if (Numpotencia>0)
                {
                    do
                    {
                        respuestafinal=respuestafinal*numingresado;
                        Numpotencia=Numpotencia-1;
                    } while (Numpotencia!=0);

                    printf("La respuesta es: %lf\n",respuestafinal);
                     
                }
            }
            

            break;
        }

    } while (opcionMenu!=3);
    









    return 0;
}