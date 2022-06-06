#ifndef MI_ASIGNATURA_V3_H_   /* Include guard */
#define MI_ASIGNATURA_V3_H_

   #include "estudiante_v3.h"

   struct nodo_estudiante {
      struct estudiante ficha_estudiante;
      struct nodo_estudiante *prev, *next; 
   };

   struct lista_doble_estudiantes {
      struct nodo_estudiante *first;
      struct nodo_estudiante *last;
      int size;
   };

   struct asignatura {
      char *nombre;
      struct lista_doble_estudiantes estudiantes;
   };

   #define MAX_NOMBRE_ASIGNATURA 80
   /* Número de caracteres máximo para cada nombre */

#endif
