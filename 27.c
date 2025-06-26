#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    char sq1='A',sq2='Z';
    int current=1;
    for(int row=1;row<=num;row++)
    {
         for(int col=1;col<=num;col++)
         {
            if(current==1){
             printf("%c ",sq1);
             sq1++;
             
            }
            else{
                printf("%c ",sq2);
                sq2--;
            }
            current ^=1;
         }
         printf("\n");
    }

}

