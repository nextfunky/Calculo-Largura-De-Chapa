#include<stdio.h>
#include<stdlib.h>

int main() 
{ 

char cartola[] = "Cartola";
char terca[] = "Perfil U Enrijecido";
int medida1;
int medida2;
int medida3;
int medida4;
int medida5;
int espessura;
int comprimento;
int desconta8x = 8;

// ------------------------Aprentação---------------------------------
printf("Olá, Vamos Calcular Qual Será o Corte da sua Peça de Aço\n");
// ----------------------------------------------------------------------

// ---------- Coletando informações necessárias ---------------------
printf("Insira a Primeira Medida( 1 de 5): ");
scanf("%i", &medida1);

printf("Insira a Primeira Medida( 2 de 5): ");
scanf("%i", &medida2);

printf("Insira a Primeira Medida( 3 de 5): ");
scanf("%i", &medida3);

printf("Insira a Primeira Medida( 4 de 5): ");
scanf("%i", &medida4);

printf("Insira a Primeira Medida( 5 de 5): ");
scanf("%i", &medida5);

printf("Qual Comprimento da chapa?: ");
scanf("%i", &comprimento);

printf("Qual a espessura da chapa?: ");
scanf("%i", &espessura);
// ----------------------------------------------------------------------

//---------------------Calculo----------------------------

int soma1 = medida1 + medida2 + medida3 + medida4 + medida5;
int espessura_resultado = espessura * desconta8x;
int resultadodachapa = soma1 - espessura_resultado;
//--------------------------------------------------------

//------------------Resultado------------------------

printf("A Medida do seu corte será de: %iMM espessura X %iMM De largura X %iMM De Comprimento ", espessura, resultadodachapa, comprimento);




return(0);
}
