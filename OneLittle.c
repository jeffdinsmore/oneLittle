/******

@Author Jeff Dinsmore
@Date 10/04/2023

*/

#include <stdio.h>

#define NITEMS 10

char thing[] = "spider";

int main() {
    for(int i = 1; i <= NITEMS; i++){
        if(i % 3 == 0)
            printf("%i little %ss\n", i, thing);
        else if(i == NITEMS)
            printf("%i little %s bugs\n", i, thing);
        else
            printf("%i little\n", i);
    }
    printf("\n");
    int j = 9;
    for(int i = NITEMS; i >= 1; i--){
        if((i-j) % 3 == 0)
            printf("%i little %ss\n", i-j, thing);
        else if(i == 1)
            printf("%i little %s bugs\n", i+9, thing);
        else
            printf("%i little\n", i-j);
        j = j-2;
    }
    printf("\n");
    int counter = 0;
    for(int i = NITEMS; i >=1; i--){
        counter = counter + 1;
        if(counter % 3 == 0)
            printf("%i little %ss\n", i, thing);
        else if(i == 1)
            printf("%i little %s bug\n", i, thing);
        else
            printf("%i little, ", i);
    }
    
    return 0;
}
