#include <stdio.h>
#include <time.h>
void pierwsza(int tab1[],int rozmiartab){
	int j,ile=0,count=0,i;
	for(i=0;i<rozmiartab;i++){
		
		for (j=1;j<=tab1[i];j++){
			if(tab1[i]%j==0){
				ile++;
			}
		}
		if (ile==2){
	 		count++;
		}
		ile=0;
	}
	return count;
}

int main(){
//1.
	/*
	srand(time(NULL));
	int tab[10], i;
	for(i=0;i<10;i++){
		tab[i]=(rand()%10)-2;
		printf("%d \n", tab[i]);
	}
	*/
//2
	/*
	srand(time(NULL));
	int tab[10], i, min=7, max=-2,suma=0;
	for(i=0;i<10;i++){
		tab[i]=(rand()%10)-2;
		if(tab[i]<min){
			min=tab[i];
		}
		else if(tab[i]>max){
			max=tab[i];
		}
		suma=suma+tab[i];
	}
	printf("max=%d \nmin=%d \nsuma=%d",max,min,suma);
	*/
//3
	/*
	srand(time(NULL));
	int tab[10], i, count=0,suma=0;
	for(i=0;i<10;i++){
		tab[i]=(rand()%10)-2;
		if(tab[i]%2==0){
			suma=suma+tab[i];
			count++;
		}		
	}
	printf("srednia liczb parzystych=%f",(float)suma/count);
	*/
//4
	/*
	srand(time(NULL));
	int tab[10], i, a;
	for(i=0;i<10;i++){
		a=rand()%90+10;
	while(a%3!=0 && a%5!=0){
		a=rand()%90+10;
	}
	tab[i]=a;
	printf("%d \n", tab[i]);
	*/
//5
	/*(time(NULL));
	int tab[10], i,pr=0,rozmiar;
	for(i=0;i<10;i++){
		tab[i]=(rand()%10)-2;
		printf("%d \n", tab[i]);
	}
	rozmiar =sizeof(tab)/sizeof(int);
	printf("Liczby pierwsze=%d",pierwsza(tab, rozmiar));	
	return 0;*/
//6
	srand(time(NULL));
	int tab[10], i,a,rozmiar,b=0;
	rozmiar=sizeof(tab)/sizeof(int);
	for(i=0;i<10;i++){
		tab[i]=(rand()%10)-2;
		printf("%d \n" ,tab[i]);
	}

	printf("------------------------\n");

	for(i=0;i<rozmiar;i++){
	
		if (tab[i]<0) //sprawdzanie czy liczba < 0.
		{
			a=tab[i];//zapisywanie ujemnej liczby.
			for (i; i>b; i--)
			{
				tab[i]=tab[i-1];//przesuwanie elementów w prawo do momentu tab[i]
			}
			tab[b]=a;//zapisywanie liczby ujemnej na początku kolejno tak jak występują w tablicy
			b++;
		}
	}
	for(i=0;i<rozmiar;i++){//wynik
		printf("%d \n" ,tab[i]);
	}
}

