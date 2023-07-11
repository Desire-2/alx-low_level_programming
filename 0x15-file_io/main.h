#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <errno.h>
#include <elf.h>

#define BUFFER_SIZE 1024

ssize_t read_textfile(const char *filename, size_t letters);

int create_file(const char *filename, char *text_content);

int append_text_to_file(const char *filename, char *text_content);

int main(int argc, char *argv[]);


int open_file(const char *path, int flags, mode_t mode);
void copy_file(int fd_from, int fd_to);
void close_file(int fd);

/*
void verify_elf(unsigned char *e_ident);
void print_m(unsigned char *e_ident);
void print_c(unsigned char *e_ident);
void print_d(unsigned char *e_ident);
void print_vsn(unsigned char *e_ident);
void print_abi_ve(unsigned char *e_ident);
void print_oper(unsigned char *e_ident);
void print_type_elf(unsigned int e_type, unsigned char *e_ident);
void print_entry_pnt(unsigned long int e_entry, unsigned char *e_ident);
void close_elf_file(int elf);
*/

void check_elf(unsigned char *e_ident);

void print_magic(unsigned char *e_ident);

void print_class(unsigned char *e_ident);

void print_data(unsigned char *e_ident);

void print_version(unsigned char *e_ident);

void print_abi(unsigned char *e_ident);

void print_osabi(unsigned char *e_ident);

void print_type(unsigned int e_type, unsigned char *e_ident);

void print_entry(unsigned long int e_entry, unsigned char *e_ident);

void close_elf(int elf);
#endif
