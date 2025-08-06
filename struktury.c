#include <stdio.h>
typedef struct ad
{
    char ulica[256];
    int numer_domu;
    int numer_mieszkania;
    int kod;
    char miasto[256];
}adres;
typedef struct pracownicy
{
    char imie[256];
    char nazwisko[256];
    char pesel[12];
    char email[256];
    adres adr;
}pr;
void zmiana_adresu(pr*pracownik){
    adres nowy;
    gets(nowy.ulica);
    gets(nowy.miasto);
    scanf("%d",&nowy.kod);
    scanf("%d",&nowy.numer_domu);
    scanf("%d",&nowy.numer_mieszkania);
    pracownik->adr=nowy;
}
void main(){
    int i =0;
    //pracownik 1
    pr P1 = {"Ala","Kot","11111111111","alakot@mail.com",{"ULICA",5,15,00001,"warszawa"}};
    //pracownik 2
    pr P2 = {"Adam","C","22222222222","adamk@mail.com",{"Inna ulica",7,6,00001,"warszawa"}};
    //wypisywanie pracownik 1 
    zmiana_adresu(&P1); 
}
