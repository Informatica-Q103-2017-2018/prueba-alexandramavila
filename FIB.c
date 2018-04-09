#include <stdio.h> 
#define N 20

int main () 
{ 
  int fib[N], i; 
  fib[0] = 0; 
  fib[1] = 1; 
  //Genera los números y los almacena en el vector 
  for (i = 2; i < N; ++i) 
    fib[i] = fib[i-2] + fib[i-1]; 
  // Muestra el contenido del vector 
  for (i = 0; i < N; ++i) 
    printf("%i\n", fib[i]); 
  return 0;
  }

