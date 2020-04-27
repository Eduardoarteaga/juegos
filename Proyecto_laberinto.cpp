#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include <time.h>
#include <string.h>

#define MAX 7

int laberintoj1();
int aleatorio();

int main (){
	int opc;
	printf("----------Bienvenido----------");
	printf("\n1.-Laberinto");
	printf("\n2.-Salir");
	printf("\nIngrese su opcion: ");
	scanf("%d", &opc);
	switch(opc){
		case 1:
				laberintoj1();
				break;
		case 2:
			printf("Usted esta saliendo");
			break;
		default:
			printf("Opcion incorrecta");
			break;		
	}
}

int laberintoj1(){
	int random=0, cont=0, suma=0, fila=0, columna=0, M[MAX][MAX],*pF,*pC, multi=0;
	int random2=0,cont2=0,suma2=0,fila2=0,columna2=0,M2[MAX][MAX],*pF2,*pC2;
	char j1[10],j2[10];
	srand(time(NULL));
	printf("----------Bievenido al juego del laberinto----------\n");
	printf("\n1 Jugador o 2 jugadores?\n");
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
                fila=i+1;//sustentacion
                columna=MAX;//sustentacion
                break;
            }
            random=0;
        }
    }
    if (cont!=3) {
        fila = MAX-6;//sustentacion
        columna = MAX;//sustentacion
    }
	for (int x=0; x<MAX; x++) {
        for (int y=0; y<MAX; y++) {
            printf("%d|", M[x][y]);
        }
        printf("\n");
    }
    pF=&fila;//sustentacion
  	pC=&columna;//sustentacion
    printf("Retorna = %d", suma);
    printf("\n");
    printf("PosF = %d", *pC);//sustentacion
    printf("\n");
    printf("PosC = %d", *pF);//sustentacion
    printf("\n");
    printf("Ceros = %d", cont);
    printf("\n");
    if(multi==2){
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
        for (int i=MAX-2; i>-1; i--) {
            random2 = aleatorio();
            M2[i][MAX-1] = random2;
            if (random2==0) {
                cont2++;
            }else{
                suma2 = random2 + suma2;
            }
            if (cont2==3) {
                fila2=i+1;//sustentacion
                columna2=MAX;//sustentacion
                break;
            }
            random2=0;
        }
    }
    if (cont2!=3) {
        fila2 = MAX-6;//sustentacion
        columna2 = MAX;//sustentacion
    }
	for (int x=0; x<MAX; x++) {
        for (int y=0; y<MAX; y++) {
            printf("%d|", M2[x][y]);
        }
        printf("\n");
    }
  pF2=&fila2;//sustentacion
  pC2=&columna2;//sustentacion
    printf("Retorna = %d", suma2);
    printf("\n");
    printf("PosF = %d", *pC2);//sustentacion
    printf("\n");
    printf("PosC = %d", *pF2);//sustentacion
    printf("\n");
    printf("Ceros = %d", cont2);
    printf("\n");
		if(suma<suma2){
			printf("El ganador es: %s\n",j2);//sustentacion
		}else if(suma2<suma){
			printf("El ganador es: %s\n",j1);//sustentacion
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


