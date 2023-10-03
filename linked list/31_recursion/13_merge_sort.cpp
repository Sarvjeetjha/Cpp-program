// //merge sort using recursion

//**************************************************************best method 1 by taking only one temporary variale***********************************************
#include <iostream>
using namespace std;

// merge function to merge element from root which wa splited

void merge(int *arr, int si, int mid, int ei)
{
    // creatingarray to store element temperorily
    int len1 = si;
    int len2 = mid + 1;
    int *temp = new int[ei - si + 1]; // temperory array to store sorted two array
    int k = 0;                        // tracking index of main array elemnt

    // sorting  element of two array and storing in temp.array
    while (len1 <= mid && len2 <= ei)
    {
        if (arr[len1] < arr[len2])
        {
            temp[k] = arr[len1++];
            k++;
        }
        else
        {
            temp[k] = arr[len2++];
            k++;
        }
    }

    while (len1 <= mid)
    {
        temp[k] = arr[len1++];
        k++;
    }
    while (len2 <= ei)
    {
        temp[k] = arr[len2++];
        k++;
    }

    // copying element from temperory to main array
    for (int k = 0, i = si; k < (ei - si + 1); k++, i++)
    {
        arr[i] = temp[k];
    }
    delete[] temp;
}

// merge sort function to break the array unti it reaches to single value
void mergesort(int *arr, int si, int ei)
{
    int mid = si + (ei - si) / 2;
    if (si >= ei)
        return;
    else
    {

        // spliting first half array
        mergesort(arr, si, mid);

        // spliting second  half array
        mergesort(arr, mid + 1, ei);

        // now mergeing elemnet of array

        merge(arr, si, mid, ei);
    }
}
int main()
{
    int arr[] = {6, 5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(int);

    int ei = n - 1;
    int si = 0;
    mergesort(arr, si, ei); // function call

    // printing sorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

//**************************************************************method 1 by taking only two  temporary variale seperately for each one ***********************************************
// #include<iostream>
// using namespace std;

// void merge(int*arr,int s,int mid,int e){
// int len1=mid-s+1;
// int len2=e-mid;

// //creting two differnt array for storing aftre creating we merge

// int *first=new int[len1];
// int *second=new int[len2];

// int k=s;//it contains the starting index of array
// for(int i=0;i<len1;i++){
//     first[i]=arr[k++];
// }

// k=mid+1;//it contains the  index  from mid+1 of array
// for(int i=0;i<len2;i++){
//     second[i]=arr[k++];
// }
// //merging both ditinct array

// int firstin=0;
// int secoin=0;
// int mainin=s;

// //copying element
// while(firstin<len1 && secoin<len2){
//     if(first[firstin]>second[secoin]){
//          arr[mainin++]=second[secoin++];
//     }
//     else{
//         arr[mainin++]=first[firstin++];

//     }
// }

// //copying remaining elment of first array
// while(firstin<len1 ){
//     arr[mainin++]=first[firstin++];
// }

// //copying remaining elment of second  array
// while(secoin<len2 ){
//     arr[mainin++]=second[secoin++];
// }
// }

// //merge sort function it split array
// void mergesort(int *arr,int s,int e){

//     int mid=s+(e-s)/2;
//     if(s>=e){//base case
//         return;
//     }
//     else{
//         //recursive call for first half array
//         mergesort(arr,s,mid);//splitting array
//         //recursive call for second half
//         mergesort(arr,mid+1,e);//splitting array
//         //merging array
//         merge(arr, s,mid, e);

//     }
// }
// int main(){
// int arr[]={2,1,6,15,12,10,9};
// int n=sizeof(arr)/sizeof(int);
// mergesort(arr,0,n-1);
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }

//      return 0;
// }

//*************************for practice only**************************************
// #include<iostream>
// using namespace std;

// void merge(int* arr,int si,int mid,int ei){
//     int *temp = new int[ei-si+1];
//     int k=0;
//     int i=si;
//     int j=mid+1;
//     while(i<=mid && j<=ei ){
//         if(arr[i]<arr[j]){
//             temp[k]=arr[i++];
//             k++;
//         }
//         else{
//             temp[k]=arr[j++];
//             k++;
//         }
//     }
//     while(i<=mid){
//         temp[k]=arr[i++];
//         k++;
//     }
//     while(j<=ei){
//         temp[k]=arr[j++];
//         k++;
//     }
//     i=si;
//     for(int m=0 ; m<(ei-si+1 ); m++ ){
//         arr[i++]=temp[m];
//     }

//     for (int i=0;i<ei-si+1;i++)
//         cout<<arr[i]<<" ";
//     cout<<endl;

// }

// void mergesort(int * arr,int si,int ei){
//     int mid=si+(ei-si)/2;
//     if(si>=ei)
//         return;
//     else{
//         mergesort(arr,si,mid);
//         mergesort(arr,mid+1,ei);
//         merge(arr,si,mid,ei);
//     }

// }

// int main(){
// int arr[]={6,5,4,3,2,1};
// int n=6;
// int ei=5;
// int si=0;
// mergesort(arr,si,ei);
// for (int i=0;i<n;i++)
//     cout<<arr[i]<<" ";
// }