#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
*error - print error message
*@msg: error to be printed
*Return: no return
*/

void error(char *msg)
{
	fprintf(stderr, "%s\n", msg);
	exit(1);
}

/**
*open_file - function tha open files
*@filename: name of file to be opened
*Return: file discription (fd)
*/

int open_file(char *filename)
{
	int fd = open(filename, O_RDONLY);
if (fd < 0)
{
	error("Cannot open file");
}
return (fd);
}

/**
*read_header - reads header files
*@fd: file discription
*@header: header to be read
*Return: no return
*/

void read_header(int fd, Elf64_Ehdr *header)
{
if (read(fd, header, sizeof(*header)) != sizeof(*header))
{
	error("Cannot read ELF header");
}
}

/**
*check_ elf - check if specified file is an elf header
*@header: the file to be checked
*Return: No return
*/

void check_elf(Elf64_Ehdr *header)
{
if (header->e_ident[EI_MAG0] != ELFMAG0 ||
	header->e_ident[EI_MAG1] != ELFMAG1 ||
	header->e_ident[EI_MAG2] != ELFMAG2 ||
	header->e_ident[EI_MAG3] != ELFMAG3)
{
	error("File is not an ELF file");
}
}

/**
*print_magic - prints magic of header files
*@header: header file whose magic is to be printed
*Return: no return
*/

void print_magic(Elf64_Ehdr *header)
{
	printf("Magic:   ");
for (int i = 0; i < EI_NIDENT; i++)
{
	printf("%02x ", header->e_ident[i]);
}
	printf("\n");
}

/**
*print_class - prints file class
*@header: header file whose class is to be printed
*Return: No return
*/

void print_class(Elf64_Ehdr *header)
{
printf("Class:                             %s\n",
	header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" :
	header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" :
	"Unknown");
}

/**
*print_data - prints header file data
*@header: file whose data is to be printed
*Return: No return
*/

void print_data(Elf64_Ehdr *header)
{
printf("Data:                              %s\n",
	header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
	header->e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" :
	"Unknown");
}

/**
*print_version - prints header files version
*@header: the file whose version is to be printed
*Return: No return
*/

void print_version(Elf64_Ehdr *header)
{
	printf("Version:                           %d (current)\n",
	       header->e_ident[EI_VERSION]);
}

/**
*print_osabi - prints files osabi
*@header: the file whose osabi is to be printed
*Return: No return
*/

void print_osabi(Elf64_Ehdr *header)
{
printf("OS/ABI:                            %s\n",
	header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX System V ABI" :
	header->e_ident[EI_OSABI] == ELFOSABI_HPUX ? "HP-UX ABI" :
	header->e_ident[EI_OSABI] == ELFOSABI_STANDALONE ? "Standalone (embedded) ABI" :
	"Unknown");
}

/**
*print_abi_version - prints file abi version
*@header: The file whose abi version is to be printed
*Return: No return
*/

void print_abi_version(Elf64_Ehdr *header)
{
	printf("ABI Version:                       %d\n",
	       header->e_ident[EI_ABIVERSION]);
}

/**
*print_type - prints header type
*@header: file whose type is to be printed
*Return: No return
*/

void print_type(Elf64_Ehdr *header)
{
printf("Type:                              %s\n",
	header->e_type == ET_NONE ? "NONE (No file type)" :
	header->e_type == ET_REL ? "REL (Relocatable file)" :
	header->e_type == ET_EXEC ? "EXEC (Executable file)" :
	header->e_type == ET_DYN ? "DYN (Shared object file)" :
	header->e_type == ET_CORE ? "CORE (Core file)" :
	"Unknown");
}

/**
*print_entry_point - prints file entry point
*@header: the file whose entry point is to be printed
*Return: No return
*/

void print_entry_point(Elf64_Ehdr *header)
{
	printf("Entry point address:               0x%lx\n", header->e_entry);
}

/**
*print_format - prints file format
*Retrun: No retun
*/

void print_format()
{
	printf("Format:                            ELF64\n");
}

/**
*usage - checks file usage
*Return: No return
*/

void usage()
{
	printf("Usage: elf_header elf_filename\n");
	exit(1);
}

/**
*close_ file - closes header file
*@fd: file discription
*Return: No return
*/

void close_file(int fd)
{
	close(fd);
}