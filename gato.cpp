#include <stdio.h>
#include <string.h>
void tablero(){
	
	int i,j;
	char tabla[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};

	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			
			printf("|%c|",tabla[i][j]);
			if(tabla[i][j]=='3'){
				printf("\n");}	
				
			if(tabla[i][j]=='6'){
				printf("\n");}
				
		}
	}
}


main(){
	
	char nombre1[20], nombre2[20];
	int i, j, w=0, e=0, j2=0, p=0;
	char tabla[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}}, casilla1[1][1];

	
	printf("GATO \n");
	printf("Ingrese el nombre del jugador 1: ");
	gets(nombre1);
	printf("Ingrese el nombre del jugador 2: ");
	gets(nombre2);
	
	tablero();
	do{
	printf("\nTurno de %s, escriba el n\243mero de la casilla en la que va a colocar su ficha: ", nombre1);
	scanf("\n%c", &casilla1[0][0]);
	if(j2==0){
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			if(tabla[i][j]==casilla1[0][0]){
				tabla[i][j]='X';}
			}
		}
	w=0;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("|%c|",tabla[i][j]);
			w=w+1;
			if(w==3){
				printf("\n");}	
			if(w==6){
				printf("\n");}
		}
	}
	if((tabla[0][0]=='X' && tabla[0][1]=='X' && tabla[0][2]=='X') || (tabla[1][0]=='X' && tabla[1][1]=='X' && tabla[1][2]=='X') || (tabla[2][0]=='X' && tabla[2][1]=='X' && tabla[2][2]=='X') || (tabla[0][0]=='X' && tabla[1][0]=='X' && tabla[2][0]=='X') || (tabla[0][1]=='X' && tabla[1][1]=='X' && tabla[2][1]=='X') || (tabla[0][2]=='X' && tabla[1][2]=='X' && tabla[2][2]=='X') || (tabla[0][2]=='X' && tabla[1][1]=='X' && tabla[2][0]=='X') || (tabla[0][0]=='X' && tabla[1][1]=='X' && tabla[2][2]=='X')){
		printf("\n%s gana", nombre1);
		j2=0;
		e=11;
	}
	else{
	p=p+1;
	e=e+1;	
	if(e<9){
		j2=10;
	}
	}
}
	
	if(j2==10){
	printf("\nTurno de %s, escriba el n\243mero de la casilla en la que va a colocar su ficha: ", nombre2);
	scanf("\n%c", &casilla1[0][0]);
		
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			if(tabla[i][j]==casilla1[0][0]){
				tabla[i][j]='O';}
			}
		}
	w=0;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("|%c|",tabla[i][j]);
			w=w+1;
			if(w==3){
				printf("\n");}	
			if(w==6){
				printf("\n");}
		}
	}
	if((tabla[0][0]=='O' && tabla[0][1]=='O' && tabla[0][2]=='O') || (tabla[1][0]=='O' && tabla[1][1]=='O' && tabla[1][2]=='O') || (tabla[2][0]=='O' && tabla[2][1]=='O' && tabla[2][2]=='O') || (tabla[0][0]=='O' && tabla[1][0]=='O' && tabla[2][0]=='O') || (tabla[0][1]=='O' && tabla[1][1]=='O' && tabla[2][1]=='O') || (tabla[0][2]=='O' && tabla[1][2]=='O' && tabla[2][2]=='O') || (tabla[0][2]=='O' && tabla[1][1]=='O' && tabla[2][0]=='O') || (tabla[0][0]=='O' && tabla[1][1]=='O' && tabla[2][2]=='O')){
		printf("\n%s gana", nombre2);
		e=11;
		j=10;
	}
	else{
	p=p+1;	
	e=e+1;	
	j2=0;
	}
	}
	}while(e<9);
	if(p>8){
		printf("\n empate");
	}
}


