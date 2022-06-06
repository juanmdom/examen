#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estudiante_v3.h"
#include "utils.h"

void print_alumno(struct estudiante alumno) {
   struct nodo *p_nota = alumno.notas.first;

   printf("%s:", alumno.nombre);
   if (alumno.notas.size == 0) {
      printf(" Sin notas");
   } else {
      for (int j=0; j<alumno.notas.size; j++) {
         printf(" %.2f", p_nota->nota);
         p_nota = p_nota->next;
      }
   }
   printf("\n");
}

/* ----------------------------------------------------
                         TESTS
   ---------------------------------------------------- */

void test1() {
   struct estudiante alumno = crear_estudiante ("Jose", 18, 0, NULL);

   float nuevas_notas[] = {5.0};
   int   N2 = sizeof(nuevas_notas) / sizeof(float);

   printf("--- test 1\n");

   actualizar_notas(&alumno, N2, nuevas_notas);
   print_alumno(alumno);
}

void test2() {
   float notas1[] = {6.5};
   int   N1 = sizeof(notas1) / sizeof(float);
   struct estudiante alumno = crear_estudiante ("Luis", 19, N1, notas1);

   printf("--- test 2\n");

   actualizar_notas(&alumno, 0, NULL);
   print_alumno(alumno);
}

void test3() {
   float notas1[] = {6.5};
   int   N1 = sizeof(notas1) / sizeof(float);
   struct estudiante alumno = crear_estudiante ("Rosa", 20, N1, notas1);

   float nuevas_notas[] = {5.0};
   int   N2 = sizeof(nuevas_notas) / sizeof(float);

   printf("--- test 3\n");

   actualizar_notas(&alumno, N2, nuevas_notas);
   print_alumno(alumno);
}

void test4() {
   float notas1[] = {6.2, 7.5};
   int   N1 = sizeof(notas1) / sizeof(float);
   struct estudiante alumno = crear_estudiante ("Maria", 19, N1, notas1);

   float nuevas_notas[] = {5.0};
   int   N2 = sizeof(nuevas_notas) / sizeof(float);

   printf("--- test 4\n");

   actualizar_notas(&alumno, N2, nuevas_notas);
   print_alumno(alumno);
}

void test5() {
   float notas1[] = {6.2, 7.0, 7.5};
   int   N1 = sizeof(notas1) / sizeof(float);
   struct estudiante alumno = crear_estudiante ("Marta", 19, N1, notas1);

   float nuevas_notas[] = {5.0};
   int   N2 = sizeof(nuevas_notas) / sizeof(float);

   printf("--- test 5\n");

   actualizar_notas(&alumno, N2, nuevas_notas);
   print_alumno(alumno);
}

void test6() {
   float notas1[] = {8.4};
   int   N1 = sizeof(notas1) / sizeof(float);
   struct estudiante alumno = crear_estudiante ("Angel", 19, N1, notas1);

   float nuevas_notas[] = {5.3, 7.2};
   int   N2 = sizeof(nuevas_notas) / sizeof(float);

   printf("--- test 6\n");

   actualizar_notas(&alumno, N2, nuevas_notas);
   print_alumno(alumno);
}

void test7() {
   float notas1[] = {7.2, 8.4};
   int   N1 = sizeof(notas1) / sizeof(float);
   struct estudiante alumno = crear_estudiante ("Felix", 19, N1, notas1);

   float nuevas_notas[] = {5.3, 6.5};
   int   N2 = sizeof(nuevas_notas) / sizeof(float);

   printf("--- test 7\n");

   actualizar_notas(&alumno, N2, nuevas_notas);
   print_alumno(alumno);
}

void test8() {
   float notas1[] = {7.2, 8.4};
   int   N1 = sizeof(notas1) / sizeof(float);
   struct estudiante alumno = crear_estudiante ("Luisa", 19, N1, notas1);

   float nuevas_notas[] = {5.3, 6.5, 7.1};
   int   N2 = sizeof(nuevas_notas) / sizeof(float);

   printf("--- test 8\n");

   actualizar_notas(&alumno, N2, nuevas_notas);
   print_alumno(alumno);
}


void test9() {
   float notas1[] = {7.2, 8.4, 9.3};
   int   N1 = sizeof(notas1) / sizeof(float);
   struct estudiante alumno = crear_estudiante ("Ana", 20, N1, notas1);

   float nuevas_notas[] = {5.3, 6.5, 7.0};
   int   N2 = sizeof(nuevas_notas) / sizeof(float);

   printf("--- test 9\n");

   actualizar_notas(&alumno, N2, nuevas_notas);
   print_alumno(alumno);
}

void test10() {
   float notas1[] = {7.7, 8.4, 9.3, 9.7};
   int   N1 = sizeof(notas1) / sizeof(float);
   struct estudiante alumno = crear_estudiante ("Eva", 20, N1, notas1);

   float nuevas_notas[] = {5.3, 6.5, 7.1, 7.3};
   int   N2 = sizeof(nuevas_notas) / sizeof(float);

   printf("--- test 10\n");

   actualizar_notas(&alumno, N2, nuevas_notas);
   print_alumno(alumno);
}

int main() {
   test1();
   test2();
   test3();
   test4();
   test5();
   test6();
   test7();
   test8();
   test9();
   test10();

   return 0;
}
