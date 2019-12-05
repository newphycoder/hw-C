#include <stdio.h>

int main(){
	FILE *fp;
	fp = fopen("ABC.TXT","r");
	if (fp)
	{
		printf("file opened\n");
	}
	else
	{
		printf("can't open\n");
		return (-1);
	}
	char s[100];
	fgets(s,100,fp);

	int i=0;
	while(s[i])
	{
		if (s[i] >= 'a' && s[i] < 'z')
		{
			s[i]++;
		}
		if (s[i] == 'z')
		{
			s[i] = 'a';
		}
		i++;
	}
	if ( fclose(fp) == 0 )
	{
		printf("file closed\n");
	}
	else
	{
		printf("can't close\n");
	}
	fp = fopen("ABCencrypt.TXT","w");
	if (fp)
	{
		printf("file opened\n");
	}
	else
	{
		printf("can't open\n");
	}	
	fprintf(fp,"%s\n",s);
	if ( fclose(fp) == 0 )
	{
		printf("file closed\n");
	}
	else
	{
		printf("can't close\n");
	}

	return (0);
}