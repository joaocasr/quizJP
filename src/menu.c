#include <stdio.h>
#include <stdlib.h>
#include "../include/menu.h"
#include "../include/colors.h"
#include "../include/main.h"

int menuController(){
    int l = 1, q = 0;   
    char buffer;
    printMenu(1);
    while (1) {   
        system("/bin/stty raw");
        scanf("%c", &buffer);
        system("/bin/stty cooked");
        
        switch (buffer)
        {
            case (65): 
                if(l== 2) l--;
                break;
            case (66): 
                if(l==1) l++;
                break;
            case (13): 
                q = 1;
                break;
            default: 
                break;
        }
        
        int res = switchWindowMenus(l,q);
        if(res == -1) {
            return res;
        } else if(res == -2) {
            printMenu(1);
            l = 1;
        }
        q = 0;
    }
    
}

int switchWindowMenus(int l, int q){
    switch (q){
        case (0):    
            switch (l){
                case (1):
                	printMenu(1);
                	return 0;
		case (2):
			printMenu(2);
			return 0;
		      }
           break;
        case (1):
        	switch (l){
                	case (1):
				system("clear");
                		begin(1);
                		break;
                	case (2):
				system("clear");
                		begin(2);
                		break;
		}
	}	
return 0;
}

void printMenu(int q){
    switch(q){
        case(0):
            printMenuScreen1();
            break;
        case(1):
            printMenuScreen1();
            break;
        case(2):
            printMenuScreen2();
            break;
    }
}


/*
int printConsole(char* v){
        //puts(BOLD_CYAN);   
    printf("╔══════════════════════════════════════════════╗\n");
    printf("║                                              ║║\n");
    printf("║                      %s                      ║\n",v);
    printf("║                                              ║\n");
    printf("║                                              ║\n");
    printf("║                                              ║\n");
    printf("║                                              ║\n");
    printf("║                                              ║\n");
    printf("║                _______________               ║\n");
    printf("║                                              ║\n");
    printf("║                                              ║\n");
    printf("╚══════════════════════════════════════════════╝\n");
return 0;
}*/



int printMenuScreen1(){
        system("clear");
	puts(BOLD_CYAN);
    printf("           ╔══════════════════════════════════════════════════════════════════════════════════════╗\n");
    printf("           ║                                                                                      ║\n");
    printf("           ║                                                                                      ║\n");
    printf("           ║                                                                                      ║\n");
    printf("           ║                      %s░██████╗░██╗░░░██╗██╗███████╗░░░░░██╗██████╗░%s                   ║\n",BOLD_MAGENTA, BOLD_CYAN);
    printf("           ║                      %s██╔═══██╗██║░░░██║██║╚════██║░░░░░██║██╔══██╗%s                   ║\n",BOLD_MAGENTA, BOLD_CYAN);
    printf("           ║                      %s██║██╗██║██║░░░██║██║░░███╔═╝░░░░░██║██████╔╝%s                   ║\n",BOLD_MAGENTA, BOLD_CYAN);
    printf("	   ║                      %s╚██████╔╝██║░░░██║██║██╔══╝░░██╗░░██║██╔═══╝░%s                   ║\n",BOLD_MAGENTA, BOLD_CYAN);
    printf("	   ║                      %s░╚═██╔═╝░╚██████╔╝██║███████╗╚█████╔╝██║░░░░░%s                   ║\n",BOLD_MAGENTA, BOLD_CYAN);
    printf("	   ║                      %s░░░╚═╝░░░░╚═════╝░╚═╝╚══════╝░╚════╝░╚═╝░░░░░%s                   ║\n",BOLD_MAGENTA, BOLD_CYAN);
    printf("           ║                                                                                      ║\n");
    printf("           ║                                                                                      ║\n");
    printf("           ║                                                                                      ║\n");
    printf("           ║%s                %s\033[5m▄█ ▀▄   █░█ █ █▀█ ▄▀█ █▀▀ ▄▀█ █▄░█ ▄▀█%s \033[0m  %s                             ║\n",RESET, BUI_BRIGHT_MAGENTA, BOLD_MAGENTA, BOLD_CYAN);
    printf("           ║%s             ▶  %s\033[5m █ ▄▀   █▀█ █ █▀▄ █▀█ █▄█ █▀█ █░▀█ █▀█%s \033[0m  %s                             ║\n",RESET, BUI_BRIGHT_MAGENTA, BOLD_MAGENTA, BOLD_CYAN);
    printf("           ║                                                                                      ║\n");
    printf("           ║                                                                                      ║\n");
    printf("           ║                       %s ▀█ ▀▄   █▄▀ ▄▀█ ▀█▀ ▄▀█ █▄▀ ▄▀█ █▄░█ ▄▀█%s                      ║\n", BOLD_MAGENTA, BOLD_CYAN);
    printf("           ║                        %s█▄ ▄▀   █░█ █▀█ ░█░ █▀█ █░█ █▀█ █░▀█ █▀█%s                      ║\n", BOLD_MAGENTA, BOLD_CYAN);
    printf("           ║                                                                                      ║\n");
    printf("           ║                                                                                      ║\n");
    printf("           ╚══════════════════════════════════════════════════════════════════════════════════════╝\n");
   
    puts(BOLD_CYAN);
        return 0;

}



int printMenuScreen2(){
        system("clear");
        puts(BOLD_CYAN);
    printf("           ╔══════════════════════════════════════════════════════════════════════════════════════╗\n");
    printf("           ║                                                                                      ║\n");
    printf("           ║                                                                                      ║\n");
    printf("           ║                                                                                      ║\n");
    printf("           ║                      %s░██████╗░██╗░░░██╗██╗███████╗░░░░░██╗██████╗░%s                   ║\n",BOLD_MAGENTA, BOLD_CYAN);
    printf("           ║                      %s██╔═══██╗██║░░░██║██║╚════██║░░░░░██║██╔══██╗%s                   ║\n",BOLD_MAGENTA, BOLD_CYAN);
    printf("           ║                      %s██║██╗██║██║░░░██║██║░░███╔═╝░░░░░██║██████╔╝%s                   ║\n",BOLD_MAGENTA, BOLD_CYAN);
    printf("           ║                      %s╚██████╔╝██║░░░██║██║██╔══╝░░██╗░░██║██╔═══╝░%s                   ║\n",BOLD_MAGENTA, BOLD_CYAN);
    printf("           ║                      %s░╚═██╔═╝░╚██████╔╝██║███████╗╚█████╔╝██║░░░░░%s                   ║\n",BOLD_MAGENTA, BOLD_CYAN);
    printf("           ║                      %s░░░╚═╝░░░░╚═════╝░╚═╝╚══════╝░╚════╝░╚═╝░░░░░%s                   ║\n",BOLD_MAGENTA, BOLD_CYAN);
    printf("           ║                                                                                      ║\n");
    printf("           ║                                                                                      ║\n");
    printf("           ║                                                                                      ║\n");
    printf("           ║                         %s▄█ ▀▄   █░█ █ █▀█ ▄▀█ █▀▀ ▄▀█ █▄░█ ▄▀█%s                       ║\n", BOLD_MAGENTA, BOLD_CYAN);
    printf("           ║                          %s█ ▄▀   █▀█ █ █▀▄ █▀█ █▄█ █▀█ █░▀█ █▀█%s                       ║\n",BOLD_MAGENTA, BOLD_CYAN);
    printf("           ║                                                                                      ║\n");
    printf("           ║                                                                                      ║\n");
    printf("           ║%s            %s\033[5m   ▀█ ▀▄   █▄▀ ▄▀█ ▀█▀ ▄▀█ █▄▀ ▄▀█ █▄░█ ▄▀█%s  \033[0m %s                            ║\n",RESET, BUI_BRIGHT_MAGENTA, BOLD_MAGENTA, BOLD_CYAN);
    printf("           ║%s         ▶  %s\033[5m   █▄ ▄▀   █░█ █▀█ ░█░ █▀█ █░█ █▀█ █░▀█ █▀█%s  \033[0m %s                            ║\n",RESET, BUI_BRIGHT_MAGENTA, BOLD_MAGENTA, BOLD_CYAN);
    printf("           ║                                                                                      ║\n");
    printf("           ║                                                                                      ║\n");
    printf("           ╚══════════════════════════════════════════════════════════════════════════════════════╝\n");

    puts(BOLD_CYAN);
        return 0;

}
















