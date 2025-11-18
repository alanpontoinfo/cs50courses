#include <stdio.h>
#include <cs50.h>
int main(void)
{
  string resposta = get_string("Qual é seu nome? ");
  printf("hello, %s!\n", resposta);
  printf("hello, world\n");
}

/// compilar manual:
/// clang hello.
/// ./a.out

/// criando arquiv de saida ./hello
/// clang -o hello hello.c

/// compilando arquivo com a biblioteca cs50.h
//clang -o hello hello.c -lcs50
/// ./hello
