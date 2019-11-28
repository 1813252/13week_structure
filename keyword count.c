#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int is_whitespace(char c);


int fget_word(FILE* fp, char *word){
	
	int cnt;
	char c;
	
	while ((c=fgetc(fp))!=EOF)
	{
		if (is_whitespace(c)==0)
		break;
	
	}
	
	if (c==EOF)
	{
		return 0;
	}
	
	cnt =0;
	word[cnt++]=c;
	word[cnt]='\0';	
	
	while ((word[cnt]=fgetc(fp))!=EOF)
	{
		if (is_whitespace(word[cnt])==1)
		{
			word[cnt]='\0';
			break;
		}
		
		cnt++;
		
	}
	
	return cnt;
}


int is_whitespace(char c){//출력은 0 또는 1 
	
	if(c== ' '||
	   c=='\n'||
	   c=='\r'||
	   c=='\t'||
	   c=='(' )
	   
	{
		return 1;	
	} 
	
	return 0;
	
	
}


int main(int argc, char *argv[]) {
	
	
	FILE *fp;
	char word[100];
	//file open 
	
	char filePath[100];
	
	printf("input the file Path : ");
	scanf("%s",&filePath);
	
	fp = fopen (filePath,"r");
	
	if (fp==NULL)
	{
		printf("file path is wrong! %s\n",filePath);
		return -1;
	}
	
	
	//word reading and analysis 
	
	while (fget_word(fp,word)!=0)
	{
		printf("%s\n",word);
		
	}
	
	//output 
	
	
	fclose(fp);

	return 0;
}
