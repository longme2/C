#include <stdio.h>
#include <string.h>
int main()
{
  char str [10] , maxString[10]="";

  int  i;
  for (i=0 ;i < 4 ;i++)
  {
   gets ( str ) ;
    if (strcmp(str,maxString)>0)  strcpy (maxString,str) ;
  }
  	puts(maxString)  ;
  return 0 ;
}
