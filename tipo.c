#include "tipo.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int listarTipos(eTipo tipos[],int tamTipos)
{
    int retorno=-1;

    if(tipos!=NULL&&tamTipos>0)
    {
        printf("  ID       TIPOS\n");
        for(int i=0;i<tamTipos;i++)
        {
            mostrarTipo(tipos[i]);
            retorno=0;
        }
    }

    return retorno;
}

void mostrarTipo(eTipo tipo)
{
    printf(" %d %10s\n",tipo.id,tipo.desc);
}

int validarTipo(eTipo tipos[],int tamT,int id)
{

    int retorno=-1;

    if(tipos!=NULL&&tamT>0)
    {
        if(id>999&&id<1005)//los ids de tipo van de 1000 a 1004
        {
            retorno=0;
        }
    }

    return retorno;

}

int cargarDescTipo(char str[],eTipo tipos[],int tamT,int id)
{
    int retorno=-1;

    if(tipos!=NULL&&tamT>0)
    {
        for(int i=0;i<tamT;i++)
        {
            if(tipos[i].id==id)
            {
                strcpy(str,tipos[i].desc);
                retorno=0;
                break;
            }
        }
    }

    return retorno;
}
