#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void sortHouses(int* houseNums, int* housePos, int num) {
    for(int i=0;i<num;i++) {
        for(int j=0;j<num-1-i;j++) {
            if (housePos[j] > housePos[j + 1]) {
                swap(housePos[j],housePos[j+1]);
                swap(houseNums[j],houseNums[j+1]);
            }
        }
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int num;
    cin >> num;
    
    int houseNums[num];
    int housePos[num];
    
    for(int i=0;i<num;i++) {
        cin >> houseNums[i] >> housePos[i] ;
    }
    
    sortHouses(houseNums,housePos,num);
    
    int maxGap = 0;
    int house1 = -1, house2 = -1;

    for (int i = 0; i < num-1; i++) {
        int gap = housePos[i+1] - housePos[i];
        if (gap > maxGap) {
            maxGap = gap;
            house1 = houseNums[i];
            house2 = houseNums[i + 1];
        }
    }

    if(house1 > house2) {
        cout << house2 << " " << house1;
    } else {
        cout << house1 << " " << house2;
    }
    
    return 0;
}
