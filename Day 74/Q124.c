
#include <stdio.h>

int main(){

  FILE *fr;
  FILE *fw;
  fr = fopen("source.txt", "r");
  fw = fopen("destination.txt", "w");

  char ch;
  char source[100], destination[100];
  while ((ch = fgetc(fr)) != EOF){
    fputc(ch, fw);
  }
  
  printf("File copied to destination.txt");
  fclose(fr);
  fclose(fw);
  
}