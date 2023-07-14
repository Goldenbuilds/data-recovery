#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[])
{
	if (argc != 2)
    {
        printf("Usage: ./recover IMAGE\n");
        return 1;
    }
	// Open memory card
    FILE *memorycard = fopen(argv[1], "r");

	
    // Check if file was successfully opened
    if (memorycard == NULL) {
        printf("FILE NOT FOUND!");
        return 1;
    }else{
			printf("we are good");
		}

   //now find the jpegs
	
}
