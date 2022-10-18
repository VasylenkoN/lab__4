#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>

#define SMALL_LOWERCASE 0
#define BIG_LOWERCASE 1

extern char *optarg;
extern int optind, opterr, optopt;

void help();
void create_file(int mode, char* filename);


int main(int argc, char *argv[]) {
    int mode = SMALL_LOWERCASE;
    char* name = "mane.txt";

    int opt;
    if (argc == 1) {
        help();
        return 0;
    }

    while ((opt = getopt(argc, argv, "hco:")) != -1) {
        switch (opt) {
            case 'h':
                help();
                return 0;
            case 'c':
                mode = BIG_LOWERCASE;
                break;
            case 'o':
                name = optarg;
                printf("%s", optarg);
                break;
        }
    }

    create_file(mode, name);

    return 0;
}


void help() {
    printf("NAME\n"
           "       mane - write Anastasiia's favorite word into the file `mane.txt`\n\n"
           "SYNOPSIS\n"
           "       ./PR_4..2 [OPTION]...\n\n"
           "DESCRIPTION\n"
           "       -c activate special mode, where the author's word will be written in capital letters\n\n"
           "       -h display this help and exit\n\n"
           "       -o specify output file\n\n"   
    );

}

void create_file(int mode, char* filename) {
    char *word = (mode == 1) ? "DESERT\n" : "desert\n";

    FILE * fptr;
    fptr = fopen(filename, "w");
    for (int i = 0; word[i] != '\n'; i++) {
        fputc(word[i], fptr);
    }
    fputc('\n', fptr);
    fclose(fptr);
}
