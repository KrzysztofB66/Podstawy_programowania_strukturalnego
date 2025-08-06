#include <stdio.h>
typedef struct Adress {
  int nr_domu;
  int nr_mieszkania;
  char ulica[30];
  char miasto[30];
} adr;
typedef struct student {
  char imie[15];
  char nazwisko[30];
  int sem;
  int id;
  adr adres;
} student;
//Zadanie1 funkcja
void wypisz(student s[], int rozmiar) {
  int i;
  for (i = 0; i < rozmiar; i++) {
    printf("\n%s\n%s\nsemestr:%d\nID:%d\n%d/%d\nUlica:%s\n%s\n\n", s[i].imie,
           s[i].nazwisko, s[i].sem, s[i].id, s[i].adres.nr_domu,
           s[i].adres.nr_mieszkania, s[i].adres.ulica, s[i].adres.miasto);
  }
}
//Zadanie2 funkcja
void zmien_adres(student *s) {
  printf("Nowy Nr domu: ");
  scanf("%d", &s->adres.nr_domu);
  printf("Nowy Nr mieszkania: ");
  scanf("%d", &s->adres.nr_mieszkania);
  printf("Nowa Ulica: ");
  scanf("%s", s->adres.ulica);
  printf("Nowe Miasto: ");
  scanf("%s", s->adres.miasto);
}
//Zadanie3 funkcja
void semestr(student s[], int rozmiar) {
  int sem, i;
  printf("Podaj semestr: ");
  scanf("%d", &sem);
  FILE *f1;
  f1 = fopen("sem.txt", "w");
  if (f1 == NULL) {
    printf("BLAD");
  }
  for (i = 0; i < rozmiar; i++) {
    if (s[i].sem == sem)
      fprintf(f1, "%s %s\n", s[i].imie,s[i].nazwisko);
  }
  fclose(f1);
}

void main() {
  student student[10] = {
      {"Mateusz", "K", 1, 12345, {7, 9, "ulica1", "Warszawa"}},
      {"Ala", "D", 1, 12340, {5, 8, "ulica2", "Warszawa"}},
      {"Hubert", "K", 1, 12300, {8, 5, "ulica3", "Olsztyn"}},
      {"Adam", "B", 1, 12000, {6, 7, "ulica4", "Lublin"}},
      {"Andrzej", "C", 2, 10000, {9, 5, "ulica5", "Krakow"}},
      {"Lukasz", "V", 2, 11000, {2, 6, "ulica6", "Gdansk"}},
      {"Jakub", "L", 2, 11100, {8, 3, "ulica7", "Bialystok"}},
      {"Robert", "H", 3, 11110, {6, 8, "ulica8", "Wroclaw"}},
      {"Julia", "M", 3, 11111, {1, 2, "ulica9", "Slask"}},
      {"Mlgorzata", "J", 3, 11112, {7, 3, "ulica10", "Puck"}}};
  
  wypisz(student, 10);

  zmien_adres(&student[0]);
  
  semestr(student, 10);
}
