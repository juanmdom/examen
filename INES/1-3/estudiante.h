struct estudiante { 
  char *nombre;
  int edad;
  float *notas;
};

#define MAX_NOMBRE_ESTUDIANTE 80
/* Número de caracteres máximo para cada nombre */
#define LONGITUD_TABLA_NOTAS 10
/* Número de elementos de la tabla de notas */
float nota_media(float *notas);
/* @return Media de todas las notas del estudiante.
Si el alumno no tiene aún ninguna nota el puntero al
array de notas es NULL y esta función retorna 0.0 */


struct estudiante nuevo_estudiante(char *nombre, int edad, float *notas); 
/* Inicializa la estructura estudiante con los valores que se pasan por parametro.
@param nombre Puntero al nombre del nuevo estudiante
@param edad Edad del nuevo estudiante
@param notas Puntero a un array con las notas de este estudiante
@return La estructura estudiante con los campos inicializados
Si el alumno no tiene aún ninguna nota su puntero al array de notas es NULL.
AVISO: Recuerda que para copiar el nombre y la tabla de notas debes pedir memoria
llamando a la función malloc().
*/

void mostrar_notas_entre_valores(struct estudiante *p, float desde_nota, float hasta_nota); 
/* Muestra en pantalla el nombre del estudiante y todas
sus notas con valores comprendidos entre desde_nota y hastaNota.
@param p Puntero a la información del estudiante.
@param desde_nota Puntuación minima de nota para mostrar en pantalla.
@param hasta_nota Puntuación maxima de nota para mostrar en pantalla.
Si el alumno no tiene aún ninguna nota su puntero al array de notas es NULL.
El formato de salida a pantalla es el siguiente: Nombre: nota1 nota2 nota3 ... notaN
*/
