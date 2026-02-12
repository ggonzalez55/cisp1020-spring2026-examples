#include <stdio.h>

typedef struct {
    char name[20];
    int age;
    int fixed;
} feral_friend;

int main(int argc, char *argv[]) {
    //create feral friend to write to file
    feral_friend c = {"Lola", 7, 1};

    //make file variable
    FILE* out;

    if(argc != 2) {
        printf("Expects 2 arguments.");
        return 0;
    }
    out = fopen(argv[1],"wb");

    //write the struct to the file
    fwrite(&c,sizeof(feral_friend),1,out);

    //close the file when I'm done
    fclose(out);

    return 0;
}