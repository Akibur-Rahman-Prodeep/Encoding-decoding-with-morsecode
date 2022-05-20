#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
void menu()
{
    int n;

    printf("                                            1.To Register Enter 1\n");
    printf("                                            2.To log in   Enter 2\n");
    printf("                                            3.To Exit 3\n");
    scanf("%d",&n);
    if(n==1)
    {
        reg();
    }
    else if(n==2)
    {
        Log_in();
    }


    else{
                exit(0);


    }
}


#endif // MENU_H_INCLUDED
