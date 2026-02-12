#include <stdio.h>

typedef struct {
    char name[20];
    int age;
    int fixed;
} feral_friend;

int main(int argc, char *argv[]) {
    //create feral friend to write to file
    feral_friend c;

    //make file variable
    FILE* in;

    if(argc != 2) {
        printf("Expects 2 arguments.\n");
        return 0;
    }
    in = fopen(argv[1],"rb");

    if(in != NULL) {
        //read 1 struct from the file
        fread(&c, sizeof(feral_friend),1,in);
    }

    //close the file when I'm done
    fclose(in);

    printf("Feral Friend info:\n");
    printf("Name: %s\n",c.name);
    printf("Age: %d\n", c.age);
    printf("Fixed: %d\n", c.fixed);

    return 0;
}