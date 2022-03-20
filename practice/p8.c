#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char a[10], b[10];
    puts("Enter your name1:\n");
    gets(a);

    puts("Enter your name2:\n");
    gets(b);
    // printf("%d %d",strlen(a),strlen(b));
    //  printf("%d %d", sizeof(a), sizeof(b));

  /*  if (strcmp(a, b) == 0)
        printf("string is equal");
    else

        printf("string is not equal");*/

    /*strcat(a,b);
    printf("%s",a);*/
 /*strcpy(a,b);
    printf("%s",a);*/

  //  printf("%s",strchr(a,'s'));    
    
 //  printf("%s",strrchr(a,'s'));    
    
 printf("%s",strstr(a,b));    
    
    return 0;
}
