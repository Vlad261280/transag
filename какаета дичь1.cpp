// какаета дичь.cpp: определяет точку входа для приложения.
//

#include "какаета дичь.h"
#include <cstdio>
#include <time.h>
#include <cstring>
#include <clocale>
using namespace std;
int zakaz;
int tr;
int a;
int b;
class poezd {
public:
	char stanc1[80];
	char stanc2[80];
	char trans[80];
	int massa;
	////////////////////заполнение первоначальной станции
	void zapoln(poezd g[30]) {
		zakaz = rand() % 3 + 1;
		for (int i = 0; i < zakaz; i++) {
			g[i].massa = rand() % 100 + 1;
			tr = rand() % 3 + 1;
			a = rand() % 15 + 1;
		tuda:
			 b = rand() % 15 + 1;
			switch (a) {
			case 1:
				strcpy_s(g[i].stanc1, "BREST, BELARUS");
				break;
			case 2:
				strcpy_s(g[i].stanc1, "MOGILEV, BELARUS");
				break;
			case 3:
				strcpy_s(g[i].stanc1, "KOBRIN, BELARUS");
				break;
			case 4:
				strcpy_s(g[i].stanc1, "VITEBSK, BELARUS");
				break;
			case 5:
				strcpy_s(g[i].stanc1, "MINSK, BELARUS");
				break;
			case 6:
				strcpy_s(g[i].stanc1, "BOBRUISK, BELARUS");
				break;
			case 7:
				strcpy_s(g[i].stanc1, "GRODNO, BELARUS");
				break;
			case 8:
				strcpy_s(g[i].stanc1, "POLOCK, BELARUS");
				break;
			case 9:
				strcpy_s(g[i].stanc1, "GOMEL, BELARUS");
				break;
			case 10:
				strcpy_s(g[i].stanc1, "VILEIKA, BELARUS");
				break;
			case 11:
				strcpy_s(g[i].stanc1, "OSIPOVICHI, BELARUS");
				break;
			case 12:
				strcpy_s(g[i].stanc1, "ORSHA, BELARUS");
				break;
			case 13:
				strcpy_s(g[i].stanc1, "BEREZA, BELARUS");
				break;
			case 14:
				strcpy_s(g[i].stanc1, "ZABINKA, BELARUS");
				break;
			case 15:
				strcpy_s(g[i].stanc1, "IVACEVICHI, BELARUS");
				break;
			}
			//////////////заполнение конечной станции
			switch (b) {
			case 1:
				strcpy_s(g[i].stanc2, "BREST, BELARUS");
				break;
			case 2:
				strcpy_s(g[i].stanc2, "MOGILEV, BELARUS");
				break;
			case 3:
				strcpy_s(g[i].stanc2, "KOBRIN, BELARUS");
				break;
			case 4:
				strcpy_s(g[i].stanc2, "VITEBSK, BELARUS");
				break;
			case 5:
				strcpy_s(g[i].stanc2, "MINSK, BELARUS");
				break;
			case 6:
				strcpy_s(g[i].stanc2, "BOBRUISK, BELARUS");
				break;
			case 7:
				strcpy_s(g[i].stanc2, "GRODNO, BELARUS");
				break;
			case 8:
				strcpy_s(g[i].stanc2, "POLOCK, BELARUS");
				break;
			case 9:
				strcpy_s(g[i].stanc2, "GOMEL, BELARUS");
				break;
			case 10:
				strcpy_s(g[i].stanc2, "VILEIKA, BELARUS");
				break;
			case 11:
				strcpy_s(g[i].stanc2, "OSIPOVICHI, BELARUS");
				break;
			case 12:
				strcpy_s(g[i].stanc2, "ORSHA, BELARUS");
				break;
			case 13:
				strcpy_s(g[i].stanc2, "BEREZA, BELARUS");
				break;
			case 14:
				strcpy_s(g[i].stanc2, "ZABINKA, BELARUS");
				break;
			case 15:
				strcpy_s(g[i].stanc2, "IVACEVICHI, BELARUS");
				break;
			}
			if (strcmp(g[i].stanc1, g[i].stanc2) == 0) {
				goto tuda;
			}
			/////////////транспорт
			switch (tr) {
			case 1:
				strcpy_s(g[i].trans, "avia");
				break;
			case 3:
				strcpy_s(g[i].trans, "train");
				break;
			case 4:
				strcpy_s(g[i].trans, "avto");
				break;
			}
		}
	}
}g[3];
void vivod(poezd g[30]) {
	for (int i = 0; i < 30; i++) {
		cout << "тип: " << endl;
		cout << "станция посадки: " << g[i].stanc1 << endl;
		cout << "конечная станция: " << g[i].stanc2 << endl;
		cout << endl;
	}
}
int main()
{
	srand(time(0));
	setlocale(LC_ALL, "rus");
	return 0;
}
