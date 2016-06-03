#include <iostream>
#include <cstdlib>
#include <ctime>
#include "genMino.h"
using namespace std;
int main()
{
	Mino * mino_ptr;
	srandom(time(NULL));
	
	mino_ptr = new MinoLL();
	mino_ptr->paint();
	delete mino_ptr;

	Mino * mino2_ptr;
	mino2_ptr = new MinoSS();
	mino2_ptr->paint();
	delete mino2_ptr;
	return 0;
}
