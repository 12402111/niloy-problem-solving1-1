#include<stdio.h>
int main()
{double n;

int c,f,r;

    scanf("%lf",&n);


 if(n ==(int)n)
 {c=(int)n;
 f=(int)n;
 r=(int)n;
 }


    if(n>0)
    {
      c = (int)(n+1) ;

      r = (int)(n+0.5) ;

      f = (int)n ;

    }
 if(n<0)
 {
     c = (int)(n-1) ;

      r = (int)(n-0.5) ;

      f = (int)n ;

 }

 printf("c:%d\tf:%d\tr:%d\t",c,f,r);

    return 0;

}
