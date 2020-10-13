#include <stdio.h>
#include<string.h>
//structure to define a directory
struct directory
{
    char name[25];
    int count;
    char fname[50][50];
    int flag[50];
}dir;
void main(){
    int ch,i=0,j=0,f=0;
    dir.count=0;
    char search[50];
    //Accept directory name
    printf("Enter directory name:");
    gets(dir.name);
    //Display menu
    printf("Choices:\n  1 to insert file\n  2 to delete file\n  3 to search for a file\n  4 to exit");
    printf("\nEnter your choice: ");
    scanf("%d",&ch);
    while(ch!=4){
        if (ch==1)//Insert a file into the directory
        {
            /* code */
            f=0;
            printf("Enter name of the file to be inserted: ");
            scanf("%s",search);
            //check whether the file is already present
            for(j=0;j<dir.count;j++){
                if (strcmp(search,dir.fname[j])==0 && dir.flag[j]==1)
                {
                    f=1;
                    break;
                }
            }
            if (f==1 && dir.flag[j]==1)
            {
                printf("Failed:File already exists in directory %s",dir.name);
            }
            else 
            {
                strcpy(dir.fname[i],search);
                dir.flag[i]=1;
                dir.count++;
                i++;
                printf("Success: File Added to directory %s",dir.name);
            }
        }
        else if (ch==2)//Delete a file from a directory
        {
            f=0;
            printf("Enter name of the file to be deleted: ");
            scanf("%s",search);
            for(j=0;j<dir.count;j++){
                if (strcmp(search,dir.fname[j])==0 && dir.flag[j]==1)
                {
                    f=1;
                    break;
                }
            }
            if (f==1)
            {
                dir.count--;
                dir.flag[j]=0;
                printf("Success:File deleted from the directory %s",dir.name);
            }
            else 
            {
               printf("Error:File Not Found in directory %s",dir.name);
            }
        }
        else if (ch==3)//search a file in a directory
        {
            f=0;
            printf("Enter name of the file to be searched: ");
            scanf("%s",search);
            for(j=0;j<dir.count;j++){
                if (strcmp(search,dir.fname[j])==0 && dir.flag[j]==1)
                {
                    f=1;
                    break;
                }
            }
            if (f==1 && dir.flag[j]==1)
            {
                printf("Success:Found file in directory %s",dir.name);
            }
            else 
            {
               printf("Failed:File Not Found in directory %s",dir.name);
            }
        }
        else
        {
            printf("Invalid Choice");
        }
        printf("\nEnter Choice: ");
        scanf("%d",&ch);
    }
    printf("Terminted");
}