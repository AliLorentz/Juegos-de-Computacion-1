#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <windows.h>

#define FILAS 8
#define COLUMNAS 8

void menu(char mapa[8][8]);
void tablero(char mapa[8][8]);
void escoger(char mapa[8][8]);
void escoger2(char mapa[8][8]);
int ganador(char mapa[8][8]);
void datos();
void final();
void tres(char mapa[8][8]);

int partidas=0,partida2=0;


int a=7,b=7,c=7,d=7,e=7,f=7,g=7,h=7;
int ho=0,dia=0,ver=0,xd=0,mov=0,mov1=0,mov2=0,raya1=0,raya2=0,empty=0,band;
int pri=0,seg=0,ter=0;
int ganador1=0,ganador2=0,jug1,jug2;
int bandera;
int comienzo=0;
char name1[8][8],name2[8][8];

int main(){
	mov1=0,mov2=0,mov=0,raya1=0,raya2=0,a=7,b=7,c=7,d=7,e=7,f=7,g=7,h=7;
	system("COLOR 0F");
	char mapa[8][8];
	int dados1,dados2;
	char player1,player2;
	printf("Nuevo Juego\n");
	if(comienzo==0){
	comienzo=1;
	srand(time(0));
	printf("Bienvenidos al juego cuatro en raya:\n");
	system("pause");
	system("cls");
	system("COLOR 0B");
	printf("Ingrese nombre del primer jugador:\n");
	scanf("%s", &name1);
	system("cls");
	system("COLOR 0C");
	printf("Ingrese nombre del segundo jugador jugador:\n");
	scanf("%s", &name2);
	system("pause");
	system("COLOR 0f");
	system("cls");
	printf("Se lanzaran los dados para identificar cual jugador sera primero:\n");
	system("pause");
	do{
	dados1=rand()%6+1;
	dados2=rand()%6+1;
	}while(dados1==dados2);
	
	system("cls");
	
	if(dados1>dados2){
		printf("\n\tGanador jugador 1\n\n");
		system("pause");
		band=1;
	}
	if(dados2>dados1){
		printf("\n\tGanador jugador 2\n\n");
		system("pause");
		band=2;	
	}
}
	
	menu(mapa);
}

void menu(char mapa[8][8]){
	system("cls");
datos();
partidas=0;
if(band==1){
	do{

	system("cls");	
	tablero(mapa);
	escoger(mapa);
	tablero(mapa);
	tres(mapa);
	ganador(mapa);
	datos();
	system("cls");
	tablero(mapa);
	escoger2(mapa);
	tres(mapa);
	ganador(mapa);
	datos();
	

}while(xd<=3);
}
if(band==2){
	do{
		
	system("cls");
	tablero(mapa);
	escoger2(mapa);
	tres(mapa);
	ganador(mapa);
	datos();
		system("cls");	
	tablero(mapa);
	escoger(mapa);
	tablero(mapa);
	tres(mapa);
	ganador(mapa);
	datos();
}while(xd<=3);
}
}



void tablero(char mapa[8][8]){
int f,c;	
system("COLOR 0F");
   int i, j;
    
    for (i=1; i<=8; i++)
        printf("%4d", i);
    printf("\n ");
    
    for (i=0; i< 8; i++)
    { 
        printf("|");
        for (j=0; j< 8; j++)
        {
            switch (mapa[i][j])
            {
                case 1:
                	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),12); 
                    printf(" X ");
                    break;
                case 2:
                	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),11); 
                    printf(" 0 ");
                    break;
                default:
                	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),15); 
                    printf("   ");
                    break;
            }     
            printf("|");
        }
        printf("\n ");
    }
	
}

void escoger(char mapa[8][8]){
	int ag;

	printf("\n Jugador numero 1\n");
	scanf("%d", &ag);
	
	if(ag==1 && a>=0){
		mapa[a][0]=1;
		a--;
			mov++;
	mov1++;
	}
		if(ag==2 && b>=0){
		mapa[b][1]=1;
		b--;
			mov++;
	mov1++;
	}
		if(ag==3 && c>=0){
		mapa[c][2]=1;
		c--;
			mov++;
	mov1++;
	}
		if(ag==4&& d>=0){
		mapa[d][3]=1;
		d--;
			mov++;
	mov1++;
	}
		if(ag==5 && e>=0){
		mapa[e][4]=1;
		e--;
			mov++;
	mov1++;
	}
		if(ag==6 && f>=0){
		mapa[f][5]=1;
		f--;
			mov++;
	mov1++;
	}
		if(ag==7 && g>=0){
		mapa[g][6]=1;
		g--;
			mov++;
	mov1++;
	}
		if(ag==8 && h>=0){
		mapa[h][7]=1;
		h--;
			mov++;
	mov1++;
	}
	
}

void escoger2(char mapa[8][8]){
	int ag;
	
	printf("\n Jugador numero 2\n");
	scanf("%d", &ag);
	
	if(ag==1 && a>=0){
		mapa[a][0]=2;
		a--;
			mov++;
	mov2++;
	}
		if(ag==2 && b>=0){
		mapa[b][1]=2;
		b--;
			mov++;
	mov2++;
	}
		if(ag==3 && c>=0){
		mapa[c][2]=2;
		c--;
			mov++;
	mov2++;
	}
		if(ag==4&& d>=0){
		mapa[d][3]=2;
		d--;
			mov++;
	mov2++;
	}
		if(ag==5 && e>=0){
		mapa[e][4]=2;
		e--;
			mov++;
	mov2++;
	}
		if(ag==6 && f>=0){
		mapa[f][5]=2;
		f--;
			mov++;
	mov2++;
	}
		if(ag==7 && g>=0){
		mapa[g][6]=2;
		g--;
			mov++;
	mov2++;
	}
		if(ag==8 && h>=0){
		mapa[h][7]=2;
		h--;
			mov++;
	mov2++;
	}
}

int ganador(char mapa[8][8]){
int i,j;
int ganador=0;
partida2++;

	//la de la forma normal xDXDXDXD
  for(i=0;i<FILAS;i++) {
    for(j=0;j<COLUMNAS;j++) {
      if (mapa[i][j]==1 && mapa[i][j+1]==1 && mapa[i][j+2]==1 && mapa[i][j+3]==1){
	  printf("GANADOR X");
	  printf("\n\nJugadas realizadas %d\n",mov1);
	  ganador=1;
	  bandera=1;
	  jug1++;
	  xd++;
	  ho=1;
	  pri++;
	  ganador1++; 
	  system("pause"); } 
      else if (mapa[i][j]==2 && mapa[i][j+1]==2 && mapa[i][j+2]==2 && mapa[i][j+3]==2){
      	printf("GANADOR 0");
      printf("\n\nJugadas realizadas %d\n",mov2);
      	 ganador=1;
		   bandera=1; 
      	 ho=1;
      	 xd++;
      	 ganador2++;
      	  pri++;
      	  jug2++;
      	system("pause"); }
    }
  }
    if (ganador==0) {
    //De forma de torre osea lineal pero para arriba
    for(i=0;i<FILAS;i++) {
      for(j=0;j<COLUMNAS;j++) {
        if (mapa[i][j]==1 && mapa[i+1][j]==1 && mapa[i+2][j]==1 && mapa[i+3][j]==1){
    	printf("GANADOR X");
    	  printf("\n\nJugadas realizadas %d\n",mov1);
	  ganador=1;
	  
	  bandera=1;
	  ganador1++; 
	   jug1++;
	 ver=1;
	  xd++;
	  seg++;
	  system("pause");
		}   
        else if (mapa[i][j]==2 && mapa[i+1][j]==2 && mapa[i+2][j]==2 && mapa[i+3][j]==2){
        printf("GANADOR 0");
        printf("\n\nJugadas realizadas %d\n",mov2);
      	 ganador=1;
      	 bandera=1;
      ganador2++;
		  ver=1; 
		   xd++;
		     jug2++;
		   seg++;
      	system("pause");}
      }
    }
  }
    if (ganador==0) {
    //Diagonal pero la forma numero 1
    for(i=0;i<FILAS;i++) {
      for(j=0;j<COLUMNAS;j++) {
        if (i+3<FILAS && j+3<COLUMNAS) {
          if (mapa[i][j]==1 && mapa[i+1][j+1]==1 && mapa[i+2][j+2]==1 && mapa[i+3][j+3]==1){
    	printf("GANADOR X");
    	  printf("\n\nJugadas realizadas %d\n",mov1);
	  ganador=1;
	  bandera=1;
	   jug1++;
	   ganador1++; 
	  dia=1;; 
	  xd++;
	  ter++;
	  system("pause");
		}
    else if (mapa[i][j]==2 && mapa[i+1][j+1]==2 && mapa[i+2][j+2]==2 && mapa[i+3][j+3]==2){
        printf("GANADOR 0");
        printf("\n\nJugadas realizadas %d\n",mov2);
      	 ganador=1;
      	 bandera=1;
		    dia=1;;
			xd++; 
			  jug2++;
			ganador2++; 
			ter++;
      	system("pause");}
      }
                  }
      }
    }
      if (ganador==0) {
    //Diagonal pero la otra forma la 2
    for(i=0;i<FILAS;i++) {
      for(j=0;j<COLUMNAS;j++) {
        if (i+3<FILAS && j-3>=0) {
          if (mapa[i][j]==1 && mapa[i+1][j-1]==1 && mapa[i+2][j-2]==1 && mapa[i+3][j-3]==1){
    printf("GANADOR X");
      printf("\n\nJugadas realizadas %d\n",mov1);
	  ganador=1; 
	  bandera=1;
	   jug1++;
	   dia=1;; 
	   ter++;
	   xd++;
	    ganador1++; 
	  system("pause");
		  }          
          else if (mapa[i][j]==2 && mapa[i+1][j-1]==2 && mapa[i+2][j-2]==2 && mapa[i+3][j-3]==2){
        printf("GANADOR 0");
        printf("\n\nJugadas realizadas %d\n",mov2);
      	 ganador=1; 
      	 bandera=1;
      	  dia=1;; 
      	  ter++;
      	    jug2++;
      	  xd++;
      	  ganador2++;
      	system("pause");
		  }
           
        }
      }
    }
  }
  }
  
  void datos(){
  	
  	char resp;
partidas++;	

	  
    	if(ganador1==3 && partidas==3){
  		printf("Juador 1 X Ganador Indiscutible\n");
  		printf("Desea volver a jugar?\n");
  		scanf("%s", &resp);
  		if(resp=='s'){
  		 a=7,b=7,c=7,d=7,e=7,f=7,g=7,h=7;
		 ho=0,dia=0,ver=0,mov=0,mov1=0,mov2=0,raya1=0,raya2=0;
		main();
		  }else{
		  	final();
		  }
  		system("pause");

	  }
	if(ganador2==3 && partidas==3){
		printf("Juador 2 0 Ganador Indiscutible\n");
		final();
  		system("pause");
  	
  	if(partidas==4 && ganador1==2 && ganador2==2){
  		if(partidas==5 && ganador1==3 && ganador2==2){
  		printf("Juador 1 X Ganador \n");
  		final();
  		system("pause");
		  }
	  }
	  if(partidas==4 && ganador2==3 && ganador1==2){
	  	printf("Juador 2 0 Ganador Indiscutible\n");
		final();
  		system("pause");	  	
	  }
  	
	}
	if(mov==64){
		printf("Empate\n\n");
		empty++;
		printf("Movimientos para el jugador 1 %d para el jugador 2%d\n",mov1,mov2);
		printf("Tres en line para el jugador 1%d para el jugador 2%d\n",raya1,raya2);
		bandera=0;
  	 	main();		
	}
	    	if(bandera==1){
  	system("cls");
  	if(ho==1){
  		printf("Se gano de manera horizontal\n");
  		system("pause");
  		ho=0;
	  }else if(ver==1){
	  	printf("se gano de manera vertical\n");
	  	system("pause");
	  	ver=0;
	  }else if(dia==1){
	  	printf("Se gano de manera Diagonal\n");
	  	system("pause");
	  	dia=0;}
	  	
  	bandera=0;
  	 main();
  
	  }
	
  }
  void final(){
  	int total;
  	system("cls");
  	printf("Partidas Jugadas:%d\n",partida2);
  	printf("Partidas ganadas por %s\t %d \n",name1,jug1);
  	printf("Partidas ganadas por %s\t %d \n",name2,jug2);
  	printf("partidas empatadas %d\n",empty);
  	total=(empty*100)/partidas;
	  printf("Porcentajes de partidas empatadas %d\n",total);  	
  	printf("Veces que se gano de manera horizontal %d Vertical %d Diagonal %d \n",pri,seg,ter);
  	
  	
	system("pause");
  exit(0);
  }
  
void tres(char mapa[8][8]){
int i,j;
	//la de la forma normal xDXDXDXD
  for(i=0;i<FILAS;i++) {
    for(j=0;j<COLUMNAS;j++) {
      if (mapa[i][j]==1 && mapa[i][j+1]==1 && mapa[i][j+2]==1 ){
	raya1++;
	  } 
      else if (mapa[i][j]==2 && mapa[i][j+1]==2 && mapa[i][j+2]==2){
      raya2++;
      	 }
    }
  }
 
    //De forma de torre osea lineal pero para arriba
    for(i=0;i<FILAS;i++) {
      for(j=0;j<COLUMNAS;j++) {
        if (mapa[i][j]==1 && mapa[i+1][j]==1 && mapa[i+2][j]==1){
      raya1++;
	 
		}   
        else if (mapa[i][j]==2 && mapa[i+1][j]==2 && mapa[i+2][j]==2){
          raya2++;
     }
      }
    }
  
    //Diagonal pero la forma numero 1
    for(i=0;i<FILAS;i++) {
      for(j=0;j<COLUMNAS;j++) {
        if (i+3<FILAS && j+3<COLUMNAS) {
          if (mapa[i][j]==1 && mapa[i+1][j+1]==1 && mapa[i+2][j+2]==1){
      raya1++;
;
		}
    else if (mapa[i][j]==2 && mapa[i+1][j+1]==2 && mapa[i+2][j+2]==2){
          raya2++;
      	}
      }
                  }
      }
    
  
    //Diagonal pero la otra forma la 2
    for(i=0;i<FILAS;i++) {
      for(j=0;j<COLUMNAS;j++) {
        if (i+3<FILAS && j-3>=0) {
          if (mapa[i][j]==1 && mapa[i+1][j-1]==1 && mapa[i+2][j-2]==1){
  raya1++;
	  
		  }          
          else if (mapa[i][j]==2 && mapa[i+1][j-1]==2 && mapa[i+2][j-2]==2){
         raya2++;
      	
		  }
           
        }
      }
    }
  

	
}	
