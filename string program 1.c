#include<stdio.h>
#include<string.h>
main()
{
  char name[100],name1[100],add[100],compare[100];
  int length,output;
  
  printf("enter the string : ");
  gets(name);
  fflush(stdin);
  printf("enter the string : ");
  gets(name1);
  
  length=strlen(name);
  printf("\n length of string is=%d", length);
  strcat(name,name1);
  printf("\n the string is=%s",name);
  output=strcmp(name,name1);
  printf("\n the string is=%d",output);
  strcpy(name,name1);
  printf("\n the string is=%s",name);
  strlwr(name);
  printf("\n the string is=%s",name);
  strupr(name);
  printf("\n the string is=%s",name);
  strrev(name);
  printf("\n the string is=%s",name);
}

