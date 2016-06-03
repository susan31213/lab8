#ifndef MINO_SS_H
#define MINO_SS_H
#include <iostream>
#include "Mino.h"
using namespace std;
class MinoSS: public Mino
{
	public:
		MinoSS();
		virtual void paint();
};
#endif
