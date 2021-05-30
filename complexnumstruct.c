#include<stdio.h>
#include<conio.h>

int main()
{
    typedef struct complex
    {
        int real;
        int img;
    }COMPLEX;
    COMPLEX c1, c2, sum_c, sub_c;
    int option;
    do
    {
        printf("\n ############# MAIN MENU ###############");
        printf("\n Choose from the below option:");
        printf("\n 1. Read the complex numbers:");
        printf("\n 2. Display the complex Numbers:");
        printf("\n 3. Sum of the complex:");
        printf("\n 4. Subtract The complex numbers:");
        printf("\n EXIT");
        printf("\n Enter the option:");
        scanf("%d",&option);
        switch(option)
        {
            case 1: 
            printf("\n Enter the real and imaginary parts of the 1st complex number:");
            scanf("%d, %d ", &c1.real, &c1.img);
            printf("\n Enter the real and imaginary parts of the 2nd complex number:");
            scanf("%d, %d", &c2.real, &c2.img);
            break;

            case 2:
            printf("\n The first complex no. is: %d+%di", c1.real, c1.img);
            printf("\n The second complex no. is: %d+%di", c2.real, c2.img);
            break;

            case 3:
            sum_c.real= c1.real + c2.real;
            sum_c.img= c1.img + c2.img;
            printf("\n The sum of the numbers is: %d+%di", sum_c.real, sum_c.img);
            break;
            
            case 4: 
            sub_c.real=c1.real-c2.real;
            sub_c.img=c1.img-c2.img;
            printf("\n The subtraction of the numbers is: %d+%di", sub_c.real, sub_c.img);
            break;
        }
    } while (option != 5);
    getch();
    return 0;

}