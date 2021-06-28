#include "sr flipflop.h"
#include<iostream>

using namespace std;

int main(){

	SR_FLIPFLOP sr_flipflop;
	int s, r;

	while(true){
		cout << "Input S and R: ";
		cin >> s >> r;

		if(s == 0 && r == 0)
			break;

		sr_flipflop.setInput(s, r);
		sr_flipflop.print();
	}

	return 0;
}