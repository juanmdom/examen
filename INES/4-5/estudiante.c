#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LONGITUD_TABLA_NOTAS 10
#define MAX_NOMBRE_ESTUDIANTE 80

#include "estudiante.h"

float nota_media(float *notas) {
  float media = 0.0;
  float suma = 0.0;
  float *notes = notas;

  if(notas == NULL){
    return 0.0;
  }

  for(int i = 0; i< LONGITUD_TABLA_NOTAS; i++){
    suma = suma + *notes;
    notes++;
  }
  
  media = suma/LONGITUD_TABLA_NOTAS; 
  return media;
}


struct estudiante nuevo_estudiante(char *nombre, int edad, float *notas) {
  float *new_notas = malloc(sizeof(MAX_NOMBRE_ESTUDIANTE));
  char *new_nombre = malloc(sizeof(LONGITUD_TABLA_NOTAS));

  strcpy(new_nombre, nombre);
  new_notas = notas;

  if (new_notas == 0) {new_notas = NULL;}
  struct estudiante new_student = {new_nombre, edad, new_notas};
  return new_student;
}

void mostrar_notas_entre_valores(struct estudiante *p, float desde_nota, float hasta_nota){
    if(desde_nota < 0 || hasta_nota < 0 || hasta_nota < desde_nota){
        return;
    }else {
        printf("%s: ", p->nombre);
        for(int i = 0; i<LONGITUD_TABLA_NOTAS; i++){
            if(p->notas[i] >= desde_nota && p->notas[i] <= hasta_nota){
                printf("%.2f ",p->notas[i]);
            }
        }
    }
    printf("\n");
  }
 
