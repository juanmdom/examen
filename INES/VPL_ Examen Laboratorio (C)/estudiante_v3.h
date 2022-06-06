#ifndef ESTUDIANTE_V3_H_
#define ESTUDIANTE_V3_H_

   struct nodo {
      float nota;
      struct nodo *prev, *next; 
   };

   struct lista_doble_notas {
      struct nodo *first;
      struct nodo *last;
      int size;
   };

   struct estudiante {
      char *nombre;
      int edad;
      struct lista_doble_notas notas;
   };

   #define MAX_NOMBRE_ESTUDIANTE 80
   /* Número de caracteres máximo para cada nombre */

    void actualizar_notas (struct estudiante *p_estudiante, int N, float *nuevas_notas);
   /*  @param p_estudiante Puntero a la información de un estudiante.
       @param N            Número de notas que hay en el array de notas (en *notas).
       @param nuevas_notas Nuevas notas del estudiante.
   */
#endif
