#include<iostream>
#include"mymodule"

void f() {
    if(!isLoggedIn) {
        printf("Not logged in\n");
        return;
    }
    
    printf("I am the task. I serve you.\n");
}