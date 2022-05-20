#ifndef CODEDECODER_H_INCLUDED
#define CODEDECODER_H_INCLUDED

void codedecoder()
{
        FILE *f1;
    f1=fopen("enter1.txt","a");
    printf("N.B:\n1.You need to input space after every Alphabetic Morse code value\n2.You have to press 'Enter' after decoding every value to start again\n3.To go back to options input 's' \n");
    printf("\n\n\nenter Your Text:\n\n");
    for(long long k=0;k<=1000;k++)
    {

    char str[1000],str1[1000];


	fflush(stdin);

	gets(str);

	long long j=0;
	long long i;
	for(i=0;i<=strlen(str);i++)
    {
        fflush(stdin);
        fputc(str[i],f1);

	{


		if(str[i]=='.' && str[i+1]=='_' && str[i+2]==' ')
		{
		    str1[j]='A';
		    i=i+3;
            break;

		}



         else if(str[i]=='_' && str[i+1]=='.' && str[i+2]=='.' && str[i+3]=='.' && str[i+4]==' ')
		{
		    str1[j]='B';
		    i=i+5;
            break;
		}

		else if(str[i]=='_' && str[i+1]=='.' && str[i+2]=='_' && str[i+3]=='.' && str[i+4]==' ')
		{
		    str1[j]='C';
		    break;

		}
		else if(str[i]=='_' && str[i+1]=='.' && str[i+2]=='.' && str[i+3]==' ')
		{
		    str1[j]='D';
		    break;

		}
		else if(str[i]=='.' && str[i+1]==' ')
		{
		    str1[j]='E';
		    break;

		}
		else if(str[i]=='.' && str[i+1]=='.' && str[i+2]=='_' && str[i+3]=='.' && str[i+4]==' ')
		{
		    str1[j]='F';
		    break;

		}
		else if(str[i]=='_' && str[i+1]=='_' && str[i+2]=='.' && str[i+3]==' ')
		{
		    str1[j]='G';
		    break;

		}
		else if(str[i]=='.' && str[i+1]=='.' && str[i+2]=='.' && str[i+3]=='.' && str[i+4]==' ')
		{
		    str1[j]='H';
		    break;

		}
		else if(str[i]=='.' && str[i+1]=='.' && str[i+2]==' ')
		{
		    str1[j]='I';
		    break;

		}
		else if(str[i]=='.' && str[i+1]=='_' && str[i+2]=='_' && str[i+3]=='_' && str[i+4]==' ')
		{
		    str1[j]='J';
		    break;

		}
		else if(str[i]=='_' && str[i+1]=='.' && str[i+2]=='_' && str[i+3]==' ')
		{
		    str1[j]='K';
		    break;

		}
		else if(str[i]=='.' && str[i+1]=='_' && str[i+2]=='.' && str[i+3]==' ')
		{
		    str1[j]='L';
		    break;

		}
		else if(str[i]=='_' && str[i+1]=='_' && str[i+2]==' ')
		{
		    str1[j]='M';
		    break;

		}
		else if(str[i]=='_' && str[i+1]=='.' && str[i+2]==' ')
		{
		    str1[j]='N';
		    break;

		}
		else if(str[i]=='_' && str[i+1]=='_' && str[i+2]=='_' && str[i+3]==' ')
		{
		    str1[j]='O';
		    break;

		}
		else if(str[i]=='.' && str[i+1]=='_' && str[i+2]=='_' && str[i+3]=='.' && str[i+4]==' ')
		{
		    str1[j]='P';
		    break;

		}
		else if(str[i]=='_' && str[i+1]=='_' && str[i+2]=='.' && str[i+3]=='_' && str[i+4]==' ')
		{
		    str1[j]='Q';
		    break;

		}
		else if(str[i]=='.' && str[i+1]=='_' && str[i+2]=='.' && str[i+3]==' ')
		{
		    str1[j]='R';
		    break;

		}
		else if(str[i]=='.' && str[i+1]=='.' && str[i+2]=='.' && str[i+3]==' ')
		{
		    str1[j]='S';
		    break;

		}
		else if(str[i]=='_' && str[i+1]==' ')
		{
		    str1[j]='T';
		    break;

		}
		else if(str[i]=='.' && str[i+1]=='.' && str[i+2]=='_' && str[i+3]==' ')
		{
		    str1[j]='U';
		    break;

		}
		else if(str[i]=='.' && str[i+1]=='.' && str[i+2]=='.' && str[i+3]=='_' && str[i+4]==' ')
		{
		    str1[j]='V';
		    break;

		}
		else if(str[i]=='.' && str[i+1]=='_' && str[i+2]=='_' && str[i+3]==' ')
		{
		    str1[j]='W';
		    break;

		}
		else if(str[i]=='_' && str[i+1]=='.' && str[i+2]=='.' && str[i+3]=='_' && str[i+4]==' ')
		{
		    str1[j]='X';
		    break;

		}
		else if(str[i]=='_' && str[i+1]=='.' && str[i+2]=='_' && str[i+3]=='_' && str[i+4]==' ')
		{
		    str1[j]='Y';
		    break;

		}
		else if(str[i]=='_' && str[i+1]=='_' && str[i+2]=='.' && str[i+3]=='.' && str[i+4]==' ')
		{
		    str1[j]='Z';
		    break;

		}
		else if(str[i]=='_' && str[i+1]=='_' && str[i+2]=='_' && str[i+3]=='_' && str[i+4]=='_' && str[i+5]==' ')
		{
		    str1[j]='0';
		    break;

		}
		else if(str[i]=='.' && str[i+1]=='_' && str[i+2]=='_' && str[i+3]=='_' && str[i+4]=='_' && str[i+5]==' ')
		{
		    str1[j]='1';
		    break;

		}
		else if(str[i]=='.' && str[i+1]=='.' && str[i+2]=='_' && str[i+3]=='_' && str[i+4]=='_' && str[i+5]==' ')
		{
		    str1[j]='2';
		    break;

		}
		else if(str[i]=='.' && str[i+1]=='.' && str[i+2]=='.' && str[i+3]=='_' && str[i+4]=='_' && str[i+5]==' ')
		{
		    str1[j]='3';
		    break;

		}
		else if(str[i]=='.' && str[i+1]=='.' && str[i+2]=='.' && str[i+3]=='.' && str[i+4]=='_' && str[i+5]==' ')
		{
		    str1[j]='4';
		    break;

		}
		else if(str[i]=='.' && str[i+1]=='.' && str[i+2]=='.' && str[i+3]=='.' && str[i+4]=='.' && str[i+5]==' ')
		{
		    str1[j]='5';
		    break;

		}
		else if(str[i]=='_' && str[i+1]=='.' && str[i+2]=='.' && str[i+3]=='.' && str[i+4]=='.' && str[i+5]==' ')
		{
		    str1[j]='6';
		    break;

		}
		else if(str[i]=='_' && str[i+1]=='_' && str[i+2]=='.' && str[i+3]=='.' && str[i+4]=='.' && str[i+5]==' ')
		{
		    str1[j]='7';
		    break;

		}
		else if(str[i]=='_' && str[i+1]=='_' && str[i+2]=='_' && str[i+3]=='.' && str[i+4]=='.' && str[i+5]==' ')
		{
		    str1[j]='8';
		    break;

		}
		else if(str[i]=='_' && str[i+1]=='_' && str[i+2]=='_' && str[i+3]=='_' && str[i+4]=='.' && str[i+5]==' ')
		{
		    str1[j]='9';
		    break;

		}
		else if(str[i]=='.' && str[i+1]=='_' && str[i+2]=='.' && str[i+3]=='_' && str[i+4]=='.' && str[i+5]=='_' && str[i+6]==' ')
		{
		    str1[j]='\.';
		    break;
		}

        else if(str[i]==' ')
        {
            str1[j]=' ';
        }
        else if(str[i]=='_' && str[i+1]=='_' && str[i+2]=='.' && str[i+3]=='.' && str[i+4]=='_' && str[i+5]=='_' && str[i+6]==' ')
		{
		    str1[j]=',';
		    break;
		}
        else if(str[i]=='_' && str[i+1]=='_' && str[i+2]=='_' && str[i+3]=='.' && str[i+4]=='.' && str[i+5]=='.' && str[i+6]==' ')
		{
		    str1[j]=':';
		    break;
		}
        else if(str[i]=='.' && str[i+1]=='.' && str[i+2]=='_' && str[i+3]=='_' && str[i+4]=='.' && str[i+5]=='.' && str[i+6]==' ')
		{
		    str1[j]='?';
		    break;
		}

        else if(str[i]=='s')
        {
                printf("\n Press Any key to continue.......\n");
                getch();
                system("CLS");
                options();
                break;


        }

	    j++;

	}

	}
	str1[j-1]='\0';


	puts(str1);
	fputc(str1[j],f1);
	getch();

    }

	fclose(f1);

}


#endif // CODEDECODER_H_INCLUDED
