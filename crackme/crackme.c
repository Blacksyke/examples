#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char password1[16] = "Sup3r5ekR3T";
char password2[16] = "D0ub1eSecR37";
char password3[16] = "lolassembly";

int check(char*);

int main(int argc, char *argv[]){
    if(argc < 2){
        printf("Guess the password and supply it as an argument!\n");
        exit(1);
    }

    if(check(argv[1]) != 0){
        printf("Wrong password!\n");
        exit(1);
    }
    else printf("Yeah! You got it!\n");

    return 0;
}

int check(char* input){
    int result1 = strcmp(input,password1);
    int result2 = strcmp(input,password2);
    int result3 = strcmp(input,password3);
    return result3;
}
