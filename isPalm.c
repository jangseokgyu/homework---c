#include <stdio.h>
#include <string.h>

int isPalindrome(char *tmp)
{
  int result =0;
	int size = strlen(tmp) - 1;
	char temp[strlen(tmp)];

	for (int i = 0; i < strlen(tmp); i++)
	{
		temp[i] = tmp[size];
		size--;
	}

  for (int i = 0; i < strlen(tmp); i++)
	{
		if(temp[i] == tmp[i])
      result++;
    else
      break;      
	}

  if(result == strlen(tmp))
    return 1;
  else
    return 0;
}

int main()
{
  char *str1 = "live on time,emit no evil";

  printf("\"%s\" is %sa palindrome.\n",str1,isPalindrome(str1) ? "" : "NOT ");
}
