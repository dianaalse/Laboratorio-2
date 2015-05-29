#include "stdafx.h"

Sack::Sack(){
	int totalweight=0;

}

// v vector, n tamano, p posicion
void Sack::generateSack(Coin** ocoins, Ring** orings,Crown** ocrowns, Collar** ocollars,int q1,int q2,int q3,int q4,int p1,
		int p2, int p3, int p4) {
	if (p1 == q1 && p2 == q2 && p3 == q3 && p4 == q4) {
		imprimirV(v1, n1, false);
		file << "- ";
		imprimirV(v2, n2, true);
	} else {
		if (p1 < q1) {
			for (char c = 'a'; c <= 'z'; ++c) { // for (char c = '0'; c <= '1'; ++c)
				v1[p1] = c;
				generateSack(v1, v2, n1, n2, p1 + 1, p2);
			}
		} else {
			for (int i = 0; i <= 9; ++i) { // for (int i = 0; i <= 1; ++i)
				v2[p2] = i;
			   generateSack(v1, v2, n1, n2, p1, p2 + 1);
			}
		}
	}
}
