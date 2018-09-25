#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

int main(){
    int s,e, x;
    std::vector<int> vec;
    scanf("%d %d", &s, &e);

    for(int i = 0; i < e; ++i){
        scanf("%d", &x);
        vec.push_back(x);
        ///sort(vec.begin(), vec.end());
        ///reverse(vec.begin(), vec.end());
    }
    std:: vector<int> sum(vec.size(), 0);

    for(int i = 0; i < (int)vec.size(); i++){
        sum[i] += (i == 0) ? vec[i] : vec[i] + sum[i -1];
        printf("Sum[%d] = %d\n", i, sum[i]);
    }
    return 0;
}
