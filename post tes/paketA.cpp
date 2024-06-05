#include <iostream>
using namespace std;

int LinearSearch(int arr[], int n, int x){
    for (int i = 0; i < n; i++){
        if (arr[i] == x)
        {
            return i;
        }
       
    }
    return -1;
}

int binarysearch(int arr[], int m, int x){
    for (int j = 0; j< m; j++){
        if(arr[j]==x){
            return j;
        }
    }
    return -1;
}

int main(){
    int n, m, x;
    cin>>n>>m;

    int array_A[n];
    int array_B[m];

    for (int i = 0;i<m;i++){
        cin >> array_A[i];
    }

    for (int j = 0;j<m;j++){
        cin >> array_B[j];
    }
    
    cin>>x;

    int index_A=LinearSearch(array_A,n,x);
    int index_B=binarysearch(array_B,m,x);

    if (x= array_A and x==array_B)
    {
        cout<<"KEDUANYA: ";
        cout<<array_A<< array_B;
    }else if(x==array_A && x!=array_B ){
        cout<<"BHASHA";
    }else if(x==array_A && x !=array_B ){
        cout<<"SENA";
    }else{
        cout<<"TIDAK DITEMUKAN";
    }
    

    return 0;
} 