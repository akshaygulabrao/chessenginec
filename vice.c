#include <stdio.h>
#include "defs.h"

int main(){
	AllInit();
	U64 playBitBoard = 0ULL;

	printf("Start:\n\n");
	PrintBitBoard(playBitBoard);

	playBitBoard |= (1ULL << SQ64(D2));
	PrintBitBoard(playBitBoard);


	return 0;

}
