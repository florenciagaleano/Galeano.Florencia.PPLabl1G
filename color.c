#include "color.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int listarColores(eColor colores[],int tamCol)
{
    int retorno=-1;

    if(colores!=NULL&&tamCol>0)
    {
        printf("  ID       COLOR\n");
        for(int i=0;i<tamCol;i++)
        {
            mostrarColor(colores[i]);
            retorno=0;
        }
    }

    return retorno;
}

void mostrarColor(eColor color)
{
    printf(" %d %10s\n",color.id,color.desc);
}

int validarColor(eColor colores[],int tamC,int id)
{

    int retorno=-1;

    if(colores!=NULL&&tamC>0)
    {
        if(id>4999&&id<5005)
        {
            retorno=0;
        }
    }

    return retorno;

}

int cargarDescColor(char str[],eColor colores[],int tamC,int id)
{
    int retorno=-1;

    if(colores!=NULL&&tamC>0)
    {
        for(int i=0;i<tamC;i++)
        {
            if(colores[i].id==id)
            {
                strcpy(str,colores[i].desc);
                retorno=0;
                break;
            }
        }
    }

    return retorno;
}
