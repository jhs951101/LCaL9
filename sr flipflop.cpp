#include "sr flipflop.h"
#include "nand.h"
#include<iostream>

using namespace std;

SR_FLIPFLOP::SR_FLIPFLOP(){
	this->Q = 0;
}

void SR_FLIPFLOP::setInput(int s, int r){
	this->S = s;
	this->R = r;

	this->processing();
}

void SR_FLIPFLOP::processing(){
	
	gate_NAND nand;

	nand.setInput(this->R, this->Q);
	this->not_Q = nand.getOutput();

	nand.setInput(this->S, this->not_Q);
	this->Q = nand.getOutput();

}

void SR_FLIPFLOP::print(){
	cout << "Result: " << this->Q << endl;
	cout << endl;
}