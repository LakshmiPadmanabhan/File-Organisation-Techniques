#include <stdio.h>
#include<string.h>
//structure to define a directory
struct directory
{
    char name[25];
    int countf;
    char fname[50][50];
    int flag[50];
}dir[100];//array of structures to indicate many directories
void main(){
    int ch,i=0,j=0,f=0,k=0,p=0,f1=0,x=0;
    int countd=0;
    char searchd[50],searchf[50];
    //Display Menu
    printf("Choices:\n  1 to Create directory\n  2 to insert file\n  3 to delete file\n  4 to search for a file\n  5 to exit");
    printf("\nEnter your choice: ");
    scanf("%d",&ch);
    while(ch!=5){
        if (ch==1) //CREATE DIRECTORY
        {
            /* code */
            printf("Enter directory name: ");
            scanf("%s",dir[k].name);
            printf("Created Directory");
            dir[k].countf=0;
            countd++;
            k++;
        }
        else if (ch==2) //INSERT FILE INTO A DIRECTORY
        {
            /* code */
            printf("Enter directory name: ");
            scanf("%s",searchd);
            f=0;
            //SEARCH THE DIRECTORY AND DO OPERATIONS ACCORDINGLY
            for(j=0;j<countd;j++){
                if (strcmp(searchd,dir[j].name)==0)
                {
                    f=1;
                    break;
                }
            }
            if (f==1) //Insert file
            {
                printf("Enter name of the file to be inserted: ");
                scanf("%s",dir[j].fname[dir[j].countf]);
                dir[j].flag[dir[j].countf]=1;
                dir[j].countf++;
                printf("Success: File Added to directory %s",dir[i].name);
            }
            else 
            {
               printf("Failed:Directory Not Found");
            }
        }
        else if (ch==3) //DELETE FILE FROM A DIRECTORY
        {
            printf("Enter directory name: ");
            scanf("%s",searchd);
            f=0;
            //SEARCH THE DIRECTORY AND DO OPERATIONS ACCORDINGLY
            for(j=0;j<countd;j++){
                if (strcmp(searchd,dir[j].name)==0)
                {
                    f=1;
                    break;
                }
            }
            if (f==1)// Delete file
            {
                f1=0;
                printf("Enter name of the file to be deleted: ");
                scanf("%s",searchf);
                for(p=0;p<dir[j].countf;p++){
                if (strcmp(searchf,dir[j].fname[p])==0 && dir[j].flag[p]==1)
                {
                    f1=1;
                    break;
                }
                }
                if (f1==1 )
                {
                    dir[j].countf--;
                    dir[j].flag[p]=0;
                    printf("Success:File %s deleted from the directory %s",searchf,searchd);
                }
                else 
                {
                    printf("Failed:File %s Not Found in directory %s",searchf,searchd);
                }
            }
            else 
            {
               printf("Failed:Directory Not Found");
            }
        }
        else if (ch==4) //SEARCH FOR A FILE IN A DIRECTORY
        {
            printf("Enter directory name: ");
            scanf("%s",searchd);
            f=0;
            //SEARCH THE DIRECTORY AND DO OPERATIONS ACCORDINGLY
            for(j=0;j<countd;j++){
                if (strcmp(searchd,dir[j].name)==0)
                {
                    f=1;
                    break;
                }
            }
            if (f==1)
            {
                printf("Directory Found\n");
                f1=0;
                printf("Enter name of the file to be searched: ");
                scanf("%s",searchf);   
                //Search file
                for(p=0;p<dir[j].countf;p++){
                if (strcmp(searchf,dir[j].fname[p])==0 && dir[j].flag[p]==1)
                {
                    f1=1;
                    break;
                }
                }
                //Print appropriate message
                if (f1==1 )
                {
                    printf("Success:File %s found in directory %s",searchf,searchd);
                }
                else 
                {
                    printf("Failed:File %s Not Found in directory %s",searchf,searchd);
                }
            }
            else 
            {
               printf("Failed:Directory Not Found");
            }
        }
        else
        {
            printf("Invalid Choice");
        }
        printf("\nEnter Choice: ");
        scanf("%d",&ch);
    }
    printf("Terminated");
}