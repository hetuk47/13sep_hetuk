//Here clrscr() is not working with the file conio.h as this file only work
//in dos base so we have used system("cls") with stdlib.h file.

#include <stdio.h>
#include <stdlib.h>

float simple_interest(float,float,int);
float compaund_interest(float,float,int);

int main()
{
    float interest_rate, capital_amount, final_amount,final_interest;
    int number_of_year,break_int = 1;
    char choose, continue_calculat;
    system("cls");
    do
    {
        system("cls");
        printf("\nPlease Enter the capital amount::");
        scanf("%f",&capital_amount);
        printf("\nPlease Enter the interest rate on capital amount::");
        scanf("%f",&interest_rate);
        printf("\nPlease enter the number of years for interest on capital amount::");
        scanf("%d",&number_of_year);
        printf("\nPlease enter s for simple interest and c for compaund interest::");
        for(;;)
        {
            fflush(stdin);
            scanf("%c",&choose);
            fflush(stdin);

            switch(choose)
            {
                case 's':
                    final_interest = simple_interest(capital_amount,interest_rate,number_of_year);
                    final_amount = final_interest + capital_amount;
                    break_int = 1;
                    break;
                case 'c':
                    final_amount = compaund_interest(capital_amount,interest_rate,number_of_year);
                    final_interest = final_amount - capital_amount;
                    break_int = 1;
                    break;
                default:
                    printf("\nPlase choos properly");
                    break_int = 0;
                    break;
            }
            if(break_int == 1)
                break;
        }
        printf("\nThe final amount after %d years of %f is %f with interest of %f::\n",number_of_year,capital_amount,final_amount,final_interest);
        printf("Do you want to continue calculate other values.\nPleas press y to continue::");
        fflush(stdin);
        scanf("%c",&continue_calculat);
    }
    while(continue_calculat == 'y');

    return(0);
}

/*
Simpam interest equation
Simple interest = Pxrxn
where
P = Principal amount
r = interest in %
n = number of year
*/
float simple_interest(float c_amount, float int_rate, int y)
{
    float amount = c_amount*(int_rate/100)*y;
    return(amount);
}
/*
Compaund interest equation
compaund interest = Px(1+r)^n-P
where
P = principal amount
r = interest rate in %
n = number of years
*/
float compaund_interest(float c_amount, float int_rate, int y)
{
    float amount = 0;
    amount = c_amount + ((c_amount) * (int_rate/100));
    for(int i = 1; i < y; i++)
    {
            amount = amount + ((amount) * (int_rate/100));
    }
    return(amount);
}
