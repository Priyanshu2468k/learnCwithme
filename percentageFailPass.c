#include <stdio.h>

//program to find out wheather a student is pass or fail 
//student requires 40% taotal marks and at least 33% marks in each subject
//also print the subjects in which student failed

int main()
{
    int physics, chemistry, maths;
    float total;

    printf("Enter marks of physics\n");
    scanf("%d", &physics);
    printf("Enter marks of chemistry\n");
    scanf("%d", &chemistry);
    printf("Enter marks of maths\n");
    scanf("%d", &maths);

    total = (physics + maths + chemistry) / 3;
    if ((total < 40) || physics < 33 || chemistry < 33 || maths < 33)
    {
        printf(" Your percentage is %f and You are fail\n", total);
    }
    else
    {
        printf("Your percentage is %f and You are pass\n", total);
    }
    if (physics < 33 && maths < 33 && chemistry < 33)
    {
        printf("you failed in all subjects\n");
    }

    else if (physics < 33 && maths < 33)
    {
        printf("you failed in maths and physics\n");
    }
    else if (maths < 33 && chemistry < 33)
    {
        printf("you failed in maths and chemistry\n");
    }
    else if (physics < 33 && chemistry < 33)
    {
        printf("you failed in physics and chemistry\n");
    }

    else if (physics < 33)
    {
        printf("you failed in physics\n");
    }
    else if (chemistry < 33)
    {
        printf("you failed in chemistry\n");
    }
    else if (maths < 33)
    {
        printf("you failed in maths\n");
    }
    return 0;
}