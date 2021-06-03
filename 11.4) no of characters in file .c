#include<stdio.h>
int main()
{
	char filename[15],ch;
	FILE *fp;
	int ccount;
	printf("\n Enter an existing file name to be read:");
	scanf("%s",filename);
	fp=fopen(filename,"r"); //open an existing file in read mode
	if(fp==NULL)
	{
		printf("\n Unable to open file");
		return 0;
	}
	ccount=0; //initially, all counts are 0
	ch=fgetc(fp); //read a character from file
	while(ch!=EOF)
	{
		ccount++; //increment character count by 1
		ch=fgetc(fp); //again, read a character from file
	}
	fclose(fp); //close the file
	printf("\n No.of characters=%d\n",ccount);
	
}
