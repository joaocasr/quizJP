#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

#include "../include/menu.h"

int geraNumero(int n){
    int num=0;
    unsigned seed = time(0);
    srand(seed);
    while(num%2==0) num = (rand() % (n - 1 + 1)) + 1;
    return num;
}

int mystrcmp(char *s1,char *s2){
    int i;
    for(i=0; s1[i]!='\0'; i++){
        if( toupper(s1[i])!=toupper(s2[i]) )
            return 1;           
    }
    return 0;
}

void katakanaTest(){
        int score =0;
               while(score!=100){
               FILE * fp;
               fp = fopen("katakana.txt","r");
               if(fp == NULL) {
                    perror("Error opening file");
                    return(-1);
               }
               char str[10];
               char ans[10];
               int i =0;
               int number = geraNumero(218);
               while(i<number && fgets(str,10,fp)){
                    i++;
               }
               printf("--->   %s",str);
               scanf("    %s", ans);
               fgets(str,10,fp);
               if(mystrcmp(strcat(ans,"\n"),str)==0){
                    score += 5;
                    printf("Correct! - Score :%d\n",score);
                    printf("#################################################\n");
               }else{
                    score -= 5;
                    printf("Incorrect! - Score : %d\n",score);
                    printf("#################################################\n");
               }

              fclose(fp);
               }
          system("clear");
          printf("     おめでとう!!\n     You reached 100 points!\n");

}



void hiraganaTest(){
	int score =0;
               while(score!=100){
               FILE * fp;
               fp = fopen("hiragana.txt","r");
               if(fp == NULL) {
                    perror("Error opening file");
                    return(-1);
               }
               char str[10];
               char ans[10];
               int i =0;
               int number = geraNumero(169);
               while(i<number && fgets(str,10,fp)){
                    i++;
               }
               printf("--->   %s",str);
               scanf("    %s", ans);
               fgets(str,10,fp);
               if(mystrcmp(strcat(ans,"\n"),str)==0){
                    score += 5;
                    printf("Correct! - Score :%d\n",score);
		    printf("#################################################\n");
               }else{
                    score -= 5;
                    printf("Incorrect! - Score : %d\n",score);
		    printf("#################################################\n");
               }

              fclose(fp);
               }
	  system("clear");
	  printf("     おめでとう!!\n     You reached 100 points!\n");

}

int main() {
int option;
escreveMenu();
printf("Choose Option: ");
scanf("%d",&option);
switch(option){
	case 1:;
		hiraganaTest();
        case 2:;
	        katakanaTest();
	       
	case 0:;
	        return 0;
           }
}

