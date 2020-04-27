#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <dos.h>
//matriz respuesta
//metodo burbuja
void tablero(int i, int j );
void jugador1 (void);
void jugador2 (void);
char matriz [3][3];
int comprueba (void);

int main (void){
	printf("BIENVENIDO AL TRES EN RAYA\n");
	printf("--------------------------\n");
	printf("Las posiciones empiezan en '0' y acaban en '2'\n\n");
 do{
	jugador1();
	jugador2();
 }
 while(comprueba!=0);
getch();
}

int comprueba (void){
      //gana jugador 1 
  if(matriz[0][0]== matriz[0][1] && matriz[0][1]==matriz[0][2]&& matriz[0][0]=='X'){
     printf("Jugador 1, has ganado la partida!!");
        if(matriz[0][0]== matriz[0][1] && matriz[0][1]==matriz[0][2]&& matriz[0][0]=='O')
        printf("Jugador 2, has ganado la partida!!");
  }
  if(matriz[0][0]== matriz[1][0] && matriz[1][0]==matriz[2][0]&& matriz[0][0]=='X'){
     printf("Jugador 1, has ganado la partida!!");
  }
  if(matriz[0][1]== matriz[1][1] && matriz[2][1]==matriz[2][1]&& matriz[0][1]=='O'){
     printf("Jugador 1, has ganado la partida!!");
  }
   if(matriz[0][2]== matriz[1][2] && matriz[2][2]==matriz[2][2]&& matriz[0][2]=='O'){
     printf("Jugador 1, has ganado la partida!!");
   }
    if(matriz[0][2]== matriz[1][1] && matriz[2][0]==matriz[2][0]&& matriz[0][2]=='O'){
     printf("Jugador 1, has ganado la partida!!");
    }
return(1);
}
void jugador2 (void){
	int i,j;
	printf("\n\n Jugador 2, introduzca una posicion\n\n ");
	printf("\n\n Fila: ");
	scanf("%d", &i);
	printf("\n Columna: ");
	scanf("%d", &j);
	
	if(i>3||j>3){
		printf("\n\n Esta cordenada no existe");
	}else{
		matriz[i][j]='O';
		tablero(i,j);
	}
	getch();
	comprueba();
	return;
}

void jugador1(void){
	int i,j;
	printf("\n\n Jugador 1, introduzca una posicion\n\n");
	printf("\n\n Fila: ");
	scanf("%d", &i);
	printf("\n Columna: ");
	scanf("%d", &j);
	
	if(i>3||j>3){
		printf("\n\n Esta cordenada no existe");
	}else{
		matriz[i][j]='X';
		tablero(i,j);
	}
	comprueba();
	getch;
}

void tablero(int i, int j){
	system("cls");
	printf("\n\n    0  |  1  |  2 \n");
	printf("----------------------\n");
	printf(" 0 %c  |  %c  |  %c   \n", matriz[0][0], matriz[0][1], matriz[0][2]);
	printf("----------------------\n");
	printf(" 1 %c  |  %c  |  %c   \n", matriz[1][0], matriz[1][1], matriz[1][2]);
	printf("----------------------\n");
	printf(" 2 %c  |  %c  |  %c   \n", matriz[2][0], matriz[2][1], matriz[2][2]);
return;
}
