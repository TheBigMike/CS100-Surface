//template for testing code
//download with: wget troll.cs.ua.edu/ACP-C/tester.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
    {
    double exams[3];
    double papers[4];
    double exam_ave = 0;
    double paper_ave = 0;
    
    printf("What are your three exam scores? Seperate scores with a space.\n");
    scanf("%lf %lf %lf",&exams[0],&exams[1],&exams[2]);
    printf("What are your four paper scores? Seperate scores with a space.\n");
    scanf("%lf %lf %lf %lf",&papers[0],&papers[1],&papers[2],&papers[3]);
    
    exam_ave = (exams[0]+exams[1]+exams[2])/3;
    paper_ave = (papers[0]+papers[1]+papers[2]+papers[3])/4;
    double course_ave = (exam_ave*.2)+(paper_ave*.1);
    printf("The exam average is %.2lf and the paper average is %.2lf.\n",exam_ave,paper_ave);
    printf("After weighting, these scores alone will give you a course score of %.2lf out 100 percent. Remember however that papers and exams only count for 30 percent of total course score.",course_ave);
    return 0;
    }
