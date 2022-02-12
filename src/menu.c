#include <stdio.h>
#include <stdlib.h>
#include "../include/menu.h"
#include "../include/colors.h"



int escreveMenu(){
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
    printf("           ║                       %s▄█ ▀▄   █░█ █ █▀█ ▄▀█ █▀▀ ▄▀█ █▄░█ ▄▀█%s                         ║\n", BOLD_MAGENTA, BOLD_CYAN);
    printf("           ║                        %s█ ▄▀   █▀█ █ █▀▄ █▀█ █▄█ █▀█ █░▀█ █▀█%s                         ║\n", BOLD_MAGENTA, BOLD_CYAN);
    printf("           ║                                                                                      ║\n");
    printf("           ║                                                                                      ║\n");
    printf("           ║                       %s ▀█ ▀▄   █▄▀ ▄▀█ ▀█▀ ▄▀█ █▄▀ ▄▀█ █▄░█ ▄▀█%s                      ║\n", BOLD_MAGENTA, BOLD_CYAN);
    printf("           ║                        %s█▄ ▄▀   █░█ █▀█ ░█░ █▀█ █░█ █▀█ █░▀█ █▀█%s                      ║\n", BOLD_MAGENTA, BOLD_CYAN);
    printf("           ║                                                                                      ║\n");
    printf("           ║                                                                                      ║\n");
    printf("           ╚══════════════════════════════════════════════════════════════════════════════════════╝\n");
   
    puts(reset);
        return 0;

}

