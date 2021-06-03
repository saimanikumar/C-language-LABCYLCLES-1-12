#include<stdio.h>
#include<string.h>
int main()
{
        FILE *fp;
        char ch,temp[15],word[15],filename[15];
        int count=0;

        printf("\n Enter file name:");
        scanf("%s",filename);
        fp=fopen(filename,"w");
        fflush(stdin);
        printf("\n Enter the text (end with \n):");
        ch=getchar();
        while(ch!='\n')
        {
                fputc(ch,fp);
                ch=getchar();
        }
        fclose(fp);
        printf("\n Enter the word to be searched:");
        scanf("%s",word);
        fp=fopen(filename,"r");
        while(!feof(fp))
        {
                fscanf(fp,"%s",temp);
                if(strcmp(temp,word)==0)
                count++;
        }
        fclose(fp);
        printf("\n \'%s\' is found at %d locations",word,count);
}
