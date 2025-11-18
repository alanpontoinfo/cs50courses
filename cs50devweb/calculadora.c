#include <stdio.h>
#include <cs50.h>

int main(void){

///int x = get_int("x: "); calcular um valor acima de 4 billhoes
/// ocorrerá erro OVERFLOW devido int possuir 32 bits
///int y = get_int("y: ");
    long x = get_long("x: "); /// aqui funciona pois tipo long tem 64 bits
    long y = get_long("y: ");

  //  printf("%li\n", x / y); se divisão for esultado deciomal como exemplo
  // 1 / 3 ( divido) ocorrer´Truncate
  //float z = (float) x / (float) y; //32 bits
    double z = (double) x / (double) y; // 64bits
  /// aqui fazemos um cast para resolver
  //printf("%f\n", z);
  printf("%.20f\n", z); // float point precision
}
