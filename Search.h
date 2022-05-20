#ifndef SEARCH_H_INCLUDED
#define SEARCH_H_INCLUDED
void Search()
{

char checkUsername[20];
    FILE *log3;
    log3=fopen("Alldata.txt","r");
    struct login l;
    if(log3==NULL)
    {
        printf("No info found!\nRegister first..\n");
        main();
    }
    else{
    printf("USER ID: ");
    scanf("%s", &checkUsername);
    while(fread(&l,sizeof(l),1,log3)==1)
    {
        if(stricmp(checkUsername,l.username)==0 )
        {
            system("cls");
 printf("The Info:\nFirst Name: %s\nLast Name: %s\nUser Name: %s\n Phone Number: %s",l.fname,l.lname,l.username,l.phone_number);
            fclose(log3);
    ("\n Press Any key to continue.......\n");
	getch();
	system("CLS");
        options();

        }
        else
        {
             system("cls");
                printf("\nPlease enter valid user id \n");
                printf("Try again\n");
        }
    }
        fclose(log3);
	printf("\n Press Any key to continue.......\n");
	getch();
	system("CLS");
	bypass();



}
}

#endif // SEARCH_H_INCLUDED
