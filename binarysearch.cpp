#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<numeric>
using namespace std;

// int binarysearch(int *arr,int n, int target){
//     int st=0;
//     int end=n-1;
//     int mid=(st+end)/2;       // //  integer overflow int mid=s+(e-s)/2
//     while(st<=end){
//         if(arr[mid]==target){
//             return mid;
//         }
//         else if(arr[mid]<target){
//             st=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//         mid=(st+end)/2;
//     }   
//      return -1;
// }

// int first(int *a, int n , int k){
//     int s=0;
//     int e=n-1;
//     int mid=s+(e-s)/2;
//     int ans=-1;
//     while(s<=e){
//         if(a[mid]==k){
//             ans=mid;
//             e=mid-1;  // //for last occurrence s=mid+1
//         }
//         else if(a[mid]<k){
//             s=mid+1;
//         }
//         else{
//             e=mid-1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return ans;
// }

// int peak(vector<int>&a){
//     int s=0;
//     int e=a.size()-1;
//     int mid=s+(e-s)/2;
//     while(s<e){
//         if(a[mid]<a[mid+1]){
//             s=mid+1;
//         }
//         else{
//             e=mid;
//         }
//         mid=s+(e-s)/2;
//     }
//     return s;
// }

// int squareroot(int n){
//     int s=0;
//     int e=n;
//     int mid=s+(e-s)/2;
//     int ans=-1;
//     while(s<=e){
//         if(mid*mid==n){
//             return mid;
//         }
//         else if(mid*mid>n){
//             e=mid-1;
//         }
//         else {
//             ans=mid;
//             s=mid+1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return ans;
// }

// bool bsearch2d(int a[][4],int n,int m,int target){
//     int s=0;
//     int totalsize=n*m;
//     int e=totalsize-1;
//     int mid=s+(e-s)/2;
//     while(s<=e){
//         int rindex=mid/m;
//         int cindex=mid%n;
//         int element=a[rindex][cindex];
//         if(element==target){
//             cout<<"found in "<<rindex<<" row"<<" and "<<cindex<<" column";
//             return true;
//         }
//         else if(element<target){
//             s=mid+1;
//         }
//         else{
//             e=mid-1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return false;
// }

// int nearlySorted(int a[],int n,int target){
//     int s=0;
//     int e=n-1;
//     int mid=s+(e-s)/2;
//     while(s<=e){
//         if(a[mid]==target){
//             return mid;
//         }
//         if(mid-1>=s && a[mid-1]==target){
//             return mid-1;
//         }
//         if(mid+1<=e && a[mid+1]==target){
//             return mid+1;
//         }
//         else if(a[mid]<target){
//             s=mid+2;
//         }
//         else{
//             e=mid-2;
//         }
//         mid=s+(e-s)/2;
//     }
//     return -1;
// } 
    
// int devide(int did,int div){
//     int s=0;
//     int e=abs(did);
//     int mid=s+(e-s)/2;
//     int ans=0;
//     while(s<=e){
//         if(abs(mid*div)==abs(did)){
//             ans= mid;
//             break;
//         }
//         else if(abs(mid*div)>abs(did)){
//             e=mid-1;
//         }
//         else{
//             ans=mid;
//             s=mid+1;
//         }
//         mid=s+(e-s)/2;
//     }
//     if((div<0 && did<0) || (div>0 && did>0))
//         return ans;
//     else{
//         return -ans;
//     }
// }

// int findodd(int arr[],int n){
//     int s=0;
//     int e=n-1;
//     int mid=s+(e-s)/2;
//     while(s<=e){
//         if(s==e){
//             return s;
//         }
//         if(mid%2==0){
//             if(arr[mid]==arr[mid+1]){
//                 s=mid+2;
//             }
//             else{
//                 e=mid;
//             }
//         }
//         else if(mid%2!=0){
//             if(arr[mid]==arr[mid-1]){
//                 s=mid+1;
//             }
//             else{
//                 e=mid-1;
//             }
//         }
//         mid=s+(e-s)/2;
//     }
//     return -1;
// }

// int pivot(vector<int>a){
//     int s=0;
//     int e=a.size()-1;
//     int mid=s+(e-s)/2;
//     while(s<=e){
//         if(s==e){
//             return s;
//         }
//         if(a[mid]>a[mid+1] && mid+1<=e){
//             return mid;
//         }
//         else if(a[mid]<a[mid-1] && mid-1>=s){
//             return mid-1;
//         }
//         else if(a[s]>a[mid]){
//             e=mid-1;
//         }
//         else{
//             s=mid+1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return -1;
//     }

// int kdiff(vector<int>v,int k){
//     sort(v.begin(),v.end());
//     int i=0;
//     int j=1;
//     set<pair<int,int>>ans;
//     while(j<v.size()){
//         if(v[j]-v[i]==k){
//             ans.insert({v[i],v[j]});
//             i++;j++;
//         }
//         else if(v[j]-v[i]>k){
//             i++;
//         }
//         else{
//             j++;
//         }
//         if(i==j)j++;
//     }
//    return ans.size();
// }

// int bs(vector<int>&v, int s,int x ){
//     int e=v.size()-1;
//     int mid=s+(e-s)/2;
//     while(s<=e){
//         if(v[mid]==x){
//             return mid;
//         }
//         else if(v[mid]<x){
//             s=mid+1;
//         }
//         else{
//             e=mid-1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return -1;
// }
// int kdiff2(vector<int>v,int k){
//     sort(v.begin(),v.end());
//     set<pair<int,int>>ans;
//     for(int i=0;i<v.size();i++){
//         if(bs(v,i+1,v[i]+k)!=-1){
//             ans.insert({v[i],v[i]+k});
//         }
//     }
//     return ans.size();
// }

// vector<int> closest(vector<int>&arr,int k,int x){
//     int l=0;
//     int h=arr.size()-1;
//     while(h-l>=k){
//         if(x-arr[l]>arr[h]-x){
//             l++;
//         }
//         else{
//             h--;
//         }
//     }
//     // vector<int>ans;
//     // for(int i=l;i<=h;i++){
//     //     ans.push_back(arr[i]);
//     // }
//     // return ans;
//     return vector<int>(arr.begin()+l,arr.begin()+h+1);
// }

// int lowerbound(vector<int>&arr,int x){
//     int s=0;
//     int e=arr.size()-1;
//     int mid=s+(e-s)/2;
//     int ans=e;
//     while(s<=e){
//         if(arr[mid]>=x){
//             ans=mid;
//             e=mid-1;
//         }
//         else if(x>arr[mid]){
//             s=mid+1;
//         }
//         else{
//             e=mid-1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return ans;
// }
// vector<int> closest2(vector<int>&arr,int k,int x){
//     int h=lowerbound(arr,x);
//     int l=h-1;
//     while(k--){
//         if(l<0){
//             h++;
//         }
//         else if(h>=arr.size()){
//             l--;
//         }
//         if(x-arr[l]>arr[h]-x){
//             h++;
//         }
//         else{
//             l++;
//         }
//     }
//     return vector<int>(arr.begin()+l+1,arr.begin()+h);
// }

// int binarysearch(int *arr,int st,int end, int target){
//     int mid=(st+end)/2;      
//     while(st<=end){
//         if(arr[mid]==target){
//             return mid;
//         }
//         else if(arr[mid]<target){
//             st=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//         mid=(st+end)/2;
//     }   
//      return -1;
// }
// int exponential(int *a, int n,int k){
//     if(a[0]==k){
//         return 0;
//     }
//     int i=1;
//     while(i<n && a[i]<=k){
//         i*=2;
//     }
//     return binarysearch(a,i/2,min(i,n-1),k);
// }


// bool possiblesoln(vector<int> &a,int n,int m,int sol){
//     int pagesum=0;
//     int students=1;             //allocation
//     for(int i=1;i<n;i++){
//         if(a[i]>sol){
//             return false;
//         }
//         if(pagesum+a[i]<=sol){
//             pagesum+=a[i];
//         }
//         else{
//             students++;
//             pagesum=a[i];
//         }
//     }
//     return students>n ? false:true;
// }
// int book(vector<int> &a,int n ,int m){
//     if(m>n){
//         return -1;
//     }
//     int s=0;
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=a[i];
//     }
//     int e=sum;
//     int ans=-1;
//     while(s<=e){
//         int mid=s+(e-s)/2;
//         if(possiblesoln(a,n,m,mid)){
//             ans=mid;
//             e=mid-1;
//         }
//         else{
//             s=mid+1;
//         }
//     }
//     return ans;
// }

// bool ispossible(vector<int> &arr, int n,int m,int sol){
//     int painters=1,time=0;
//     for(int i=0;i<n;i++){
//         if(time+arr[i]<=sol){
//             time+=arr[i];
//         }
//         else{
//             painters++;
//             time=arr[i];
//         }
//     }
//     return painters<=m;
// }
// int painters(vector<int> &arr,int n,int m){
//     int sum=0;
//     int maxy=INT8_MIN;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//         maxy=max(maxy,arr[i]);
//     }
//     int s=maxy,e=sum,ans=-1;
//     while(s<=e){
//         int mid=s+(e-s)/2;
//         if(ispossible(arr,n,m,mid)){
//             ans=mid;
//             e=mid-1;
//         }
//         else{
//             s=mid+1;
//         }
//     }
//     return ans;
// }

// bool ispossible(vector<int> &arr, int N,int C,int sol){
//     int cow=1,lastposstall=arr[0];
//     for(int i=0;i<N;i++){
//         if(arr[i]-lastposstall>=sol){
//             cow++;
//             lastposstall=arr[i];
//         }
//         if (cow==C){
//             return true;
//         }
//     }
//     return false;
// }
// int cows(vector<int> &arr, int N,int C){
//     sort(arr.begin(),arr.end());
//     int s=1;
//     int e=arr[N-1]-arr[0],ans=-1;
//     while(s<=e){
//         int mid=s+(e-s)/2;
//         if(ispossible(arr,N,C,mid)){
//             ans=mid;
//             s=mid+1;
//         }
//         else{
//             e=mid-1;
//         }
//     }
//     return ans;
// }

// bool ispossible(vector<long long int> &trees,long long int m,long long int sol){
//     long long int woodcollected=0;
//     for(int i=0;i<trees.size();i++){
//         if(trees[i]>sol){
//             woodcollected+=trees[i]-sol;
//         }
//     }
//     return woodcollected>=m;
// }
// long long int sawblade(vector<long long int> &trees,long long int m){
//     long long int s=0,e,ans=-1;
//     e=*max_element(trees.begin(),trees.end());
//     while(s<=e){
//         long long int mid=s+(e-s)/2;
//         if(ispossible(trees,m,mid)){
//             ans=mid;
//             s=mid+1;
//         }
//         else{
//             e=mid-1;
//         }
//     }
//     return ans;
// }





int main(){
    // int arr[]={1,3,5,7,9,11,13,15,17,19,21};
    // int n=sizeof(arr)/sizeof(int);
    // int target=12;
    // int ans= binarysearch(arr,n,target);
    //     if(ans== -1){
    //         cout<<"not found";
    //     }
    //     else{
    //         cout<<ans;
    //     }

    // vector<int>v{1,2,3,4,5,6,7};
    // if(binary_search(v.begin(),v.end(),4)){ binary_search(arr,arr+n,5)
    //     cout<<"found";
    // }
    // else{
    //     cout<<"not found";
    // }

    // find the first occurrence of an element
    // int a[]={1,3,4,4,4,5,5,6,8,9};
    // int n=sizeof(a)/sizeof(int);
    // int k=4;
    // int ans=first(a,n,k);
    // cout<<ans;

    // total no of occurrence=last occur-first occur+1

    // peak elementin mountain
    // vector<int>a{0,10,5,2};
    // int ans=peak(a);
    // cout<<ans;

    // square root using binary search
    // int n=10;
    // int ans= squareroot(n);
    // cout<<ans<<endl;
    // int precision=2;
    // double step=0.1;
    // double finalans=ans;
    // for(int i=0;i<precision;i++){
    //     for(double j=finalans;j*j<=n;j=j+step){
    //         finalans=j;
    //     }
    //     step=step/10;
    // }
    // cout<<"finalans = "<<finalans;

    // binarysearch in 2d array
    // int a[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    // int target=19;
    // int n=4;
    // int m=4;
    // bool ans= bsearch2d(a,n,m,target);
    // if(ans){
    // }
    // else{
    //     cout<<"not found";
    // }

    // binarysearch in  nearly sorted array
    // int a[]={10,3,40,20,50,80,70};
    // int n=sizeof(a)/sizeof(int);
    // int target=80;
    // int ans= nearlySorted(a,n,target);
    // cout<<ans;

    // devide two no using bsearch
    // int div = 5;
    // int did = 22;
    // int ans = devide(did, div);
    // cout << ans << endl;
    // int precision=2;
    // double step=0.1;
    // double finalans=ans;
    // for(int i=0;i<precision;i++){
    //     for(double j=finalans;j*div<=did;j=j+step){
    //         finalans=j;
    //     }
    //     step=step/10;
    // }
    // cout<<"finalans = "<<finalans;

    // find odd occuring elmenet
    // int arr[]={1,1,2,2,3,3,4,4,3,600,600,4,4};
    // int n=sizeof(arr)/sizeof(int);
    // int ans=findodd(arr,n);
    // cout<<ans<<endl;
    // cout<<arr[ans];

    // pivot element
    // vector<int>a{9,10,2,4,6,8};
    // int ans=pivot(a);
    // cout<<ans<<endl;
    // cout<<a[ans];

    // k-diff pair in an array
    // two pointer approach
    // vector<int>v{3,1,4,1,5}; 
    // int k=2;
    // int ans=kdiff(v ,k);
    // cout<<ans;
    
    // vector<int>v{3,1,4,1,5}; 
    // int k=1;
    // int ans=kdiff2(v ,k);
    // cout<<ans;

    // k closest element
    // two ptr method
    // vector<int>arr{1,2,3,4,5};
    // int k=4;
    // int x=3;
    // vector<int>var=closest(arr,k,x);
    // for(auto value:var){
    // cout<<value;
    // }

    // vector<int>arr{1,2,3,4,5};
    // int k=4;
    // int x=3;
    // closest2(arr,k,x);
    // for(auto value:var){
    // cout<<value;
    // }

    // exponential search 
    // int a[]={3,4,5,6,11,13,16,56,78};
    // int n=sizeof(a)/sizeof(int);
    // int k=13;
    // int st=0;
    // int end=n-1;
    // int ans=exponential(a,n,k);
    // cout<<ans;

// for unbounded boundary search
// int i=0;
// int j=1;
// while(a[j]<x){
//     i=j;
//     j*=2;
// }
// st=i; end=j
// bsearch

// *book application problem
// vector<int>a{15,17,20};
// int n=4;
// int m=2;
// cout<<book(a,n,m);

// painters partition
// vector<int>arr{40,30,10,20};
// int n=4,m=2;
// cout<<painters(arr,n,m);

// aggresive cows
// vector<int>arr{1,2,8,4,9};
// int N=5,C=3;
// cout<<cows(arr,N,C);

// EKO SPOJ
// long long int n,m;
// n=5,m=7;
// vector<long long int>trees{20,15,10,17};
// long long int height;
// cout<<sawblade(trees,m);













    

    



    






return 0;  
    
} 