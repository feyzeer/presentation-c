#include <stdio.h>

int main()
{
    char fullname[20];
    char gender[20];
    int age;
    char phonenumber[20];

    
    printf(" what is your fullname?\n");
    scanf("%s", fullname);
    printf("how old are you?\n");
    scanf("%i",&age);
    printf("what is your phone number?\n");
    scanf("%s", phonenumber);
    printf("what is your gender?\n");
    scanf("%s", gender);
    printf("hello your full name is %s and your age is %i and your phone number is %s and your gender is %s", fullname, age, phonenumber, gender);
    return 0;
}