#include <stdio.h>

int main()
{
    float maths,science,social_study,english,gujarati,percantage;
    printf("Enter sunbject marks as asked::\n");
    printf("\nMATHS::");
    scanf("%f",&maths);
    printf("\nSCIENCE::");
    scanf("%f",&science);
    printf("\nSocial_Study::");
    scanf("%f",&social_study);
    printf("\nEnglish::");
    scanf("%f",&english);
    printf("\nGujarati::");
    scanf("%f",&gujarati);
    if(maths > 100 || science > 100 || social_study > 100 || english > 100 || gujarati > 100)
    {
        printf("\nEntered value is not currect please check::");
        exit(1);
    }
    percantage = (maths+science+social_study+english+gujarati) / 5;
    if (percantage >= 75)
        printf("\nYou have Distinction");
    else if(percantage >= 60 && percantage < 75)
        printf("\nYou have First Class");
    else if(percantage >= 50 && percantage < 60)
        printf("\nYou have Second Class");
    else if(percantage >= 35 && percantage < 50)
        printf("\nYou have Pass Class");
    else
        printf("\nYou failed try next year::");
    return(0);
}
