//https://i.kym-cdn.com/entries/icons/original/000/029/060/cover3.jpg

#include <stdio.h>
#include <stdlib.h>
#define MAX 512

int main()
{
    int num,i=0,hex[MAX] ;
    scanf("%d",&num);
/*
    for(i=num/16;i>0;i/=16)
    {
        printf("div %d mod %d",i,i%16);
    }
    */
    while(num>0)
    {
            hex[i++] = num%16;
            num/=16;
    }
    for(i=i-1;i>=0;i--)
    {
        switch(hex[i])
        {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
                {
                   printf("%d",hex[i]);
                   break;
                }
            case 10:
                {
                    printf("%c",'A');
                    break;
                }
            case 11:
                {
                    printf("%c",'B');
                    break;
                }
            case 12:
                {
                    printf("%c",'C');
                    break;
                }
            case 13:
                {
                    printf("%c",'D');
                    break;
                }
            case 14:
                {
                    printf("%c",'E');
                    break;
                }
            case 15:
                {
                    printf("%c",'F');
                    break;
                }


        }

    }
    printf("\n");
    return 0;
}
