#include <stdio.h>
#include <stdlib.h>
#include "r_loop.h"

int main() {
    system("rm -rf ~/ROS");
    system("mkdir ~/ROS");
    system("cd ~/ROS");
    printf("R OS\n");
    rloop();
}