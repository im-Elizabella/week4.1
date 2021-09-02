#include <stdio.h>
int main ()
{
    double avg;
    int h[10];
        h[0] = 150;
        h[1] = 175;
        h[2] = 172;
        h[3] = 168;
        h[4] = 181;
        h[5] = 164;
        h[6] = 153;
        h[7] = 163;
        h[8] = 157;
        h[9] = 178;
    printf("Student 1  = %d cm\n",h[0]);
    printf("Student 2  = %d cm\n",h[1]);
    printf("Student 3  = %d cm\n",h[2]);
    printf("Student 4  = %d cm\n",h[3]);
    printf("Student 5  = %d cm\n",h[4]);
    printf("Student 6  = %d cm\n",h[5]);
    printf("Student 7  = %d cm\n",h[6]);
    printf("Student 8  = %d cm\n",h[7]);
    printf("Student 9  = %d cm\n",h[8]);
    printf("Student 10 = %d cm\n",h[9]);
    avg = (h[0] + h[1] + h[2] + h[3] + h[4] + h[5] + h[6] + h[7] + h[8] + h[9]) / 10.0;
    printf ("Average Height is %lf cm",avg);
    return 0;
}