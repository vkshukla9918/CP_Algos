# include<bits/stdc++.h>
using namespace std;

void selectionsort(vector<int> &arr){
    int n = arr.size();
    for(int i = 0;i<n-1;i++){
        int min = i;
        for(int j =i+1;j<n;j++){
            if(arr[j]< arr[min])
            min = j;
        }
        swap(arr[i], arr[min]);
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

    selectionsort(arr);

    cout << "\nSorted vector is \n";
    printVector(arr);
    return 0;
}