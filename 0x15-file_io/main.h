#ifndef
#define
void _putchar(char c);
int append_text_to_file(const char *filename, char *text_content);
int create_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);
int main(int argc, char *argv[]);
void close_file(int fd);
void usage();
void print_format();
void print_entry_point(Elf64_Ehdr* header);
void print_type(Elf64_Ehdr* header);
void print_abi_version(Elf64_Ehdr* header);
void print_osabi(Elf64_Ehdr* header);
void print_data(Elf64_Ehdr* header);
void print_version(Elf64_Ehdr* header);
void print_class(Elf64_Ehdr* header);
void print_magic(Elf64_Ehdr* header);
void check_elf(Elf64_Ehdr* header);
int open_file(char* filename);
void read_header(int fd, Elf64_Ehdr* header);
void error(char* msg);
#endif
