#include "stdafx.h"

Sack::Sack(){
	totalWeight = 0;
}
// v vector, n tamano, p posicion
void Sack::generateSack(int p1, int p2, int p3, int p4) {
	totalWeight = rand() % 1000 + 1000;
	int currentWeight;

	if (p1 == q1 && p2 == n2) {
		imprimirV(v1, n1, false);
		file << "- ";
		imprimirV(v2, n2, true);
	}
	else {
		if (p1 < n1) {
			for (char c = 'a'; c <= 'z'; ++c) { // for (char c = '0'; c <= '1'; ++c)
				v1[p1] = c;
				generateSack(p1 + 1, p2,p3,p4);
			}
		}
		if else (p2 < n2) {
			for (int i = 0; i <= 9; ++i) { // for (int i = 0; i <= 1; ++i)
				v2[p2] = i;
				generateSack(p1, p2 + 1, p3, p4);
			}
		}
		if else(p3 < n3) {
			for (int i = 0; i <= 9; ++i) { // for (int i = 0; i <= 1; ++i)
				v2[p2] = i;
				generateSack(p1, p2 + 1, p3, p4);
			}
		}
		else {
			for (int i = 0; i <= 9; ++i) { // for (int i = 0; i <= 1; ++i)
				v2[p2] = i;
				generateSack(p1, p2 + 1, p3, p4);
			}
		}
	}
}

int _tmain(int argc, _TCHAR* argv[]) {
	int nC = 2;
	int nN = 2;

	char * vC = new char[nC];
	int * vN = new int[nN];

	combinarCaracteresRec(vC, vN, nC, nN, 0, 0);

	file.close();

	system("pause");
	return 0;
}