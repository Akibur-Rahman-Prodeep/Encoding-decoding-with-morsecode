#ifndef DELETE_H_INCLUDED
#define DELETE_H_INCLUDED
void Delete()
{


  	FILE *f1,*f2;
    f1=fopen("enter.txt","w");
    f2=fopen("enter1.txt","w");
    fclose(f1);
    fclose(f2);
    printf("\n All Data Deleted.......\n");
    printf("\n Press Any key to continue.......\n");
    getch();

    system("CLS");

    options();
}


#endif // DELETE_H_INCLUDED
