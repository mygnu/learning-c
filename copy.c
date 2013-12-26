
#include "header.h" //gets most common header files from my own header
#define SHELLSCRIPT "\
rsync -arv ~/git/C/ /data/OwnCloud/C_Programms/C/\
"

int main(int argc, char *argv[])
{
	puts("Will execute sh with the following script :");
	puts(SHELLSCRIPT);
	puts("Starting now:");
	system(SHELLSCRIPT);
	return 0;
}

