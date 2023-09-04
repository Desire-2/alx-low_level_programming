#ifndef MAIN_H
#define MAIN_H

#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <elf.h>


void _checks_elf(unsigned char *e_ident);
void _prints_mgc(unsigned char *e_ident);
void _prints_clss(unsigned char *e_ident);
void _prints_data(unsigned char *e_ident);
void _prints_vs(unsigned char *e_ident);
void _prints_abi(unsigned char *e_ident);
void _prints_osabi(unsigned char *e_ident);
void _prints_type(unsigned int e_type, unsigned char *e_ident);
void _prints_entry(unsigned long int e_entry, unsigned char *e_ident);
void _closes_elf(int elf);


void close_file(int FD);
int append_text_to_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);
int _putchar(char c);
int create_file(const char *filename, char *text_content);

#endif
