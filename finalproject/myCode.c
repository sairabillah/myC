#include <stdio.h>
#define MAXNUM 5
#define MAXTIME 30
#define FREEDAY 7
int main(){
    int numexam,i;
    int examtime[MAXNUM];
    int examdiff[MAXNUM];
    int freetime[FREEDAY];

    /* finding how many exams the student has*/   
    printf("How many exams do you have coming up? ");
    scanf("%d", &numexam);
    if (numexam >= MAXNUM){ //number of exams has to be under 6
        printf("Please enter a value under 6: ");
        scanf("%d", &numexam);}
    /*finding how much time you have and how difficult each exam is*/
    for (i = 1; i <= numexam; i++){
        printf("How many days do you have to study for exam %d? ", i);
        scanf("%d", &examtime[i]);
            if (examtime[i] > MAXTIME) {
                printf("Please enter a time from 0 to 30 days: ");
                scanf("%d", &examtime[i]);}
        printf("On a scale of 1 to 5, how difficult is the class for exam %d for you? ", i);
        scanf("%d", &examdiff[i]);
            if (examdiff[i]<1 || examdiff[i]>5){
                printf("Please enter a valid number: ");
                scanf("%d", &examdiff[i]);}
    }
    /*finding how much free time the user has each day of the week */
    printf("Now we want to find how much free time you have to study during the week");
    

}
return(0);
}
