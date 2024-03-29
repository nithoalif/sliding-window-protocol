/*
* File : dcomm.h
*/
#ifndef _DCOMM_H
#define _DCOMM_H

/* ASCII Const */
#define SOH 1 /* Start of Header Character */
#define STX 2 /* Start of Text Character */
#define ETX 3 /* End of Text Character */
#define ENQ 5 /* Enquiry Character */
#define ACK 6 /* Acknowledgement */
#define BEL 7 /* Message Error Warning */
#define CR 13 /* Carriage Return */
#define LF 10 /* Line Feed */
#define NAK 21 /* Negative Acknowledgement */
#define Endfile 26 /* End of file character */
#define ESC 27 /* ESC key */

/* XON/XOFF protocol */
#define XON (0x11)
#define XOFF (0x13)
/* Const */
#define BYTESIZE 256 /* The maximum value of a byte */
#define MAXLEN 1024 /* Maximum messages length */
#define DATASIZE 16 /* Maximum data length */
#define RXQSIZE 8 /* Define receive buffer size */
#define WINDOWSIZE 5 /* Define window size */
#define CHECKSUMSIZE 8 /* Define length for checksum */
#define TIMEOUT 15 /* Define timeout for sending the message in seconds */

typedef unsigned char Byte;
typedef struct QTYPE {
	unsigned int count;
	unsigned int front;
	unsigned int rear;
	unsigned int maxsize;
	Byte *data;
} QTYPE;

typedef struct MESGB{
	unsigned int soh;
	unsigned int stx;
	unsigned int etx;
	Byte checksum;
	Byte msgno;
	Byte *data;
} MESGB;

#endif