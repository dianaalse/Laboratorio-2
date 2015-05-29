#include "stdafx.h"
#include "Treasure.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <fstream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[]){
	 srand(time(0));

	 Treasure t;
	 //t.printTreasure();

	 ofstream mytreasure;
	 mytreasure.open("mytreasure.txt");
	 mytreasure << t;
	 mytreasure.close();

	 return 0;
}
