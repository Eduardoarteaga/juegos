#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include <time.h>
#include <string.h>
#include <windows.h>

#define MAX 4//sustentacion
#define HASHF 5//sustentacion
#define HASHC 8//sustentacion

int tablashash();
int main (){
	int opc;
	printf("\n----------Bienvenido----------");
	printf("\n1.-Tabla de Hash");
	printf("\n2.-Salir");
	printf("\nIngrese su opcion: ");
	scanf("%d", &opc);
	switch(opc){
		case 1:
			tablashash();
			 break;
		case 2:
			printf("Usted esta saliendo");
			break;
		default:
			printf("Opcion Incorrecta");
			break;		
	}
}
int tablashash(){
	char tabla[HASHC][HASHF],clave[]={"FuNdAmEnToS"},elemento;
	int h,cont1=0, cont=0;
	printf("----------Bienvenido a Tabla Hash----------\n");
	for(int x=0;x<HASHC;x++){
		for(int y=0;y<HASHF;y++){
			tabla[x][y]=1;
		}
	}
	for (int i = 0; i<strlen(clave); i++){
		h=clave[i]%HASHC;//sustentacion
		if(i>6){
			tabla[i+1][h];
		}
		if(tabla[i][h]==1){
			tabla[i][h]=clave[i];
		}else{
			tabla[i+1][h]=clave[i];
		}
	}
	for(int j=0;j<HASHC;j++){//sustentacion
		for(int k=0;k<HASHF;k++){//sustentacion
			printf("%c |",tabla[j][k]);
		}
		printf("\n");
	}
	fflush(stdin);
printf("\n Que elemento desea buscar?\n");
scanf("%c", &elemento);
	for(int x=0;x<HASHF;x++){
		for(int z=0;z<HASHF;z++){
			
			}
			
		}
	printf("Su elemento %c esta en su columna: %d",elemento,cont);	
	}

