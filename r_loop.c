#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "r_loop.h"
#include "r_os.h"
#include "r_add.h"
#include <stdlib.h>

void rloop() {
    int loop = 1;
    bool exists = false;
    
    char commands[6][100] = {"q", "sd", "inf", "add", "fil"};

    while(loop == 1) {
        char action[100];
        printf("Enter action: ");
        scanf("%s", action);

        for(int i=0; i < 5; ++i) {
            if(strcmp(action, commands[i+1]) == 0) {
                exists = true;
            }
        }

        if(exists) {
            if(strcmp(action, "sd") == 0) {
                loop -= 1;
            }
            if(strcmp(action, "inf") == 0) {
                r_os();
                exists = false;
            }
            if(strcmp(action, "add") == 0) {
                r_add();
                exists = false;
            }
            if(strcmp(action, "fil") == 0) {
                system("ls");
                exists = false;
            }
        } else if(exists == false) {
            printf("Unknown command: %s\n", action);
        }
    }
}