#include<stdio.h>
#include<string.h>
strdelstr( char *s, const char *search)
{ 
  size_t        l               = strlen(s);
  size_t        n               = strlen(search);
  size_t        i;
  size_t        a               = 0;
  size_t        b               = 0;

  for( i = 0; i < l; i++)
    if( memchr( search, s[i], n))
      _strdelchr( s, i, &a, &b);
  _strdelchr( s, l, &a, &b);
  s[++a] = '\0';
  return l - a;
}
int main()
{
	char str[100],ch;
	
	printf("Enter String: ");
	gets(str);
	printf("Enter Char: ");
 	scanf("%c",&ch);
 	
	trdelstr(&str,&ch);
	
	puts(str);
	return 0;
}
