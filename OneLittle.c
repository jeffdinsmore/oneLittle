/******

Program - Create a program that will display counting of a thing
		  in sequential order and reverse order
@Author - Jeff Dinsmore
@Date - 10/04/2023

*/

#include <stdio.h>

#define NITEMS 7

char countUpThing[] = "ant";
char countDownThing[] = "beetle";

int main() {
	void displayCountUp(int count, char thing[], int MaxCount){
		if(count == MaxCount)
            printf("%i little %s bugs\n", count, thing);
		else if(count % 3 == 0)
            printf("%i little %ss\n", count, thing);
        else
            printf("%i little, ", count);
	}
	void displayCountDown(int count, char thing[], int MaxCount){
		if(count == 1)
			printf("%i little %s bug\n", count, thing);
		else if((MaxCount+1-count) % 3 == 0)
			printf("%i little %ss\n", count, thing);
		else
			printf("%i little, ", count);
	}
	for(int i = 1; i <= NITEMS; i++){
		displayCountUp(i, countUpThing, NITEMS);
	}
    printf("\n");
	for(int i = NITEMS; i >= 1; i--){
		displayCountDown(i, countDownThing, NITEMS);
	}
    return 0;
}
