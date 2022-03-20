#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   float math,physics,chemistry,totalsub,totalmathphy;
   char eligible,ineligible;

   printf("Input Mathematics score:");
   scanf("%f", &math);

   printf("Input Physics score:");
   scanf("%f", &physics);

   printf("Input Chemistry score:");
   scanf("%f", &chemistry);

totalsub= (math+physics+chemistry);
totalmathphy= (math+physics);

   printf("Candidate scores are:\n %.2f in Mathematics\n %.2f in physics\n %.2f in Chemistry\n", math,physics,chemistry);
   printf("Total subject score: %.2f\nTotal mathematics and physics score: %.2f\n", totalsub,totalmathphy);


   if (math>=60)
       if (physics>=50)
         if (chemistry>=40)
           if (totalsub>=200||totalmathphy>=150)
            printf("The candidate is eligible for admission.\n");
        else
            printf("The candidate is ineligible for admission.\n");
     else
        printf("The candidate is ineligible for admission.\n");
   else
    printf("The candidate is ineligible for admission.\n");
else
printf("The candidate is ineligible for admission.\n");

return 0;

}
