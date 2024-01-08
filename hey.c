#include<stdio.h>
#include<conio.h>
void main()
{
  FILE *fp;
  char name[20];
  long int phoneno;
  int i;
  fp=fopen("input","w");
  for(i=1; i<=2; i++)
  {
    printf("\n enter name and phoneno");
    fscanf(stdin,"%s %ld", &name,&phoneno);
    fprintf(fp,"%s %ld",name,phoneno);
  }
  fclose(fp);
  fp=fopen("input","r");
  printf("student name phone no");
  for(i=1; i<=2; i++)
  {
    printf("\n");
    fprintf(fp,"%s %ld",name,&phoneno);
  }
  fclose(fp);
}