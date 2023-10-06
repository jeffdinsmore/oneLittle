/******

@Author Jeff Dinsmore
@Date 10/04/2023

*/

#include <stdio.h>

#define NITEMS 10

char thing[] = "spidey";

int main() {
	void displayCountUp(int count, char thingy[], int MaxCount){
		if(count % 3 == 0)
            printf("%i little %ss\n", count, thingy);
        else if(count == MaxCount)
            printf("%i little %s bugs\n", count, thingy);
        else
            printf("%i little, ", count);
	}
	void displayCountDown(int count, char thingy[], int MaxCount){
		if((MaxCount+1-count) % 3 == 0)
			printf("%i little %ss\n", count, thingy);
		else if(count == 1)
			printf("%i little %s bug\n", count, thingy);
		else
			printf("%i little, ", count);
	}
	for(int i = 1; i <= NITEMS; i++){
		displayCountUp(i, "spider", NITEMS);
	}
    printf("\n");
	for(int i = NITEMS; i >= 1; i--){
		displayCountDown(i, "spider", NITEMS);
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
    return 0;
}
