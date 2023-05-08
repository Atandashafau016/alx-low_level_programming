#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

void error(char* message) {
    fprintf(stderr, "%s\n", message);
    exit(98);
}

int main(int argc, char** argv) {
    if (argc != 2) {
        error("Usage: elf_header elf_filename");
    }

    char* filename = argv[1];
    int fd = open(filename, O_RDONLY);
    if (fd < 0) {
        error("Cannot open file");
    }

    Elf64_Ehdr header;
    if (read(fd, &header, sizeof(header)) != sizeof(header)) {
        error("Cannot read ELF header");
    }

    if (header.e_ident[EI_MAG0] != ELFMAG0 ||
        header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 ||
        header.e_ident[EI_MAG3] != ELFMAG3) {
        error("File is not an ELF file");
    }

    printf("Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", header.e_ident[i]);
    }
    printf("\n");

    printf("Class:                             %s\n",
        header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" :
        header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" :
        "Unknown");

    printf("Data:                              %s\n",
        header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
        header.e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" :
        "Unknown");

    printf("Version:                           %d (current)\n",
        header.e_ident[EI_VERSION]);

    printf("OS/ABI:                            %s\n",
        header.e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX System V ABI" :
        header.e_ident[EI_OSABI] == ELFOSABI_HPUX ? "HP-UX ABI" :
        header.e_ident[EI_OSABI] == ELFOSABI_STANDALONE ? "Standalone (embedded) ABI" :
        "Unknown");

    printf("ABI Version:                       %d\n",
        header.e_ident[EI_ABIVERSION]);

    printf("Type:                              %s\n",
        header.e_type == ET_NONE ? "NONE (No file type)" :
        header.e_type == ET_REL ? "REL (Relocatable file)" :
        header.e_type == ET_EXEC ? "EXEC (Executable file)" :
        header.e_type == ET_DYN ? "DYN (Shared object file)" :
        header.e_type == ET_CORE ? "CORE (Core file)" :
        "Unknown");

    printf("Entry point address:               0x%lx\n",
        header.e_entry);

    printf("Format:                            ELF64\n");

    close(fd);
    return 0;
}
