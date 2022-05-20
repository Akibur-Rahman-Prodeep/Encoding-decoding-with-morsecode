#ifndef ENCODER_H_INCLUDED
#define ENCODER_H_INCLUDED
struct Search
{
    char str[1000];
};
void codeencoder()
{
    FILE *f1;
    f1=fopen("enter.txt","a");
    struct Search n;
    char str1[1000];


	fflush(stdin);
	printf("\n\n\n\nEnter Your Text:\n\n");
	gets(n.str);
   fwrite(&n,sizeof(n),1,f1);
	long long j=0;
	for(long long i=0;i<=strlen(n.str);i++)
	{
	    fputc(n.str[i],f1);

		switch(toupper(n.str[i]))
		{
		  case 'A':
		  str1[j++]='.';
		  str1[j++]='-';
		  str1[j]=' ';
		  break;

		  case 'B':
		  str1[j++]='-';
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j]=' ';
		  break;

		  case 'C':
		  str1[j++]='-';
		  str1[j++]='.';
		  str1[j++]='-';
		  str1[j++]='.';
		  str1[j]=' ';
		  break;

		  case 'D':
		  str1[j++]='-';
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j]=' ';
		  break;

		  case 'E':
		  str1[j++]='.';
		  str1[j]=' ';
		  break;

		  case 'F':
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j++]='-';
		  str1[j++]='.';
		  str1[j]=' ';
		    break;

		  case 'G':
		  str1[j++]='-';
		  str1[j++]='-';
		  str1[j++]='.';
		  str1[j]=' ';
		  break;

		  case 'H':
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j]=' ';
		    break;

		   case 'I':
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j]=' ';
		    break;

		case 'J':
		  str1[j++]='.';
		  str1[j++]='-';
		  str1[j++]='-';
		  str1[j++]='-';
		  str1[j]=' ';
		    break;

		case 'K':
		  str1[j++]='-';
		  str1[j++]='.';
		  str1[j++]='-';
		  str1[j]=' ';
		    break;

		case 'L':
		  str1[j++]='.';
		  str1[j++]='-';
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j]=' ';
		  break;

		case 'M':
		  str1[j++]='-';
		    str1[j++]='-';
		    str1[j]=' ';
		    break;

		case 'N':
		  str1[j++]='-';
		  str1[j++]='.';
		  str1[j]=' ';
		    break;

		case 'O':
		  str1[j++]='-';
		  str1[j++]='-';
		  str1[j++]='-';
		  str1[j]=' ';
		    break;

		case 'P':
		  str1[j++]='.';
		  str1[j++]='-';
		  str1[j++]='-';
		  str1[j++]='.';
		  str1[j]=' ';
		    break;

		case 'Q':
		  str1[j++]='-';
		  str1[j++]='-';
		  str1[j++]='.';
		  str1[j++]='-';
		  str1[j]=' ';
		    break;

		case 'R':
		  str1[j++]='.';
		  str1[j++]='-';
		  str1[j++]='.';
		  str1[j]=' ';
		    break;

		case 'S':
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j]=' ';
		    break;

		case 'T':
		  str1[j++]='-';
		  str1[j]=' ';
		    break;

		case 'U':
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j++]='-';
		  str1[j]=' ';
		    break;

		case 'V':
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j++]='-';
		  str1[j]=' ';
		    break;

		case 'W':
		  str1[j++]='.';
		  str1[j++]='-';
		  str1[j++]='-';
		  str1[j]=' ';
		    break;

		case 'X':
		  str1[j++]='-';
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j++]='-';
		  str1[j]=' ';
		    break;

		case 'Y':
		  str1[j++]='-';
		  str1[j++]='.';
		  str1[j++]='-';
		  str1[j++]='-';
		  str1[j]=' ';
		    break;

		case 'Z':
		  str1[j++]='-';
		  str1[j++]='-';
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j]=' ';
		    break;

		case '0':
		  str1[j++]='-';
		  str1[j++]='-';
		  str1[j++]='-';
		  str1[j++]='-';
		  str1[j++]='-';
		  str1[j]=' ';
		    break;

		case '1':
		  str1[j++]='.';
		  str1[j++]='-';
		  str1[j++]='-';
		  str1[j++]='-';
		  str1[j++]='-';
		  str1[j]=' ';
		    break;

		case '2':
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j++]='-';
		  str1[j++]='-';
		  str1[j++]='-';
		  str1[j]=' ';
		    break;

		case '3':
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j++]='-';
		  str1[j++]='-';
		  str1[j]=' ';
		    break;

		case '4':
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j++]='-';
		  str1[j]=' ';
		    break;

		case '5':
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j]=' ';
		    break;

		case '6':
		  str1[j++]='-';
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j]=' ';
		    break;

		case '7':
		  str1[j++]='-';
		  str1[j++]='-';
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j]=' ';
		    break;

		case '8':
		  str1[j++]='-';
		  str1[j++]='-';
		  str1[j++]='-';
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j]=' ';
		    break;

		case '9':
		  str1[j++]='-';
		  str1[j++]='-';
		  str1[j++]='-';
		  str1[j++]='-';
		  str1[j++]='.';
		  str1[j]=' ';
		    break;

		case '.':
		  str1[j++]='.';
		  str1[j++]='-';
		  str1[j++]='.';
		  str1[j++]='-';
		  str1[j++]='.';
		  str1[j++]='-';
		  str1[j]=' ';
		    break;

		case ',':
		  str1[j++]='-';
		  str1[j++]='-';
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j++]='-';
		  str1[j++]='-';
		  str1[j]=' ';
		    break;

		case ':':
		  str1[j++]='-';
		  str1[j++]='-';
		  str1[j++]='-';
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j]=' ';
		    break;

		case '?':
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j++]='-';
		  str1[j++]='-';
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j]=' ';
		    break;

		case '-':
		  str1[j++]='-';
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j++]='-';
		  str1[j]=' ';
		    break;

		case '(':
		  str1[j++]='-';
		  str1[j++]='.';
		  str1[j++]='-';
		  str1[j++]='-';
		  str1[j++]='.';
		  str1[j]=' ';
		    break;

		case ')':
		  str1[j++]='-';
		  str1[j++]='.';
		  str1[j++]='-';
		  str1[j++]='-';
		  str1[j++]='.';
		  str1[j++]='-';
		  str1[j]=' ';
		    break;

		case '"':
		  str1[j++]='.';
		  str1[j++]='-';
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j++]='-';
		  str1[j++]='.';
		  str1[j]=' ';
		    break;

		case '+':
		  str1[j++]='.';
		  str1[j++]='-';
		  str1[j++]='.';
		  str1[j++]='-';
		  str1[j++]='.';
		  str1[j]=' ';
		    break;

		case '/':
		  str1[j++]='-';
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j++]='-';
		  str1[j++]='.';
		  str1[j]=' ';
		    break;


		case '&':
		  str1[j++]='.';
		  str1[j++]='-';
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j]=' ';
		    break;

		/*case '$':
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j]='-';
		    break;

		case '*':
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j]='-';
		    break;

		case '^':
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j]='-';
		    break;*/

		case '!':
		  str1[j++]='-';
		  str1[j++]='.';
		  str1[j++]='-';
		  str1[j++]='.';
		  str1[j++]='-';
		  str1[j++]='-';
		  str1[j]=' ';
		    break;

		case '@':
		  str1[j++]='.';
		  str1[j++]='-';
		  str1[j++]='-';
		  str1[j++]='.';
		  str1[j++]='-';
		  str1[j++]='.';
		  str1[j]=' ';
		    break;

		case '=':
		  str1[j++]='-';
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j++]='.';
		  str1[j++]='-';
		  str1[j]=' ';
		    break;

        case ' ':
		  str1[j++]=' ';
		  str1[j]=' ';
		    break;
		}
	    j++;
	}
	str1[j-1]='\0';
	puts(str1);
	getch();

	fclose(f1);
	printf("\n Press Any key to continue.......\n");
	getch();
	system("CLS");
	options();
}


#endif // ENCODER_H_INCLUDED
