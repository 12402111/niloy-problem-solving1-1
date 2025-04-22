#include<stdio.h>
int main()
{
      int i;
      char a;
      scanf("%c%d",&a,&i);

a =(26+(a-'A'-i%26))%26+ 'A';

printf("%c\n",a);
    

return 0;





}