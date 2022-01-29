// Program to check if a student is passed or failed given he has more than 33 marks in all 3 subjects and total aggregate of more than 44.
#include <stdio.h>

int main(){
    int physics, chemistry, maths, total;

    printf("Enter marks in physics: \n");
    scanf("%d", &physics);

    printf("Enter marks in chemistry: \n");
    scanf("%d", &chemistry);

    printf("Enter marks in maths: \n");
    scanf("%d", &maths);

    total = (physics + chemistry + maths) / 3;

    if(maths >= 33 && chemistry >= 33 && physics >= 33 && total >= 44)
    {
        printf("You have successfully passed the exam");
    }

    else
    {
        printf("You have failed the exam!");
    }


}