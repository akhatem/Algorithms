#include <stdio.h>
#include <vector>

std::vector<std::vector<int>> A;
int r,c;

int sumRange(int i, int j, int k, int l, std::vector<std::vector<int>> &S){
    return S[k][l] - S[k][j-1] - S[i-1][l] + S[i-1][j-1];
}

void accumSum2D(){
    int val1,val2,val3,val4;
    printf("Please enter the 4 points to get the range\n");
    scanf("%d %d %d %d", &val1, &val2, &val3, &val4);
    printf("%d\n",sumRange(val1,val2,val3,val4, A));
    
    /// Accumulate each row
    for (int i = 1; i < (int) A.size(); i++)
      for (int j = 1; j < (int) A[0].size(); j++)
        A[i][j] += A[i][j-1];

    /// Accumulate each col
    for (int j = 1; j < (int) A[0].size(); j++)
      for (int i = 1; i < (int) A.size(); i++)
          A[i][j] += A[i-1][j];
}

void vectorScan(){
    std::vector<int> row;
    int x;
    scanf("%d %d",& r, &c);
    for(int i = 0; i < r; ++i){
        for(int j = 0; j < c; ++j){
            scanf("%d", &x);
            row.push_back(x);
        }
        A.push_back(row);
        row.clear();
    }
}

int main(){
    vectorScan();
    accumSum2D();

    return 0;
}
