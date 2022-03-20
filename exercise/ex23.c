#include <stdio.h>
#include <string.h>
struct address
{
  int street;
  char *city, *country;
};

struct person
{
  int id;
  char *name;
  struct address dk;
};

int main(int argc, char const *argv[])
{
  struct person divu;

  printf("enter your id : \n");
  scanf("%d", &divu.id);
  printf("enter your name : \n");
  scanf("%s", &divu.name);
  printf("enter your street : \n");
  scanf("%d", &divu.dk.street);
  printf("enter your city : \n");
  scanf("%s", &divu.dk.city);
  printf("enter your country : \n");
  scanf("%s", &divu.dk.country);

  printf(" your id is : %d  \n", divu.id);

  printf(" your name : %s\n", divu.name);
  printf(" your street: %d \n", divu.dk.street);

  printf(" your city : \n");
  puts(divu.dk.city);
  printf(" your country : \n ");
  puts(divu.dk.country);
  return 0;
}