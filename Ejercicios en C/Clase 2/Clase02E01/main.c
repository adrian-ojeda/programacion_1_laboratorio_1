#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define CANTIDAD_NUMEROS 3
int obtenerNumeros (void);
int calcularMaximoYMinimo(void);
int main()
{
    obtenerNumeros();
    calcularMaximoYMinimo();
    return 0;
}

int obtenerNumeros(void){
    int numero;
    int maximo=INT_MIN;
    int minimo=INT_MAX;
    int acumulador=0;
    int i=0;
    float promedio;

    for(i;i<CANTIDAD_NUMEROS;i++)
    {
        printf("Ingrese un numero\n");
        scanf("%d",&numero);
        acumulador+=numero;
    }
    //promedio=(float)acumulador/CANTIDAD_NUMEROS;

    if(calcularPromedio(acumulador,CANTIDAD_NUMEROS,&promedio)==0)//negar es lo mismo que decir calcularPromedio()==0
    {
            printf("\nEl promedio es: %.2f",promedio);
    }
    else{
        printf("ERROR");
    }

    printf("\nEl numero maximo es: %d\n",maximo);
    printf("El numero minimo es: %d\n",minimo);
    return 0;
}

int calcularPromedio(int valorAcumulado, int cantidad, float *promedio)
{
    int retorno=-1;
    if(cantidad>0 && promedio!=NULL)
    {
        *promedio=(float)valorAcumulado/cantidad;
        retorno=0;
    }
    return retorno;
}

int calcularMaximoYMinimo (int numero, int *maximo, int *minimo)
{
    if(*maximo!=NULL &&)
        if(numero>*maximo){
            *maximo=numero;
        }
        if(numero<*minimo){
            *minimo=numero;
        }
    }
    return 0;
}
