#include <stdio.h>
#include <time.h>
//6
const char* sprawdz(int wiersze,int kol,int tab1[wiersze][kol],int n){
	int i,j,count=0;
	for (i=0;i<=wiersze-1;i++)
	{
		for (j=0;j<=kol-1;j++)
		{
			if (tab1[i][j]==n)
			{
				count++;
			}
		}
		
	}
	if (count>0){
		return "Tak ta liczba wystepuje w macierzy.";
	}
	else{
		return "Nie ta liczba nie wystepuje w macierzy.";
	}
}
void main(){
srand(time(NULL));
	int tab1[10][10],i,j,max,diag,m,suma=0,sumatab1=0,d
	,suma_nad=0,suma_pod=0,kolumna;
	float sredniacal,sredniakol;
	for(i=0;i<=9;i++){
		for(j=0;j<=9;j++){
			tab1[i][j]=(rand()%10);
			printf("%d ",tab1[i][j]);
		}
		printf("\n");
	}
	
	printf("\n \n");
	/*
	//1
	for(i=0;i<=9;i++){
		max=tab1[i][0];
		for(j=0;j<=9;j++){
			if(max<tab1[i][j]){
			max=tab1[i][j];
			m=j;
			}}
		diag=tab1[i][i];
		tab1[i][i]=max;
		tab1[i][m]=diag;
		//printf("%d ",tab1[i][j]);
		}
	
			printf("\n");
			
		for(i=0;i<=9;i++){
		for(j=0;j<=9;j++){
			
			printf("%d ",tab1[i][j]);
		}
		printf("\n");
	}	
	*/
	/*
	//2
	for(j=0;j<=9;j++){
		for(i=0;i<=9;i++){
		 suma=suma + tab1[i][j];
		}
		printf("srednia kolumny %d=%f \n",j+1,(float)suma/10);
		suma=0;
	}
	*/
	/*
	//3
		for(i=0;i<=9;i++){
			for(j=0;j<=9;j++){
		 	sumatab1=sumatab1 + tab1[i][j];
			}
		}
		sredniacal = (float)sumatab1/100;
		printf("srednia tablicy %f \n",sredniacal);
		
		for(j=0;j<=9;j++){
		for(i=0;i<=9;i++){
		 suma=suma + tab1[i][j];
		}
		sredniakol=(float)suma/10;
		if(sredniakol>sredniacal){
			printf("kolumna %d \n",j+1);
		}
		suma=0;
	}
	*/
	/*
	//4
		//suma nad diagonalą
		kolumna=1;
		for(i=0;i<=9;i++){
			for(j=kolumna;j<=9;j++){
		 	suma_nad=suma_nad + tab1[i][j];
			}	
			kolumna++;	
		}
		printf("suma nad diagonalą %d \n",suma_nad);
		//suma pod diagonalą
		kolumna=8;
		for(i=9;i>=0;i--){
			for(j=kolumna;j>=0;j--){
		 	suma_pod=suma_pod + tab1[i][j];
			}	
			kolumna--;	
		}
		printf("suma pod diagonalą %d \n",suma_pod);
		if (suma_nad==suma_pod)
		{
			printf("suma elementow nad diagonala i pod diagonala SA rowne");
		}
		else{
			printf("suma elemnetow nad diagonala i pod NIE SA rowne");
		}
	*/
	/*
	//5
	printf("Zadanie 5 \n");
	for(i=0;i<=9;i++){
		for(j=0;j<=9;j++){
			if (j%2==0)
			{
				d=(rand()%(99-10+1)+10);
				while (d%2!=0)
				{
					d=(rand()%(99-10+1)+10);
				}
				tab1[i][j]=d;
			}
			else
			{
				d=(rand()%(99-10+1)+10);
				while (d%2==0)
				{
					d=(rand()%(99-10+1)+10);
				}
				tab1[i][j]=d;
			}
			
			
			printf("%d ",tab1[i][j]);
		}
		printf("\n");
	}
	
	printf("\n \n");
	*/
	/*
	//6
	//ilość wierszy, ilość kolumn, tablica, liczba.
	printf("%s",sprawdz(10,10,tab1,0));
	*/
}
