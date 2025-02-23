# include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr){
    int n = arr.size();
    bool swapped;
    for(int i = 0;i<n-1;i++){
        swapped = false;
        for(int j =0;j<n-i-1; j++){
            if(arr[j]> arr[j+1]){
            swap(arr[j], arr[j+1]);
            swapped = true;
            }
        }
            if(!swapped)
            break;
    }
}

void printVector(vector<int> &arr){
    for(int i =0;i<arr.size(); i++){
        cout<< arr[i]<<" ";
    }
    cout<< endl;
}
int main()
{
    vector<int> arr = { 12, 11, 13, 5, 6, 7 };
    int n = arr.size();

    cout << "Given vector is \n";
    printVector(arr);

    bubbleSort(arr);

    cout << "\nSorted vector is \n";
    printVector(arr);
    return 0;
}