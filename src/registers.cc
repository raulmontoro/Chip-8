#include <bitset>
#include <iostream>
#include <vector>
using namespace std;

/* 
  load/store instructions and data
  V0 - VF         16 registers x 1 byte */

bitset<8> V0;
bitset<8> V1;
bitset<8> V2;
bitset<8> V3;
bitset<8> V4;
bitset<8> V5;
bitset<8> V6;
bitset<8> V7;
bitset<8> V8;
bitset<8> V9;
bitset<8> V10;
bitset<8> V11;
bitset<8> V12;
bitset<8> V13;
bitset<8> V14;
bitset<8> V15;

typedef bitset<8> word_8_bits;
vector<word_8_bits> V0_VF_registers(16);

void consulta_a() {
    for (int i = 0; i < 16; ++i) {
        cout << V0_VF_registers[i] << endl;
    }
}


