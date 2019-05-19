/*
    Selection sort
*/

#include <bits/stdc++.h>

using namespace std;

void selection_sort(int a[], int n){
    for(int j=0; j<n-1; ++j){
        printf("%d", a[j]);
        int min=j;
        for(int i=j+1; i<n; ++i){
            printf("%d", a[i]);
            if(a[i]<a[min])
                min=i;
        }
        printf("\n");
        swap(a[j], a[min]);
    }
}

int main() {
    int n=6;
    int a[n]={5,4,9,7,1,2};
    selection_sort(a,n);

    return 0;
}
