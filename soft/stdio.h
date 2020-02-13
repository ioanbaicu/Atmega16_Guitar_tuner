// CodeVisionAVR V2.0 C Compiler
// (C) 1998-2010 Pavel Haiduc, HP InfoTech S.R.L.

// Prototypes for standard I/O functions

#ifndef _STDIO_INCLUDED_
#define _STDIO_INCLUDED_

#include <stdarg.h>

#ifndef NULL
#define NULL 0
#endif

#ifndef EOF
#define EOF -1
#endif

#pragma used+

char getchar(void);
void putchar(char c);
void puts(char *str);
void putsf(char flash *str);
int printf(char flash *fmtstr,...);
int sprintf(char *str, char flash *fmtstr,...);
int vprintf(char flash * fmtstr, va_list argptr);
int vsprintf(char *str, char flash * fmtstr, va_list argptr);

#ifdef _MODEL_TINY_
char *gets(char *str,unsigned char len);
int snprintf(char *str, unsigned char size, char flash *fmtstr,...);
int vsnprintf(char *str, unsigned char size, char flash * fmtstr, va_list argptr);
#else
char *gets(char *str,unsigned int len);
int snprintf(char *str, unsigned int size, char flash *fmtstr,...);
int vsnprintf(char *str, unsigned int size, char flash * fmtstr, va_list argptr);
#endif

int scanf(char flash *fmtstr,...);
int sscanf(char *str, char flash *fmtstr,...);

#ifdef _USE_FATFS_
#include <ff.h>
int fgetc(FIL *fp);
char *fgets(char *str,unsigned int len,FIL *fp);
int fputc(char k,FIL* fp);
int fputs(char *str,FIL* fp);
int fputsf(char flash *str,FIL* fp);
int fprintf(FIL *fp, char flash *fmtstr,...);
int fscanf(FIL *fp, char flash *fmtstr,...);
unsigned char feof(FIL* fp);
unsigned char ferror(FIL *fp);
#endif

// USARTC0 will be used as default USART for the ATxmega chips
#ifdef _ATXMEGA_DEVICE_
#ifndef _ATXMEGA_USART_
#define _ATXMEGA_USART_ USARTC0
#endif
#endif

#pragma used-

#pragma library stdio.lib

#endif

