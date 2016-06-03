#include <cstdlib>
#include "genMino.h"
#define NUM_MINO 6
#define MINO_S 0
#define MINO_l 1
#define MINO_T 2
#define MINO_L 3
#define MINO_LL 4
#define MINO_SS 5
Mino * genMino()
{
	int mino_type;
	Mino * ptr;

	mino_type = random() % 2 + 4;
	switch(mino_type) {
		case MINO_S:
			ptr = new MinoS();
			break;
		case MINO_l:
			ptr = new Minol();
			break;
		case MINO_T:
			ptr = new MinoT();
			break;
		case MINO_L:
			ptr = new MinoL();
			break;
		case MINO_LL:
			ptr = new MinoLL();
			break;
		case MINO_SS:
			ptr = new MinoSS();
			break;
	}
	return ptr;
}
