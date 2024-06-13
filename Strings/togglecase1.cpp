#include <iostream>
#include <cctype>
using namespace std;

char* toggleCase(char* text) {
    for(int i=0;text[i]!='\0';i++) {
        if(islower(text[i])) {
            text[i] = toupper(text[i]); 
        } else if(isupper(text[i])) {
            text[i] = tolower(text[i]);
        }
    }
}

int main() {
    char text[1024];    
    scanf("%s",text);
    printf("%s",toggleCase(text));
    return 0;
}