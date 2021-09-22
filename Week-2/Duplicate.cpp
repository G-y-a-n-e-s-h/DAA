#include<iostream>
using namespace std;

int Binary(int *arr, int st, int en, int k){
    if(st>en){
        return -1;
    }
    int mid = (st+en)/2;
    if(arr[mid]==k){
        return mid;
    }
    if(arr[mid]<k){
        return Binary(arr, mid+1, en, k);
    }
    else return Binary(arr, st, mid-1, k);
}

int Duplicate(int *arr, int n,int k){
    int i, c=1;
    int pos = Binary(arr, 0, n-1, k);
    if(pos==-1) return -1;
    for(i=pos-1; i>=0; --i){
        if(arr[i]==k) ++c;
        else break;
    }
    for(i=pos+1; i<n; ++i){
        if(arr[i]==k) ++c;
        else break;
    }
    return c;
}

int main(){
    int t, n, i, k;
    cin >> t;
    while(t>0){
        cin >> n;
        int* arr = new int[n];
        for(i=0; i<n; ++i){
            cin >> arr[i];
        }
        cin >> k;
        int res = Duplicate(arr, n, k);
        if(res!=-1){
            cout << k << " - " << res <<endl;
        }
        else{
            cout << "Not Present" << endl;
        }
        --t;
    }
    return 0;
}