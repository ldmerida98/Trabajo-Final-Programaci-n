#include <stdio.h>	
#include <time.h>
#include <stdlib.h>

int main() {
	system("color 40");
	int anio, febrero;
	int opcion=1, dias_mes, dia=1, mes=1;
  
  time_t fecha; //
	struct tm *ahora;
	time(&fecha); 
	ahora=localtime(&fecha); 
	dia=ahora->tm_mday;
	mes=ahora->tm_mon+1; 
	anio = (ahora->tm_year)+1900;
        system ("cls"); 
	printf("\t\t\t--------------------CALENDARIO--------------------\n\n"); 
	printf(" > La fecha de hoy es: %d/%d/%d \n\n\n",dia,mes,anio); 
