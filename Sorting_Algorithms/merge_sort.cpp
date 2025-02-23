# include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr, int left, int mid, int right){
    int n1 = mid-left+1;
    int n2 = right-mid;
    vector<int> temp1(n1), temp2(n2);

    for(int i =0;i<n1;i++)
    temp1[i] = arr[left+i];
    for(int j =0;j<n2;j++)
    temp2[j] = arr[mid+1+j];

    int i =0, j =0, k = left;
    while(i<n1 && j<n2){
        if(temp1[i]<= temp2[j]){
            arr[k] = temp1[i];
            i++;
            k++;
        }
        else{
            arr[k] = temp2[j];
            j++;
            k++;
        }

    }
    while(i<n1){
        arr[k] = temp1[i];
        k++;
        i++;
    }
    while(j<n2){
        arr[k] = temp2[j];
        k++;
        j++;
    }

}
void mergeSort(vector<int> &arr, int left, int right){
    int mid = left + (right-left)/2;
    if(left >= right)
    return;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid+1, right);
        merge(arr, left, mid, right);
        
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

    mergeSort(arr, 0, n - 1);

    cout << "\nSorted vector is \n";
    printVector(arr);
    return 0;
}