#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<math.h>
#include<string.h>
struct student
{
    char name[50];
    int mark;
};

int main(){
    int n;
    printf("Enter the number of student:\n");
    scanf("%d",&n);

    struct student students[n];
    int sum=0,max=0,min=0;
    for(int i=0;i<n;i++){
        printf("Enter the student %d name:\n",i+1);
        getchar();
        fgets(students[i].name,sizeof(students[i].name),stdin);
        students[i].name[strcspn(students[i].name,"\n")]='\0';
        printf("Enter the marks of student %d\n",i+1);
        scanf("%d",&students[i].mark);
        sum+=students[i].mark;
        if(students[i].mark>students[max].mark){
            max=i;
        }
        if(students[i].mark<students[min].mark){
            min=i;
        }

    }
    printf("\n--Students Report--\n");
    for(int i=0;i<n;i++){
        printf("%s: %d\n",students[i].name,students[i].mark);
    }
    float average=(float) sum/n;
    printf("Highest score:%s (%d)\n",students[max].name,students[max].mark);
    printf("lowest score:%s (%d)\n",students[min].name,students[min].mark);
    printf("Average score of class: %.2f\n",average);
    // file handling part

    FILE*studenet;
    studenet=fopen("miniproject.txt","w");
    fprintf(studenet, "--Students Report--\n");
    fprintf(studenet, "NAME\t\tMARKS\n");
    
    for(int i=0;i<n;i++){

        fprintf(studenet,"%-15s\t%d\n",students[i].name,students[i].mark);
    }
    fprintf(studenet,"\nHighest score:%s (%d)\n",students[max].name,students[max].mark);
    fprintf(studenet,"lowest score:%s (%d)\n",students[min].name,students[min].mark );
    fprintf(studenet,"Average score of class: %.2f\n",average);
    fclose(studenet);
    printf("Report saved successfully in miniproject.txt\n");
    return 0;
}