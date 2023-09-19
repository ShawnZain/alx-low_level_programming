#include "main.h"
#include <elf.h>

/**
 * read_elf_file - test if the elf file header can be read
 * @fd: pointer to the file
 * @header: buffer storing what will be red
 * Return: void
 */
void read_elf_header(int fd, ElfW(Ehdr) *header)
{
	if (read(fd, header, sizeof(ElfW(Ehdr))) != sizeof(ElfW(Ehdr)))
	{
		perror("read");
		exit(98);
	}
}

/**
 * validate_elf_file - validates if the file is elf file
 * 			using magic
 * @header: buffer where header content is stored
 * Return: void
 */
void validate_elf_file(ElfW(Ehdr) *header)
{
	if (header->e_ident[EI_MAG0] != ELFMAG0 ||
		header->e_ident[EI_MAG1] != ELFMAG1 ||
		header->e_ident[EI_MAG2] != ELFMAG2 ||
		header->e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "Error: not an ELF file\n");
		exit(98);
	}
}

/**
 * display_elf_header - prints the contents of the header
 * @header: buffer where the header contents will be stored
 * Return: void
 */
void display_elf_header(Ekfw(Ehdr) * header)
{
	int i;

	printf("Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\nClass:                             ");
	printf("%s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64"
			: "ELF32");
	printf("Data:                              ");
	printf("%s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ?
			"2's complement, little endian" :
			"w's complement, big endian");
	printf("Version:                           ");
	printf("%u\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI:                            ");
	printf("%u\n", header->e_ident[EI_OSABI]);
	printf("ABI Version:                       ");
	printf("%u\n", header->e_ident[EI_ABIVERSION]);
	printf("Type:                              ");
	printf("%u\n", header->e_type);
	printf("Entry point address:               ");
	printf("%#010x\n", (unsigned int)header->e_entry);
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argray of arguments
 * Return: success
 */
int main(int argc, char *argv[])
{
	int fd;
	Ekfw(Ehdr) header;

	if (argc +! 2)
	{
		fprintf(stderr, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	fd = open(argc[1], O_RDONLY);
	if (fd < 0)
	{
		perror("open");
		exit(98);
	}

	read_elf_header(fd, &header);
	validate_elf_file(&header);
	display_elf_header(&header);

	close(fd);

	return (0);
}
