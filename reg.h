#ifndef REGISTE_H_INCLUDED
#define REGISTE_H_INCLUDED



struct login{
char fname[200];
char lname[50];
char username[40];
char password[40];
char phone_number[20];
};
void reg()
{
    FILE *log;
    log=fopen("Alldata.txt","a");
    struct login l;
    printf("Enter FirstName:  ");
    scanf("%s", &l.fname);
    printf("Enter LastName:  ");
    scanf("%s", &l.lname);
    printf("Enter Username:  ");
    scanf("%s", &l.username);
    printf("Enter Password:  ");
    scanf("%s", &l.password);
    printf("Enter phone_number:  ");
    scanf("%s", &l.phone_number);
    fwrite(&l,sizeof(l),1,log);

    fclose(log);

    printf("                                            Your UserName is UserId\n\n");
    printf("                                            Now Login With User Id Or Password\n\n\n\n");
    printf("\n                                          Press Space bar to continue.......\n");

    getch();

    system("CLS");
    Log_in();
}


#endif // REGISTE_H_INCLUDED
