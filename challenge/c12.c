#include <stdio.h>
// #include<stdlib.h>

int main(int argc, char const *argv[])
{
    FILE *ptr = NULL;
    char string[50]="hii bhosdina kem se tu loda??";
    //    Rading a file
    // ptr = fopen("myfile.txt", "r");
    // fscanf(ptr,"%s",string);
    // printf("%s \n",string);

    // writing file
    ptr = fopen("myfile.txt", "a");
    fprintf(ptr,"%s",string);
    
    return 0;

}

