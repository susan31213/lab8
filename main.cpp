#include <iostream>
#include <cstdlib>
#include <ctime>
#include <new>
#include "genMino.h"
using namespace std;
int main()
{
	Mino * mino_ptr;
	srandom(time(NULL));
	Mino * mino2_ptr[50];
	try {
		for (int i=0;i<50;i++)
		{
			mino2_ptr[i] = new MinoSS[5000000];
			cout << "mino["<<i<<"] new success\n";
		}
	} catch(bad_alloc &memoryAlloc) {
		cerr << "Exception: " << memoryAlloc.what() << endl;
	}
	return 0;
}
