#include<stdio.h>
#include<string.h>

int main()
{
    char*pa="cara";
    char in[10];
   printf("adivina la palabra\n");
   printf("tienes 3 intentos\n");

    printf("\nintento #1 introduce la plabra:\n");
    scanf("%s",in);
    if(strcmp(pa,in)==0){
        printf("adivinaste en el 1 intento");
        return 0;}

    printf("\nintento #2 introduce la plabra: \n");
    scanf("%s",in);
        if(strcmp(pa,in)==0){
            printf("adivinaste en el 2 intento");
            return 0;}

    printf("\nintento #3 introduce la plabra:\n");
    scanf("%s",in);
        if(strcmp(pa,in)==0){
            printf("adivinaste en el 3 intento");
            return 0;}

    printf("\n PERDISTE");

return 0;

}
