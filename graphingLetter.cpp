#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;

// function of A(x)

int letterA() {
	for(int y = 10; y > -10; y--) {
		for(int x = -10; x < 10; x++) {
			if(y == 2*x + 12 || y == -2*x + 8 || (y == 0 && x >= -5 && x <= 3)) {
				cout << ".";
			} else {
				cout << " ";
			}
		}
		cout << endl;
	}	
}

int letterL() {
		for(int y = 10; y > -10; y--) {
		for(int x = -10; x < 10; x++) {
			if((x == -5 && y >= -9 && y <= 9) || (y == -9 && x >= -5 && x <= 5)) {
				cout << "*";
			} else {
				cout << " ";
			}
		}
		cout << endl;
	}
}

void letterZ() {
	for(int y = 10; y > -10; y--) {
		for(int x = -10; x < 10; x++) {
			if((y == ((5/4)*x - 5) && x >= -5 && x <= 5) || (y == -9 && x >= -5 && x <= 5) || (y == 0 && x >= -5 && x <= 5)) {
				cout << "*";
			} else {
				cout << " ";
			}
		}
		cout << endl << " ";
	}	
}

void letterR() {
	for(int y = 10; y > -10; y--) {
		for(int x = -10; x < 10; x++) {
			if((x == -2 && y >= -9 && y <= 7) || (pow((x-1), 2) + pow((y-4), 2)) == 10 && x >= 0 || (y == -1*x && x >= -2 && x <= 9)) {
				cout << "*";
			} else {
				cout << " ";
			}
		}
		cout << endl;
	}	
}


int main() {
	letterA();
	letterL();
	letterA();
	letterZ();
	letterA();
	letterR();
}
