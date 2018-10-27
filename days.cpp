#include <stdio.h>


int main()
//varibale declaration
{char dnum;

// input and output

printf("Enter  a number between 1 and 7 which corrosponds to a day of the week\n ");
scanf("%c",&dnum);
switch(dnum)
{
	{
	case '1':
    printf("Sunday\n\a");
    break;
	}
 		{
		case '2':
    	printf("Monday\n\a");
    	break;
    	
    	}
 			{
			case '3':
    		printf("Tuesday\n\a");
    		break;
    		}
				{
				case '4':
    			printf("Wednesday\n\a");
    			break;
    			}
 					{
					case '5':
    				printf("Thursday\n\a");
    				break;
    				}
						{
 						case '6':
    					printf("Friday\n\a");
    					break;
    					}
							{
							case '7':
    						printf("Satarday\n\a");
    						break ;
    						}
default:
    printf("Invalid Input\n\a");

}
return 0;
}

