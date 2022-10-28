#include<stdio.h>   


main()
{
      int a=0,b,c,n,d;           
      printf("Quantos numeros primos? ");
      scanf("%d",&n);
      d=n*(-1);
      printf("os %i primos sao \n", n);
      do         
      {  a++;        
         c=0;
         for(b=1;b<a;b++)
             if(a%b==0)
             c++;
         if(c==1){
             printf("%i ",a);      
             d++;
                 }
      }while(d); 
      printf("\n\n");              
}          
