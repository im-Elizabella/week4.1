#include <stdio.h>
int main ()
{
    double avg;
    double h[10];
           h[0] = 150.30;
           h[1] = 175.40;
           h[2] = 172.50;
           h[3] = 168.00;
           h[4] = 181.55;
           h[5] = 164.45;
           h[6] = 153.00;
           h[7] = 163.75;
           h[8] = 157.60;
           h[9] = 178.00;
    printf("Student 1  = %.2lf cm\n",h[0]);
    printf("Student 2  = %.2lf cm\n",h[1]);
    printf("Student 3  = %.2lf cm\n",h[2]);
    printf("Student 4  = %.2lf cm\n",h[3]);
    printf("Student 5  = %.2lf cm\n",h[4]);
    printf("Student 6  = %.2lf cm\n",h[5]);
    printf("Student 7  = %.2lf cm\n",h[6]);
    printf("Student 8  = %.2lf cm\n",h[7]);
    printf("Student 9  = %.2lf cm\n",h[8]);
    printf("Student 10 = %.2lf cm\n",h[9]);
    avg = (h[0] + h[1] + h[2] + h[3] + h[4] + h[5] + h[6] + h[7] + h[8] + h[9]) / 10.00;
    printf ("Average Height is %.2lf cm",avg);
    return 0;
}
