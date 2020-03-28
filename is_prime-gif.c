#include<stdio.h>
#include<stdlib.h>
int is_prime(int);
int main(void)
{
    int n;
    printf("請輸入n，即可得到第n個質數");
    scanf("%d",&n);
    printf("is_prime(%d)=%d",n,is_prime(n));
    system("pause");
    return 0;
    
    
    }
    
int is_prime(int n)
{             
     int i,a,k=2;
     for(i=0;i<n;i++)
        {
          a=2;
          while(a<k)
             {
              if(k%a!=0)a++;
              else
               {k++;a=2;}      
             }            
         k++;            
        }
    return k-1;               
}

