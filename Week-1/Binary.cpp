#include <iostream>
#include <fstream>
using namespace std;

int count=0;

bool Binary(int *arr, int st, int en, int k){
    if(st>en){
        return false;
    }
    ++count;
    int mid = (st+en)/2;
    if(arr[mid]==k){
        return true;
    }
    if(arr[mid]<k){
        return Binary(arr, mid+1, en, k);
    }
    else return Binary(arr, st, mid-1, k);
}

int main(){
    fstream input;
    input.open("Input.txt", ios::in);
    if (!input) {
        cout << "Error while Opening";
        exit(1); 
    }
    int t, n, i, k;
    input >> t;
    fstream output;
    output.open("Output.txt", ios::out);
    while(t>0){
        input >> n;
        int* arr = new int[n];
        for(i=0; i<n; ++i){
            input >> arr[i];
        }
        input >> k;
        count=0;
        bool res = Binary(arr, 0, n-1, k);
        if(res){
            output << "Present " << count << '\n';
        }
        else{
            output << "Not Present " << ccount << '\n';
        }
        --t;
    }
    input.close();
    output.close();
    return 0;
}
