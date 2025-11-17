#include <stdio.h>
#include <stdint.h>
#include <string.h>

#define byte uint8_t 

#define Nb 4
#define Nk 4
#define Nr 10

void subBytes(byte state[4][4]);
void invSubBytes(byte state[4][4]);
void shiftRows(byte s[4][4]);
void invShiftRows(byte s[4][4]);
void mixColumns(byte s[4][4]);
void invMixColumns(byte s[4][4]);
void addRoundKey(byte s[4][4], byte rk[4][4]);
void keyExpansion(byte key[16], byte w[44][4]);

void aesEncrypt(byte in[16], byte out[16], byte key[16]);
void aesDecrypt(byte in[16], byte out[16], byte key[16]);