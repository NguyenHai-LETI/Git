#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <math.h>

int index_first_even (int str[], int num )
{
	int index1;
	int i;
	for (i=0; i<num; i++)
		{
			if (str[i]%2==0 && str[i]!=0)
			{
				index1=i;
				break;
			}																				}
										}
	return index1;
}

int index_last_odd(int str[],int num)
{
	int index2;
	int i;
	for(i=0; i<num;i++)
		{
			if (str[i]%2!=0)
			{ 
				index2 = i;	
			}
		}	
	return index2;	
}

int sum_between_even_odd(int str[],int num)
{
	int sum1=0;
	int index1 = index_first_even(str,num);
	int index2 = index_last_odd(str,num); 
	int i;
	  for (i=index1;i<index2;i++)
	  {
		sum1 += abs (str[i]);
	  }
	 return sum1;	
}

int sum_before_even_and_after_odd(int str[],int num)
{
	int sum2=0;
	int index1 = index_first_even (str,num );
	int index2 = index_last_odd(str,num); 
	int i;
	for (i=0; i<index1;i++)
	{
		sum2+=abs(str[i]);
	}
	for (i=index2;i<num;i++)
	{
		sum2+=abs(str[i]);
	}
	return sum2;	
}

int main()
{
	char ch[1000];
	int str[100], n;
	char* cut ;
	gets(ch);
	cut = strtok(ch," ");
	n = atoi (cut);
	int num = 0;
	while (cut!=NULL)
	{
		cut = strtok (NULL," ");
		if (cut!=NULL)
		{
			str[num] = atoi(cut);
			num++;
		}
	}
}
switch (n){
	case 0 : printf ("%d",index_first_even(str,num)); break;
	case 1 : printf ("%d",index_last_odd(str,num)); break;
	case 2 : printf ("%d",sum_between_even_odd(str,num)); break;
	case 3 : printf ("%d",sum_before_even_and_after_odd(str,num)); break;
	default : printf ("Данные некорректны");
	}
	return 0;
}
