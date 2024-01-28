#include<stdio.h>
#include<math.h>
int main()
{
    int choice;
    float temp,convertedtemp;
    printf("Temperature converted manu:\n");

    printf("1.farenheit to celcious :\n");
    printf("2.Celcious to farenheit:\n");
    printf("Enter any choice:\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
         printf("Enter any temperature:");
         scanf("%f",&temp);
         convertedtemp=(temp-32)/1.8;
         printf("The celcious is:%f\n",convertedtemp);



        }
        case 2:
        {
         printf("Enter any temperature:");
         scanf("%f",&temp);
         convertedtemp=(temp*1.8)+32;
         printf("The is fahrenheit:%f\n",convertedtemp);



        }
        default :
        {
            printf("wrong input");
        }

    }

}
