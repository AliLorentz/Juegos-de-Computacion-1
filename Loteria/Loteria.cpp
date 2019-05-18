#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <ctype.h>

int main(){
	
int carton1[3];
int carton2[3];
int carton3[3];
int carton4[3];
int carton5[3];
int num,num1;
int band=0,aux,aux1,aux2,aux3,aux4,resp,a,b,d,e;
int f,x,c,punts=0;
	srand(time(0));
int winer[15],i=0,y,kino,ticket,gan[10],exit=1;

char resp2;
	
	//Numeros aleatorios para el ganador
do{
	
gan[10]=0;	
for(x=0;x<15;x++){
	
	winer[x]=1+rand()%(25-1);
	
	if(x>0){
		
		for(y=0;y < x;y++){
			if(winer[x]==winer[y]){
					winer[x]=1+rand()%(25-1);
				y=-1;
	
			}
			
		}
		if(winer[x]==0){
				winer[x]=1+rand()%(25-1);
			
		}
		
	}
	
}

do{
	system("cls");
printf("Numero de cartones que se generaran mayor a 2 y menor a 10\n");
scanf("%d", &resp);
fflush (stdin);
}while(resp<2 || resp > 10 );
printf("\n\n");
	ticket=1000+rand()%(9999-1000);
for(kino=0;kino<resp;kino++){
		system("pause");
	system("cls");
	printf("\tNumero del ticket\n");
ticket+=1;
	printf("\t\t%d\n\n",ticket);



	for(f=0; f<3; f++){
		for(c=0; c<5; c++){
			carton1[f]=0;
				carton2[f]=0;
					carton3[f]=0;
						carton4[f]=0;
							carton5[f]=0;
		}
	}

	
	do {

		for(c=0; c<3; c++){
		num1=1+rand()%(5-1);
		carton1[c]=num1;
}



}while(carton1[0] == carton1[1] || carton1[1] == carton1[2]  || carton1[0] == carton1[2]  );

 

		do {

		for(c=0; c<3; c++){
		num1=6+rand()%(9-6);
		carton2[c]=num1;
}

}while(carton2[0] == carton2[1] || carton2[1] == carton2[2]  || carton2[0] == carton2[2]  );



		do {

		for(c=0; c<3; c++){
		num1=10+rand()%(14-10);
		carton3[c]=num1;
}

}while(carton3[0] == carton3[1] || carton3[1] == carton3[2]  || carton3[0] == carton3[2]  );

		do {

		for(c=0; c<3; c++){
		num1=15+rand()%(20-15);
		carton4[c]=num1;
}

}while(carton4[0] == carton4[1] || carton4[1] == carton4[2]  || carton4[0] == carton4[2]  );
		do {

		for(c=0; c<3; c++){
		num1=21+rand()%(25-21);
		carton5[c]=num1;
}

}while(carton5[0] == carton5[1] || carton5[1] == carton5[2]  || carton5[0] == carton5[2]  );
	
	
	for(a=0;a<3;a++){
	for(c=0;c<3;c++){
		if(carton1[c] > carton1[c+1]){
			aux=carton1[c];
			carton1[c] = carton1[c+1];
			carton1[c+1] = aux;
			
}
}
}


	//Imprimir carton del KINO
	
		for(c=0; c<3;c++){	
			printf(" %d|",carton1[c]);
}
printf("\n--------------\n");
		for(c=0; c<3;c++){	
			printf(" %d|",carton2[c]);
}
printf("\n--------------\n");
		for(c=0; c<3;c++){	
			printf(" %d|",carton3[c]);
}
printf("\n--------------\n");
		for(c=0; c<3;c++){	
			printf(" %d|",carton4[c]);
}
printf("\n--------------\n");
		for(c=0; c<3;c++){	
			printf(" %d|",carton5[c]);
}

//Verificar GANADORES

punts=0;

		for(c=0; c<3; c++){
			for(x=0;x<15;x++){
			
			if(carton1[c] == winer[x]){
				punts+=1;
			}
			}
			}
				for(c=0; c<3; c++){
					for(x=0;x<15;x++){
					
			if(carton2[c] == winer[x]){
				punts+=1;
			}
		}
		}
				for(c=0; c<3; c++){
					for(x=0;x<15;x++){
					
			if(carton3[c] == winer[x]){
				punts+=1;
			}
			}
		}
				for(c=0; c<3; c++){
					for(x=0;x<15;x++){
			if(carton4[c] == winer[x]){
				punts+=1;
			}
			}
		}
				for(c=0; c<3; c++){
					for(x=0;x<15;x++){
			if(carton5[c] == winer[x]){
				punts+=1;
}
}
}

		
	
	printf("\n\n");
	printf("Numeros Ganadores de la loteria el tachira:\n");

for(x=0;x<15;x++){
	printf("%d", winer[x]);
	if(x<14)printf("-");
}
	printf("\n");
if(punts>11){
	printf("\tTicket Ganador\n\n\n");
	gan[0+1]=ticket;
	band=1;
	exit++;
}else{
 printf("\t No fue ganador:\n\n\n");
}
printf("numeros de ciertos %d\n",punts);


}
system("pause");
system("cls");
if(band==1){
	for(x=1;x<exit;x++){
		printf("\n tickets premiados %d\n",gan[x]);
	}
}
if(band==0){
	printf("\nNo hubo ningun ganador\n");
}

system("pause");
system("cls");


printf("Desea realizar otro sorteo? s/n\n");
         resp2=getche();
	}   while(tolower(resp2)=='s');



}
