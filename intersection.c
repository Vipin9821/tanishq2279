#include<stdio.h>
void main()
{
int a[5],b[5],c[5],i=0,j=0,same=0;
printf("Enter set A \n");
for(i=0;i<5;i++)
    {
     scanf("%d",&a[i]);
    }
printf("Enter set B \n");
for(i=0;i<5;i++)
    {
     scanf("%d",&b[i]);
    }
printf("Intersection of set A and set B is : ");
for(i=0;i<5;i++)
    {
     same=0;
     for(j=0;j<i;j++)
        {
         if(a[j]==a[i])
            {
              same=1;
              break;
            }
        }
    if(same==0)
        {
          for(j=0;j<5;j++)
            {
                 if(b[j]==a[i])
                {
                  printf("%d ",a[i]);
                  break;
                }
            }
        }
    }
}
