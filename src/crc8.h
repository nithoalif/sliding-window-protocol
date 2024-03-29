/* 	
	Nama file : crc8.h
	Deskripsi : Mengenerate checksum dari frame menggunakan aturan CRC-8
*/
#ifndef _CRC8_H
#define _CRC8_H

#include <cstdio>
#include <string.h>
#include <iostream>
#include <vector>

using namespace std;

#define nPoly 9 // 8 + 1;
//#define nFrame 184 //(jumlah frame + 1) * 8

class crc8
{
public:
	crc8(string chf);
	//crc8(string chf, char chsm[]);
	void axor();
	void crc();
	
	/* Getter */	
	char getElmtFrame(int idx);
	char getElmtCheckSum(int idx);
	char getElmtPolynomial(int idx);
	/* Setter */
	void setElmtFrame(int idx, char ch);
	void setElmtCheckSum(int idx, char ch);

	/* Convert char-binary */
	void convertFrame();
	void hexingCheckSum();

	/* Error Detection */
	bool isError();

	~crc8();

	/* data */
	char* Frame; // Frame representasi biner
	char CheckSum[nPoly]; // Checksum representasi biner
	string SFrame;
	string hexCS;
	char Polynomial[nPoly];
	int a;
	bool Error;
};

#endif