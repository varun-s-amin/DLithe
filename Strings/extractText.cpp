#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char text[1024];
    cin >> text;

    int cDigit = 0,
        cAlpha = 0,
        cAlNum = 0,
        cLower = 0,
        cUpper = 0;

    for(int i=0;text[i]!='\0';i++) {
        if(isdigit(text[i])) {
            cDigit++;
        }
        if(isalpha(text[i])) {
            cAlpha++;
        }
        if(isalnum(text[i])) {
            cAlNum++;
        }
        if(islower(text[i])) {
            cLower++;
        }
        if(isupper(text[i])) {
            cUpper++;
        }
    }
    
    printf("Number of digits:%d\n",cDigit);
    printf("Number of alphabets:%d\n",cAlpha);
    printf("Number of alpha numberics:%d\n",cAlNum);
    printf("Number of uppercases:%d\n",cUpper);
    printf("Number of lowercases:%d\n",cLower);

    return 0;
    
}