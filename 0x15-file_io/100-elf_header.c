#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>

#define ELF_MAGIC_SIZE 4
#define ELF_CLASS_SIZE 1
#define ELF_DATA_SIZE 1
#define ELF_VERSION_SIZE 1
#define ELF_OSABI_SIZE 1
#define ELF_ABIVERSION_SIZE 1
#define ELF_TYPE_SIZE 2
#define ELF_ENTRY_POINT_SIZE 8

/**
 *
 *
 *
 *
 *
 */
typedef struct {
	uint8_t magic[ELF_MAGIC_SIZE];
	uint8_t class;
	uint8_t data;
	uint8_t version;
	uint8_t osabi;
	uint8_t abiversion;
	uint8_t pad[7];
	uint8_t type;
	uint8_t entry;
	uint8_t pad2[9];
} Elf64_Ehdr;

void print_elf_header(const Elf64_Ehdr *header)
{
	printf("Magic: %c%c%C\n", header->magic[0], header->magic[1], header->magic[2]);
	printf("Class: %d-bit\n", (header->class == 1) ? 32 : 64);
	printf("Data: %s\n", (header->data == 1) ? "Litlle Endian" : "Big Endian");
	printf("Version: %d\n", header->version);
	printf("OS/ABI: 5d\n", header->osabi);
	printf("ABI Version: %d\n", header->abiversion);
	printf("Type: %u\n", header->type);
	printf("Entry point address: 0x%lx\n", header->entry);
}

/**
 *
 *
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (1)
	}
	const char *filename = argc[1];
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		fprintf(stderr, "Error opening file: %s\n", strerror(errno));
		return (98);
	}

	struct stat st;
	if (fstat(fd, &st) == -1)
	{
		fprintf(stderr, "Error getting file size: %s\n", strerror(errno));
		close(fd);
		return (98);
	}

	off_t file_size = st.st_size;
	if(file_size < sizeof(elf64_Ehdr))
	{
		fprintf(stderr, "Error: File is not an ELF file\n");
		close(fd);
		return (98);
	}
	Elf64_Ehdr header;
	ssize_t bytes_read = read(fd, &header, sizeof(Elf64_Ehdr));
	if (bytes_read != sizeof(Elf64_Ehdr))
	{
		frpintf(stderr, "Error reading ELF header: %s\n", stderror(errno));
		close(fd);
		return (98);
	}
	print_elf_header(&header);

	close(fd);
	return (0);
}
