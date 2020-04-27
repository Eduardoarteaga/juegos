#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include <time.h>
#include <string.h>
#include <windows.h>

#define MAX 4
#define HASHF 5
#define HASHC 8

//int laberinto(int M[MAX][MAX], int *posF, int *posC);
int laberintoj1();
int aleatorio();

//int Hashing(char claves[K], char tabla[M][N]);
//int Buscar(char tabla[M][N], int clave);
int tablashash();
int main (){
	int opc;
	printf("----------Bienvenido----------");
	printf("\nQue desea jugar?");
	printf("\n1.-Laberinto");
	printf("\n2.-Tabla de Hash");
	printf("\n3.-Salir");
	printf("\nIngrese su opcion: ");
	scanf("%d", &opc);
	switch(opc){
		case 1:
				laberintoj1();
				break;
		case 2:
				 tablashash();
				 break;
		case 3:
			printf("Usted esta saliendo");
			break;
		default:
			printf("Opcion Incorrecta");
			break;		
	}
}
int laberintoj1(){
	int random=0, cont=0, suma=0, fila=0, columna=0, M[MAX][MAX],*pF,*pC, multi=0;
	char j1[10];
	srand(time(NULL));
	printf("----------Bievenido al juego del laberinto----------\n");
	printf("\nCuantos jugadores son?\n");
	scanf("%d", &multi);
	fflush(stdin);
	printf("Ingrese su nombre Jugador1:\n");
	gets(j1);
	for(int i=0; i<MAX; i++){
		for(int o=0; o<MAX; o++){
			M[i][o]=0;	
		}
	}
    for (int p=0; p<MAX; p++) {
        random = aleatorio();
        M[p][p] = random;
        if (random==0) {
            cont++;
        }else{
            suma = random + suma;
        }   
        if (cont==3) {
            fila=p+1;
            columna=p+1;
            break;
        }
        random=0;
    }
    if(cont != 3){
        for (int i=MAX-2; i>-1; i--) {
            random = aleatorio();
            M[i][MAX-1] = random;
            if (random==0) {
                cont++;
            }else{
                suma = random + suma;
            }
            if (cont==3) {
                fila=i+1;
                columna=MAX;
                break;
            }
            random=0;
        }
    }
    if (cont!=3) {
        fila = MAX;
        columna = MAX;
    }
	for (int x=0; x<MAX; x++) {
        for (int y=0; y<MAX; y++) {
            printf("%d|", M[x][y]);
        }
        printf("\n");
    }
  pF=&fila;
  pC=&columna;
    printf("Retorna = %d", suma);
    printf("\n");
    printf("PosF = %d", *pF);
    printf("\n");
    printf("PosC = %d", *pC);
    printf("\n");
    printf("Ceros = %d", cont);
    printf("\n");
    if(multi==2){
		int random2=0,cont2=0,suma2=0,fila2=0,columna2=0,M2[MAX][MAX],*pF2,*pC2;
		char j2[10];
    	srand(time(NULL));
    	fflush(stdin);
		printf("Ingrese su nombre Jugador2:\n");
		gets(j2);
		for(int i=0; i<MAX; i++){
			for(int o=0; o<MAX; o++){
				M2[i][o]=0;	
			}
		}
    for (int p=0; p<MAX; p++) {
        random2 = aleatorio();
        M2[p][p] = random2;
        if (random2==0) {
            cont2++;
        }else{
            suma2 = random2 + suma2;
        }   
        if (cont2==3) {
            fila2=p+1;
            columna2=p+1;
            break;
        }
        random2=0;
    }
    if(cont2 != 3){
        for (int i=MAX-2; i>=0; i--) {
            random2 = aleatorio();
            M2[i][MAX-1] = random2;
            if (random2==0) {
                cont2++;
            }else{
                suma2 = random2 + suma2;
            }
            if (cont2==3) {
                fila2=i+1;
                columna2=MAX;
                break;
            }
            random2=0;
        }
    }
    if (cont2!=3) {
        fila2 = MAX;
        columna2 = MAX;
    }
	for (int x=0; x<MAX; x++) {
        for (int y=0; y<MAX; y++) {
            printf("%d|", M2[x][y]);
        }
        printf("\n");
    }
  pF2=&fila2;
  pC2=&columna2;
    printf("Retorna = %d", suma2);
    printf("\n");
    printf("PosF = %d", *pF2);
    printf("\n");
    printf("PosC = %d", *pC2);
    printf("\n");
    printf("Ceros = %d", cont2);
    printf("\n");
		if(suma<suma2){
			printf("El ganador es: %s\n",j1);
		}else if(suma2<suma){
			printf("El ganador es: %s\n",j2);
		}
		main();
	}else{
		main();
	}
}
int aleatorio(){
    int numero;
    numero = 0 + rand() % ((9+1)-0);
    return numero;
}
//int laberinto(int M[MAX][MAX], int *posF, int *posC){	
//}

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
		h=clave[i]%HASHC;
		if(i>6){
			tabla[i+1][h];
		}
		if(tabla[i][h]==1){
			tabla[i][h]=clave[i];
		}else{
			tabla[i+1][h]=clave[i];
		}
	}
	for(int j=0;j<HASHC;j++){
		for(int k=0;k<HASHF;k++){
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
	

	//void Hashing(char claves[K], char tabla[M][N]){
	//int Buscar(char tabla[M][N], int clave){
	
	
