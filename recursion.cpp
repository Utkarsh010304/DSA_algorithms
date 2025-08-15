#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
// int factorial(int n){
//     if(n==1)
//     return 1;
//     int ans=n*factorial(n-1);
//     return ans;
// }

// void reverse(int n){
//     if(n==0)
//     return ;
//     cout<<n<<" ";
//     reverse(n-1);
// }

// int fibonacci(int n){
//     // if(n==0 || n==1){
//     //     return n;
//     // }
//     if(n==1){
//         return 0;
//     }
//     if(n==2){
//         return 1;
//     }
//     int ans= fibonacci(n-1) + fibonacci(n-2);
//     return ans;
// }

// int stairs(int n){
//     if(n==0 ||n==1){
//         return 1;
//     }
//     int ans=stairs(n-1)+stairs(n-2);
//     return ans;
// }

// void print(int arr[],int n,int i){
//     if(i>=n)                  //imp i<n opps.
//     return ;
//     cout<<arr[i]<<" ";
//     i++;
//     print(arr,n,i);   // i++ error    while i+1 or ++i run
// }

// void print(int arr[],int n){
//     if(n==0)                  
//     return ;
//     cout<<arr[0]<<" ";
//     print(arr+1,n-1);      // n-- not poss.
// }

// int maximum(int arr[],int n,int i,int & ans){   //pass by reference
//     if(i>=n)
//     return 1;
//     if(ans<arr[i]){
//         ans=arr[i];
//     }
//     i++;
//     maximum(arr,n,i,ans);
//     return ans;
// }

// void  finding(string  s ,int  i ,char  key, vector<int> & ans){
//     if(i>=s.length())
//     return ; //we can pass by  reference for space complexity and TLE
//     if(s[i]==key){
//         ans.push_back(i);
//     }
//     i++;
//     return finding(s,i,key,ans);
// }

// void each(int val){
//     if(val==0)
//     return ;
//     int newval=val/10;
//     each(newval);
//     int digit=val % 10;
//     cout<<digit<<" ";
// }

// bool sorted(int arr[],int n,int i){
//     if(i==n-1)
//     return true; ;
//     if(arr[i+1]<arr[i]){
//         return false;
//     }
//     return sorted(arr,n,i+1);
// }

// int bs(vector<int> &arr,int s,int e,int key){
//     if(s>e) return -1;
//     int mid=s+(e-s)/2;
//     if(arr[mid]==key){
//         return mid;
//     }
//     // else if(arr[mid]<key){
//     //     return bs(arr,mid+1,e,key);
//     // }
//     // else{
//     //    return bs(arr,s,mid-1,key);
//     // }
//     return arr[mid]<key?bs(arr,mid+1,e,key):
//     bs(arr,s,mid-1,key);
// }

// void subsequence(string str,string ans,int i){
//     if(i>=str.length()){
//         cout<<"string is - "<<ans<<endl;
//         return ;
//     }
//     //exclude
//     subsequence(str,ans,i+1);  
//     //include
//     ans.push_back(str[i]);   // ans=ans+str[i];
//     subsequence(str,ans,i+1);
// }

// int ways(vector<int> &v,int target){
//     if(target==0){
//         return 0;
//     }
//     if(target<0){
//         return INT8_MAX;
//     }
//     int mini=INT8_MAX;
//     for(int i=0;i<v.size();i++){
//         int ans=ways(v,target- v[i]);
//         if(ans!=INT8_MAX)
//         mini=min(mini,ans+1);
//     }
//     return mini;
// }

// int cut(int n,int x,int y,int z){
//     if(n==0){
//         return 0;
//     }
//     if(n<0){
//         return INT8_MIN;
//     }
//     int a=cut(n-x,x,y,z) +1;
//     int b=cut(n-y,x,y,z) +1;
//     int c=cut(n-z,x,y,z) +1;
//     int ans=max(a,max(b,c));
//     return ans;
// }

// void adjacent(vector<int> &arr ,int i,int sum,int &maxi){
//     if(i>=arr.size()){
//         maxi=max(sum,maxi);
//         return;
//     }
//     // include
//     adjacent(arr,i+2,sum+arr[i],maxi);
//     // exclude
//     adjacent(arr,i+1,sum,maxi);
// }

// int occurrence(string &s,char x,int &ans,int i){
//     if(i>=s.length())
//     return ans;
//     if(s[i]==x){    //l to r
//         ans=i;
//     }
//     occurrence(s,x,ans,i+1);
// }

// int occurrence(string &s,char x,int i){
//     if(i<0)
//     return -1;
//     if(s[i]==x){
//         return i;  //r to l
//     }
//     occurrence(s,x,i-1);
// }

// void reverse(string &str,int s,int e){
//     if(s>=e)
//     return ;
//     swap(str[s],str[e]);
//     reverse(str,s+1,e-1);
// }

// void add(string &s1,string &s2,int p1,int p2,int carry,string &ans){
//     if(p1<0 && p2<0){
//         if(carry!=0){
//             ans.push_back(carry+'0');
//         }
//         return ;
//     }
//     int n1=(p1>=0 ? s1[p1] : 0 ) - '0';
//     int n2=(p2>=0 ? s2[p2] : 0 ) - '0';
//     int sum= n1 + n2 + carry;
//     int digit=sum % 10;
//     carry=sum / 10;
//     ans.push_back(digit + '0');
//     add(s1,s2,p1-1,p2-1,carry,ans);
// }

// bool check(string &str,int s,int e){
//     if(s>=e)
//     return true;
//     if(str[s]==str[e]){
//         check(str,s+1,e-1);
//     }
// }

// void remove(string &str,string &ch){
//     int found=str.find(ch);
//     if(found!=string::npos){
//         string left_part=str.substr(0,found);
//         string right_part=
//         str.substr(found+ch.size(),str.size());
//         str=left_part+right_part;
//         remove(str,ch);
//     }
//     else{
//         return ;
//     }
// }

// int tickets(vector<int> &days,vector<int> &costs,int i){
//     if(i>=days.size())
//     return 0;
//     int cost1=costs[0] + tickets(days,costs,i+1);
//     // 7 days
//     int passEndDay=days[i]+7-1;
//     int j=i;
//     while(days[j]<=passEndDay  && j<days.size()){
//         j++;
//     }
//     int costs7=costs[1]+tickets(days,costs,j);
//     // 30 days
//      passEndDay=days[i]+30-1;
//      j=i;
//     while(days[j]<=passEndDay  && j<days.size()){
//         j++;
//     }
//     int costs30=costs[2]+tickets(days,costs,j);
//     return min(cost1,(min(costs7,costs30)));
// }

// void subarray_util(vector<int> &arr,int s,int e){
//     if(e==arr.size())
//     return;
//     for(int i=s;i<=e;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     subarray_util(arr,s,e+1);
// }
// void subarray(vector<int> &arr){
//     for(int s=0;s<arr.size();s++){
//         int e=s;
//         subarray_util(arr,s,e);
//     }
// }

// void stocks(vector<int> &prices,int &minprice,
//     int &maxprofit,int i){
//         if(i==prices.size())
//         return ;
//         if(prices[i]<minprice){
//             minprice=prices[i];
//         }
//         int todayprofit=prices[i]-minprice;
//         if(todayprofit>maxprofit){
//             maxprofit=todayprofit;
//         }
//         stocks(prices,minprice,maxprofit,i+1);
// }

// int rob(vector<int> &arr,int i){
//     if(i>=arr.size())
//     return 0;
//     int robAmt1=arr[i]+rob(arr,i+2);
//     int robAmt2=0+rob(arr,i+1);
//     return max(robAmt1,robAmt2);
// }

// bool wildcard(string &s, string &p ,int si, int pi){
//     if(si==s.size() && pi==p.size()){
//         return true;
//     }
//     if(si==s.size() && pi<p.size()){
//         while(pi<p.size()){
//             if(p[pi]!='*')
//                 return false;
//                 pi++;
//         }
//         return true;
//     }
//     if(s[si]==p[pi] || '?'==p[pi]){
//         return wildcard(s,p,si+1,pi+1);
//     }
//     if(p[pi]=='*'){
//         // treat * as empty
//         bool caseA=wildcard(s,p,si,pi+1);
//         // * consume 1 char
//         bool caseB=wildcard(s,p,si+1,pi);
//         return caseA || caseB;
//     }
//     return false;
// }

// string numtowords(int num,vector<pair<int,string>>& mp){
//     if(num==0){
//         return "zero";
//     }
//     for(auto it:mp){
//         if(num>=it.first){
//             string a=" ";
//             if(num>=100){
//                 a=numtowords(num/it.first,mp);
//             }
//             string b=it.second;
//             string c=" ";
//             if(num % it.first!=0){
//                 c=numtowords(num%it.first,mp);
//             }
//             return a + b + c;
//         }
//     }
// }

// int perfect(int n){
//     if(n==0)
//     return 1;
//     if(n<0)
//     return 0;
//     int i=1;
//     // int end=sqrt(n);
//     int ans=INT8_MAX;
//     while(n>=i*i){  //i<=end
//         int perfectsquare=i*i;
//         int noofsquares=1+perfect(n-perfectsquare);
//         if(noofsquares<ans){
//             ans=noofsquares;
//         }
//         ++i;
//     }
//     return ans;
// }

// int diceroll(int n,int k,int target){
//     if(target<0) return 0;
//     if(n==0 && target==0) return 1;
//     if(n==0 && target!=0)return 0;
//     if(n!=0 && target==0) return 0;

//     int ans=0;
//     for(int i=1;i<=k;i++){
//         ans=ans + diceroll(n-1,k,target-i);
//     }
//     return ans;
// }
int main(){
    // factorial of a no.
    // int n;
    // cout<<"enter the value of n"<<endl;
    // cin>>n;
    // int ans=factorial(n);
    // cout<<ans;

    // // reverse counting
    // int n;
    // cout<<"enter the value of n"<<endl;
    // cin>>n;
    // reverse(n);

    // // fibonacci series
    // int n;
    // cout<<"enter the value of n"<<endl;
    // cin>>n;
    // cout<<fibonacci(n);

    // // climb stairs - no of ways to reach n stairs
    // int n;
    // cout<<"enter the no of stairs"<<endl;
    // cin>>n;
    // cout<<stairs(n);

    // print array
    // int arr[5]={1,2,3,4,5};
    // int n=5;
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // int i=0;
    // print(arr,n ,i);
    // print(arr,n);

    // // max element in an array
    // int arr[]={10,30,15,21,45,26,66};
    // int n=sizeof(arr)/sizeof(int);
    // int i=0;
    // int ans=INT8_MIN;
    // cout<<maximum(arr ,n ,i,ans);

    // // finding key in string
    // string s="utkarshvijay";
    // int i=0;
    // char key='a';
    // vector<int>ans;
    // finding(s ,i ,key,ans);
    // cout<<"printing ans"<<endl;
    // for(auto val:ans){
    //     cout<<val<<" ";
    // }

    // print each digit of ano.
    // int val=6547;
    // each(val);

    // // sorted or not
    // int arr[]={10,20,30,40,50};
    // int n=sizeof(arr)/sizeof(int);
    // int i=0;
    // bool check=sorted(arr,n,i); 
    // if(check){
    //     cout<<"array is sorted";
    // }
    // else{
    //     cout<<"array is unsorted";
    // }

    // // binary search
    // vector<int>arr{10,20,30,40,50};
    // int n=arr.size();
    // int s=0;
    // int e=n-1;
    // int key=80;
    // cout<<bs(arr,s,e,key);

    // // subsequence of a string  *imp*
    // string str="abc";
    // string ans="";
    // int i=0;
    // subsequence(str,ans,i);

    // vector<int>v(10);//if size not given , it showss error
    // v[0]=5;
    // cout<<v[0];

    // // min ways to get the target
    // vector<int>v{1,2,3};
    // int target=10;
    // int ans=ways(v,target);
    // cout<<ans;

    // // cut into segments
    // int  n=7;
    // int x=5;
    // int y=2;
    // int z=2;
    // cout<<cut(n,x,y,z);

    // // max. sum of non adjacent elements
    // vector<int>arr{2,1,4,9};
    // int sum=0;
    // int maxi=INT8_MIN;
    // int i=0;
    // adjacent(arr,i,sum,maxi);
    // cout<<maxi;

    // // last occurrence of a char
    // string s="abcdedfdgh";
    // char x='a';
    // int ans=-1;
    // int i=s.length();
    // // occurrence(s,x,ans,i);
    // // cout<<ans;
    // cout<<occurrence(s,x,i);
    // strchr();

    // // reverse a string
    // string str="atikna";
    // int s=0;
    // int e=str.length()-1;
    // reverse(str,s,e);
    // cout<<str;

    // // add strings
    // string s1="299";
    // string s2="879";
    // int p1=s1.size()-1;
    // int p2=s2.size()-1;
    // int carry=0;
    // string ans="";
    // add(s1,s2,p1,p2,carry,ans);
    // reverse(ans.begin(),ans.end());
    // cout<<ans;

    // // pallindrome check
    // string str="racecar";
    // int s=0;
    // int e=str.length()-1;
    // cout<<check(str,s,e);

    // // remove all occurrences of a substring
    // string str="daabcaabcbce";
    // string ch="abc";
    // remove(str,ch);
    // cout<<str;

    // // min. costs of tickets
    // vector<int>days{1,4,6,7,8,20};
    // vector<int>costs{2,7,15};
    // int i=0;
    // cout<<tickets(days,costs,i);

    // print all subarray
    // vector<int>arr{1,2,3,4,5};
    // subarray(arr);

    // // buy ans sell stocks
    // vector<int>prices{7,6,7,8,6,4};
    // int minprice=INT8_MAX;
    // int maxprofit=INT8_MIN;
    // int i=0;
    // stocks(prices,minprice,maxprofit,i);
    // cout<<maxprofit;

    // // house rob problem
    // vector<int>arr{2,7,9,3,1};
    // int i=0;
    // cout<<rob(arr,i);

    // // wild card matching
    // string s="abcdefg";
    // string p="ab*fg";
    // int si=0;
    // int pi=0;
    // cout<<wildcard(s,p,si,pi);

    // // integers to words
    // int num=123456;
    // vector<pair<int,string>> mp={
    // {100000000,"billion"},{100000,"million"},{1000,"thousand"},{100,"humdred"},
    // {90,"ninty"},{80,"eighty"},{70,"seventy"},{60,"sixty"},{50,"fifty"},{40,"fourty"},
    // {30,"thirty"},{20,"twenty"},{19,"nineteen"},{18,"eighteen"},{17,"seventeen"},{16,"sixteen"},
    // {15,"fifteen"},{14,"fourteen"},{13,"thirteen"},{12,"twelve"},{11,"eleven"},{10,"ten"},
    // {9,"nine"},{8,"eight"},{7,"seven"},{6,"six"},{5,"five"},{4,"four"},{3,"three"},
    // {2,"two"},{1,"one"}
    // };
    // cout<<numtowords(num,mp);

    // // perfect squares
    // int n=13;
    // cout<<perfect(n)-1;

    // // no of dice roll with target
    // int n=2;  //no of dice
    // int k=6;  //no of faces
    // int target=3;
    // cout<<diceroll(n,k,target);

    
    










   
    return 0;
}

