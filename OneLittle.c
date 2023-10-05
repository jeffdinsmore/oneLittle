/******

@Author Jeff Dinsmore
@Date 10/04/2023

*/

#include <stdio.h>

#define NITEMS 10

char thing[] = "spider";
//char things = "";
int main() {
	
	void displayCountUp(int count, char thing[], int MaxCount){
		if(count % 3 == 0)
            printf("%i little %ss\n", count, thing);
        else if(count == MaxCount)
            printf("%i little %s bugs\n", count, thing);
        else
            printf("%i little\n", count);
	}
	void print(char things[]){
		printf("%s", things);
	}
		for(int i = 1; i <= NITEMS; i++){
			displayCountUp(i, thing, NITEMS);
		}
		/*for(int i = 1; i <= NITEMS; i++){
			//displayCount(i, NITEMS)
        if(i % 3 == 0)
            printf("%i little %ss\n", i, thing);
        else if(i == NITEMS)
            printf("%i little %s bugs\n", i, thing);
        else
            printf("%i little\n", i);
    }*/
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
    print("Happy");
    return 0;
}
