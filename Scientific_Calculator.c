#include<stdio.h>
int main()
{

    int c;
    double a,b;
    printf("Select Your Option for calculate\n\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");

    scanf("%d", &c);
switch(c){
    case 1:
        printf("Enter Your two value for Addition:\n\n");
        scanf("%lf%lf", &a,&b);
        printf("%.15g+%.15g = %.5g\n",a,b, a+b);
        break;
        case 2:
        printf("Enter Your two value for Subtraction:\n\n");
        scanf("%lf%lf", &a,&b);
        printf("%.15g-%.15g = %.5g\n",a,b, a-b);
        break;

        case 3:
        printf("Enter Your two value for Multiplication:\n\n");
        scanf("%lf%lf", &a,&b);
        printf("%.15g*%.15g = %.5g\n",a,b, a*b);
        break;

        case 4:
        printf("Enter Your two value for Division:\n\n");
        scanf("%lf%lf", &a,&b);
        printf("%.15g/%.15g = %.5g\n",a,b, a/b);
        break;





}

}
