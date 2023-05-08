#ifndef
#define
void _putchar(char c);
int append_text_to_file(const char *filename, char *text_content);
int create_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);
void print_error(char *msg);
void print_header(Elf64_Ehdr *header);
int main(int argc, char *argv[]);
#endif
