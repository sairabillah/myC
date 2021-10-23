#include <stdio.h>
#define maxexam 5
#define maxtime 30

int main(){
    int numexam,i;
    int examtime[maxexam];
    int examdiff[maxetime];
    
    printf("How many exams do you have coming up?");
    scanf("%d", &numexam);
    
    for (i=1;i<=numexam;i++){
        printf("How many days do you have to study for exam %d?", i);
        scanf("%d", &examtime[i]);
    }

    for (i=0; i<=numexam; i++){
        printf("On a scale of 1 to 5, how difficult is the class for exam %d for you?", i);
        scanf("%d", &examdiff[i]);
    }

return(0);
}
