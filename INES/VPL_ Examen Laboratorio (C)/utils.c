#include "utils.h"
#include <stdlib.h>
#include <string.h>

struct estudiante crear_estudiante
  (char *nombre, int edad, int N, float *notas)
{
    struct estudiante nuevoestudiante;
    
    char *nuevonombre=(char*)malloc(MAX_NOMBRE_ESTUDIANTE*sizeof(char));
    strcpy(nuevonombre,nombre);
    
    nuevoestudiante.nombre=nuevonombre;
    nuevoestudiante.edad=edad;

    if(N==0){
       nuevoestudiante.notas.first=NULL;
       nuevoestudiante.notas.last=NULL;
       nuevoestudiante.notas.size=0;

    } else {
       struct nodo *nuevanota=(struct nodo*)malloc(sizeof(struct nodo));

       nuevanota->nota=notas[0];
       nuevanota->prev=NULL;
       nuevanota->next=NULL;
       nuevoestudiante.notas.first=nuevanota;
       nuevoestudiante.notas.last=nuevanota;
       nuevoestudiante.notas.size=1;

       for(int i=1;i<N;i++){
            struct nodo *nuevanota=(struct nodo*)malloc(sizeof(struct nodo));

            nuevanota->prev=nuevoestudiante.notas.last;
            nuevanota->nota=notas[i];
            nuevanota->next=NULL;
            nuevoestudiante.notas.last->next=nuevanota;
            nuevoestudiante.notas.last=nuevanota;
            nuevoestudiante.notas.size++;
       }
    }

    return nuevoestudiante;
}
