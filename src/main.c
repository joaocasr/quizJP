#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <unistd.h>

#define SIZE 1024


#include "../include/menu.h"

int geraNumero(int n){
    int num=0;
    //unsigned seed = time(0);
    srand((unsigned int)time(NULL));
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
               while(1){
               FILE * fp;
               fp = fopen("katakana.txt","r");
               if(fp == NULL) {
                    perror("Error opening file");
                    exit(1);
               }
               char str[SIZE];
               char ans[SIZE];
               int i =0;
               int number = geraNumero(218);
               while(i<number && fgets(str,10,fp)){
                    i++;
               }
               printf("\n \n \n \n \n \n \n \n \n \n \n \n \n \n \t \t \t \t \t \t \t \t \t \t \t \t  %s",str);
	       scanf("%s", ans);
               fgets(str,SIZE,fp);
               if(mystrcmp(strcat(ans,"\n"),str)==0){
                    score += 5;
		    printf("\n\n\n\n\n\n\n\n\n \t \t \t \t \t \t \t                                 Correct! - Score :%d\n",score);
                    printf("\n###########################################################################################################################################################################################################\n");
		    sleep(2);
		    system("clear");
               }else{
                    score -= 5;
		                        printf("\n\n\n\n\n          \t \t \t \t \t \t \t                          Incorrect! - Score : %d\n",score);
                    printf("\n###########################################################################################################################################################################################################\n");
		    sleep(5);
		    system("clear");
               }

          fclose(fp);
	  if(score%100==0 && score>0){
	  system("clear");
          printf(" おめでとう!!\n You reached %d points!\n",score);
	  }
     }

}



void hiraganaTest(){
	int score =0;
               while(1){
               FILE * fp;
               fp = fopen("hiragana.txt","r");
               if(fp == NULL) {
                    perror("Error opening file");
                    exit(1);
               }
               char str[SIZE];
               char ans[SIZE];
               int i =0;
               int number = geraNumero(169);
               while(i<number && fgets(str,10,fp)){
                    i++;
               }
                    printf("\n \n \n \n \n \n \n \n \n \n \n \n \n \n \t \t \t \t \t \t \t \t \t \t \t \t  %s",str);
                    scanf("%s", ans);
               fgets(str,SIZE,fp);
               if(mystrcmp(strcat(ans,"\n"),str)==0){
                    score += 5;
                    printf("\n\n\n\n\n\n\n\n\n \t \t \t \t \t \t \t                                 Correct! - Score :%d\n",score);
		    printf("\n###########################################################################################################################################################################################################\n");
		    sleep(5);
		    system("clear");
               }else{
                    score -= 5;
                    printf("\n\n\n\n\n          \t \t \t \t \t \t \t                          Incorrect! - Score : %d\n",score);
		    printf("\n###########################################################################################################################################################################################################\n");
               	    sleep(2);
		    system("clear");	
	       }

              fclose(fp);
	  if(score%100==0 && score>0){
          system("clear");
          printf("\n \n \n \n \n \t \t \t \t \t \t \t  おめでとう!!\n You reached %d points!\n",score);
          }
     }

}

int main() {
menuController();
}

int begin(int option){
system("clear");
switch(option){
	case 1:;
		hiraganaTest();
       		break;
       	case 2:;
	        katakanaTest();
	       break;
	case 0:;
	        return 0;
           }
return 0;
}

