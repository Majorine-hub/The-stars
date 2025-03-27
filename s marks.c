#include <stdio.h>
#include <stdlib.h>

int main()
{
    float marks[3][4];
    float avg[3];
    float overall_avg;
    char *subjects[] = {"Physics","Chemistry","Math"};
    for (int i = 0; i < 3; i++){
        printf("Enter the marks for %s:\n", subjects[i]);
        for (int j = 0; j < 4; j++){
            switch(j){
                case 0: printf("Assignment:"); break;
                case 1: printf("Coursework:"); break;
                case 2: printf("Mid Term Exam:"); break;
                case 3: printf("End of Term Exam:"); break;
            }
            scanf("%f",&marks[i][j]);
        }
    }
    for(int i = 0; i < 3; i++){
        avg[i] = (marks[i][0] + marks[i][1] + marks[i][2] + marks[i][3]) / 4;
    }
    overall_avg = (avg[0] + avg[1] + avg[2]) / 3;
    printf("\n Average Marks for each subject:\n");
    for (int i = 0; i < 3; i++){
        printf("%s: %.2f\n",subjects[i], avg[i]);
    }

    printf("overall Average: %.2f\n",overall_avg);
    return 0;
}
