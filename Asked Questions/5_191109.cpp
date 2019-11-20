#include <bits/stdc++.h>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int mp[35][35];
int res[35][35];
int n, m; 

void heng(){    //消除横着的 
    for(int i = 0; i < n; i++){
        int cnt = 1;
        for(int j = 1; j < m; j++){
             if(mp[i][j] == mp[i][j-1]){
                cnt++;
                if(cnt > 3)
                    res[i][j] = 0;
             }
             else{
                cnt = 1;
             }
             if(cnt == 3 && mp[i][j] == mp[i][j-1]){
                res[i][j-2] = res[i][j-1] = res[i][j] = 0;
             }
        }
    }
}

void shu(){     //消除竖着的 
    for(int j = 0; j < m; j++){
        int cnt = 1;
        for(int i = 1; i < n; i++){
             if(mp[i][j] == mp[i-1][j]){
                cnt++;
                if(cnt > 3)
                    res[i][j] = 0;
             }
             else{
                cnt = 1;
             }
             if(cnt == 3 && mp[i][j] == mp[i-1][j]){
                res[i-2][j] = res[i-1][j] = res[i][j] = 0;
             }
        }
    }
}

int main()
{
    while(scanf("%d %d", &n, &m)!=EOF){
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++){
                scanf("%d", &mp[i][j]);
                res[i][j] = mp[i][j];
            }

        heng();
        shu();

        //printf("\n");
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(j)
                    printf(" ");
                printf("%d", res[i][j]);
            }

            printf("\n");
        }


    }
    return 0;
}

