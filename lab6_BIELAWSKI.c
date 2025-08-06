#include <stdio.h>
#include <time.h>
// Zadanie 1
void napis(char znaki[256], int k) {
  int i = 0, j;
  while (znaki[i] != '\0') {
    for (j = 0; j < k; j++) {
      printf("%c", znaki[i]);
    }
    printf(" ");
    i++;
  }
}
// Zadanie 2
void spacja(char znaki[256], int k) {
  int i = 0, j = 0;
  while (znaki[i] != '\0') {
    printf("%c", znaki[i]);
    i++;
    j++;
    if (j == (k)) {
      printf(" ");
      j = 0;
    }
  }
}
// Zadanie 3
void slowa(char znaki[256]) {
  int i = 0, a = 0, j;
  // pierwsze slowo
  while (znaki[i] != ' ') {
    printf("%c", znaki[i]);
    i++;
  }
  i = 0;
  // ilosc znakow
  while (znaki[i] != '\0') {
    i++;
  }
  // ostatni
  i = i - 1;
  while (znaki[i] != ' ') {
    i--;
  }
  // wypisywanie ostatniego odwrotnie
  i = i + 1;
  printf(" ");
  while (znaki[i] != '\0') {
    printf("%c", znaki[i]);
    i++;
  }
}
// Zadanie 5 funkcja
int cztery(int b){
  int count=0,j=0;
    for(j=b;j>0;j--){
      if(b%j==0){
        count++;
      }
  }
  if (count==4){
    return 1;
  }
  else{
    return 0;
  }
}

int main(void) {
  /*
    char znakiinput[256];
    gets(znakiinput);
    napis(znakiinput, 3);
    return 0;
  */
  /*
  char znakiinput[256];
  gets(znakiinput);
  spacja(znakiinput, 3);
  return 0;
  */
  /*
  char znakiinput[256];
  gets(znakiinput);
  slowa(znakiinput);
  return 0;
  */
  /*
  //ZADANIE 4
  int i=0,j=0,dlugie=0,k=0;
  char zdanie[256],slowo[256],wiekszy[256];
  gets(zdanie);
  while(zdanie[i]!='\0'){
    slowo[j]=zdanie[i];
    if(slowo[j] == ' '){
        j=0;
        if (k>dlugie)
        {
            while(slowo[j] != '\0')
            {
                wiekszy[j]=slowo[j];
                j++;
            }
            dlugie=k;
        }
        j=-1;
        k=-1;
    } 
    i++;j++;k++;
  }
  j=0;
  if (k>dlugie)
        {
            while(slowo[j] != '\0')
            {
                wiekszy[j]=slowo[j];
                j++;
            }
            dlugie=k;
        }
  i=0;
  while(i<=dlugie){
    printf("%c",wiekszy[i]);
    i++;
  }
  */
 //Zadanie 5
  FILE*f1;
  f1=fopen("dane.txt","w");
  if(f1==NULL){
    printf("BLAD");
  }
  srand(time(NULL));
  int i=0,a,j,tab_dane[10],suma_max=0,suma;
  for(i=0;i<10;i++){
    a=(rand() % (89)) + 10;
    while(cztery(a)!=1){
      a=(rand() % (89)) + 10;
    }
    tab_dane[i]=a;
    printf("%d ",tab_dane[i]);
    fprintf(f1,"%d ",a);
  }
  fclose (f1);
  for(i=0;i<9;i++){
    suma=tab_dane[i]+tab_dane[i+1];
    if(suma>suma_max){
      suma_max=suma;
      j=i;
    }
    suma=0;
  }
  FILE*f2;
  f2=fopen("wynik.txt","w");
  if(f2==NULL){
    printf("BLAD");
  }
  fprintf(f2,"%d %d",tab_dane[j],tab_dane[j+1]);
  fclose(f2);
  
  
}