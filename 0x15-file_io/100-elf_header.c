#include "main.h"

/**
 * main - displays the information contained in the ELF header at the start
 * of an ELF file.
 * @ac: number of arguments passed to the program
 * @av: array of arguments
 * Return: 0 on success, 98 on error
 */
int main(int ac, char **av)
{
	int fd;
	ssize_t r;
	Elf64_Ehdr h;

	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", av[0]);
		exit(98);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot read file %s\n", av[1]);
		exit(98);
	}
	r = read(fd, &h, sizeof(h));
	if (r == -1)
	{
		close(fd);
		dprintf(STDERR_FILENO, "Error: Cannot read file %s\n", av[1]);
		exit(98);
	}
	if (h.e_ident[EI_MAG0] != ELFMAG0 || h.e_ident[EI_MAG1] != ELFMAG1 || h.e_ident[EI_MAG2] != ELFMAG2 || h.e_ident[EI_MAG3] != ELFMAG3)
	{
		close(fd);
		dprintf(STDERR_FILENO, "%s: Error: Not an ELF file - it has the wrong magic bytes at the start\n", av[1]);
		exit(98);
	}
	printf("ELF Header:\n");
	printf("  Magic:   ");

	for (int i = 0; i < EI_NIDENT; i++)
		printf("%02x ", h.e_ident[i]);
	printf("\n");
	printf("  Class:                             ");
	printf("%s\n", h.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("  Data:                              ");
	printf("%s\n", h.e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" : "2's complement, little endian");
	printf("  Version:                           %d %s\n", h.e_ident[EI_VERSION], h.e_ident[EI_VERSION] == EV_CURRENT ? "(current)" : "");
	printf("  OS/ABI:                            ");

	switch (h.e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD");
			break;
		default:
			printf("<unknown: %x>", h.e_ident[EI_OSABI]);
			break;
	}
	printf("\n");
	printf("  ABI Version:                       %d\n", h.e_ident[EI_ABIVERSION]);
	printf("  Type:                              ");
	switch (h.e_type)
	{
		case ET_NONE:
			printf("NONE (None)");
			break;
		case ET_REL:
			printf("REL (Relocatable file)");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)");
			break;
		case ET_CORE:
			printf("CORE (Core file)");
			break;
		default:
			printf("<unknown>: %x", h.e_type);
			break;
	}
	printf("\n");
	printf("  Entry point address:               %#lx\n", h.e_entry);
	close(fd);
	return (0);
}
