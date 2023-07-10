#include<stdio.h>
int main(void)
{
   int capital , small , number , other , i ;
   char  str[81] ;

   printf("Please don`t put spaces:::\n");

   printf("Enter a word ::");
   scanf("%s",str);

   capital  = 0;
   small = 0;
   number = 0;
   other  = 0;
   i = 0;

   for(i = 0 ; str[i] != '\0' ; i++)
   { 
        if(str[i] >= 'A' &&  str[i] <= 'Z' )
        {
           capital = capital + 1 ;
        }
   
       else if(str[i] >= 'a' &&  str[i] <= 'z' )
        {
           small = small + 1 ;
        }
       
       else  if(str[i] >= '0' &&  str[i] <= '9' )
        {
           number = number + 1 ;
        }
       else
        {
           other = other + 1 ;
        }
   }
    printf("capital ＝%d \n",capital);
    printf("Small ＝%d \n",small);
    printf("Numbers ＝%d \n",number);
    printf("Others ＝%d \n",other);

return 0 ;
  
}
