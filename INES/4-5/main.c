#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estudiante.h"

/* ----------------------------------------------------
                    TESTS DE NOTA_MEDIA
   ---------------------------------------------------- 
*/

void test_nota_media_sin_notas() {
   float *notas = NULL;

   printf("test nota media sin notas ................. ");
   assert(nota_media(notas) == 0.0);
   printf("ok\n");
}

void test_nota_media_con_notas() {
   float notas[LONGITUD_TABLA_NOTAS]
           = {5.0, 4.0, 6.0, 6.0, 7.0,
              8.0, 5.0, 4.0, 6.0, 5.0}; 
   float expected = 5.6;
 
   printf("test nota media con notas ................. ");
   float result = nota_media(notas);
   assert(result == expected);
   printf("ok\n");
}


/* ----------------------------------------------------
                TESTS DE NUEVO ESTUDIANTE
   ----------------------------------------------------
*/


void test_nuevo_estudiante_sin_notas() {
   char nombre[MAX_NOMBRE_ESTUDIANTE] = "Eduardo";
   struct estudiante alumno;

   printf("test nuevo estudiante sin notas ........... ");
   alumno = nuevo_estudiante(nombre, 18, NULL);
   strcpy(nombre, "nombre modificado");

   assert(strcmp("Eduardo", alumno.nombre) == 0);
   assert(alumno.edad  == 18);
   assert(alumno.notas == NULL);
   assert(nota_media(alumno.notas) == 0.0);
   printf("ok\n");
}

void test_nuevo_estudiante_con_notas() {
   float notas[LONGITUD_TABLA_NOTAS]
           = {5.0, 4.0, 6.0, 6.0, 7.0,
              8.0, 5.0, 4.0, 6.0, 5.0}; 
   char nombre[MAX_NOMBRE_ESTUDIANTE] = "Luis";
   struct estudiante alumno;

   printf("test nuevo estudiante con notas ........... ");
   alumno = nuevo_estudiante(nombre, 18, notas);
   strcpy(nombre, "nombre modificado");
   notas[0] = 99999.99;

   assert(strcmp(alumno.nombre, "Luis") == 0);
   assert(alumno.edad  == 18);
   printf("ok\n");
}


/* ----------------------------------------------------
                  TEST DE MOSTRAR NOTAS
   ----------------------------------------------------
*/


void test_mostrar_notas_entre_valores() {
   float notas[LONGITUD_TABLA_NOTAS]
           = {5.0, 4.0, 6.0, 6.0, 7.0,
              8.0, 5.0, 4.0, 6.0, 5.0}; 
   char nombre[MAX_NOMBRE_ESTUDIANTE] = "Jose";
   struct estudiante alumno;

   printf("test mostrar notas entre valores ..........\n");
   alumno = nuevo_estudiante(nombre, 18, notas);
   mostrar_notas_entre_valores(&alumno, 6.0, 8.5);

   printf("ok\n");
}


int main() {
  test_nota_media_sin_notas();
  test_nota_media_con_notas();
  test_nuevo_estudiante_sin_notas();
  test_nuevo_estudiante_con_notas();
  test_mostrar_notas_entre_valores();

   return 0;
}
