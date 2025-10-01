#include <stdio.h>
#include <stdlib.h>
#include <time.h>  

int main(){
    srand(time(NULL));

    printf("La roue tourne...\n");

    int a = rand() %5 + 1;
    int b = rand() %5 + 1;
    int c = rand() %5 + 1;

    printf("%d %d %d\n", a, b, c);

    if (a == b && b == c) {
        printf("Bravo !");
}  
    else {
        printf("raté !");
    } 

}