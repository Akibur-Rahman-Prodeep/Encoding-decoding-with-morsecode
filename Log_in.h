#ifndef LOGIN_H_INCLUDED
#define LOGIN_H_INCLUDED

void Log_in()
{
char checkPassword[20],checkUsername[20];
    FILE *log1;
    log1=fopen("Alldata.txt","r");
    struct login l;
    if(log1==NULL)
    {
        printf("No log in registry found!\nRegister first..\n");
        main();
    }
    else{
    printf("USER ID: ");
    scanf("%s", &checkUsername);
    printf("USER PASSWORD: ");
    scanf("%s", &checkPassword);

    while(fread(&l,sizeof(l),1,log1)==1)
    {
        if(strcmp(checkUsername,l.username)==0 && strcmp(checkPassword,l.password)==0)
        {
            system("cls");
            fclose(log1);
    printf("Done");
	printf("\n Press Any key to continue.......\n");
	getch();
	system("CLS");
	options();

    }
        else{
                system("cls");
                printf("\nPlease enter valid user id or password\n");
                printf("Try again\n");
}
    }
    fclose(log1);
	printf("\n Press Any key to continue.......\n");
	getch();
	system("CLS");
	bypass();

}
}

#endif // LOGIN_H_INCLUDED
