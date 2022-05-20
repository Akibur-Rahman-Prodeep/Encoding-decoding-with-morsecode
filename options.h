#ifndef OPTIONS_H_INCLUDED
#define OPTIONS_H_INCLUDED
void options()
{
    int z;
    printf("                    ***********************OPTIONS*************************\n\n");
    printf("                            \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \n");
    printf("                                    1.To Encode  Enter 1\n");
    printf("                                    2.To Decode  Enter 2\n");
    printf("                                    3.To Search(Account Info)  Enter 3\n");
    printf("                                    4.To Clear all memory 4\n");
    printf("                                    5.To View all Morse value(Alphabetically) Enter 5\n");
    printf("                                    6.To Log out  Enter 6\n");
    printf("                            \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \n");
    scanf("%d",&z);
    if(z==1)
    {
        codeencoder();
    }
        else if(z==2)
        {
            codedecoder();
        }
        else if(z==3)
        {
            Search();
        }
        else if(z==4)
        {
            Delete();
        }
        else if(z==5)
        {
            view();
        }
        else if(z=6)
        {
           menu();
        }
        else
        {
            printf("Didn't Understand What do you want to do\n\n\n");
            bypass3();
        }
}


#endif // OPTIONS_H_INCLUDED
