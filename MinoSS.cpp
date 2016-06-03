#include"MinoSS.h"
char SS_arr[2][4][4] = {{{'0','0','0','0'},
						{'0','0','0','0'},
						{'0','1','1','0'},
						{'0','0','1','1'}},
	 				   {{'0','0','0','0'},
						{'0','0','1','0'},
						{'0','1','1','0'},
						{'0','1','0','0'}}};
MinoSS::MinoSS():Mino(1){}
void MinoSS::paint()
{
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
			cout << SS_arr[rotate_index][i][j];
		cout << endl;
	}
}

