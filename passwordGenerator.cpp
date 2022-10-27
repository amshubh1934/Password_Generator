#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>
#include<unordered_map>
#include<set>
#include<map>
#include<algorithm>
#include<climits>
#define MOD 1000000007
using namespace std;
//template< class T> bool binarySearch(vector<T> arr,T target){
//  int start = 0,end = (int)arr.size();
//  int mid = 0;
//  while(start <= end){
//    mid = start + (end - start) / 2;
//    if(arr[mid] == target){
//      return true;
//    }
//    else if(arr[mid] > target){
//      end = mid - 1;
//    }
//    else if(arr[mid] < target){
//      start = mid + 1;
//    }
//  }
//  return false;
//}
vector<char> merge(vector<char> a,vector<char> b,vector<char> c,vector<char> d){
  int N = (int)a.size() + (int)b.size() + (int)c.size();
  vector<char> ans(N);
  for(int i = 0;i < (int)a.size();i++){
    ans[i] = a[i];
  }
  for(int i = 0;i < (int)b.size();i++){
    ans[i + (int)a.size()] = b[i];
  }
  for(int i = 0;i < (int)c.size();i++){
    ans[i + (int)a.size() + (int)b.size()] = c[i];
  }
  for(int i = 0;i < (int)d.size();i++){
    ans[i + (int)a.size() + (int)b.size() + (int)c.size()] = d[i];
  }
  return ans;
}
int main(){
/*#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
#endif*/
  vector<char> numbers = {'0','1','2','3','4','5','6','7','8','9'};
  vector<char> letters = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
  vector<char> specialChar = {'!','(',')','-','.','?','[',']','_','~',';',':','#','@','$','%','^','*','&','+','='};
  vector<char> capitalLetters = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
  int n = (int)numbers.size(),l = (int)letters.size(),s = (int)specialChar.size(),cl = (int)capitalLetters.size();
  int N = n + l + s + cl;
  vector<char> all = merge(numbers,letters,specialChar,capitalLetters);
  int len = 0;
  bool flag = true;
  while(flag){
    cout <<"Enter length greater than 8 : ";
    cin >>len;
    string ans = "";
    if(len < 8){
      cout <<"Length must be greater than or equal to 8.\nPress Ctrl + z to quit." <<endl;
      flag = true;
    }
    else {
      while(len--){ 
        int random = 0 + (rand() % (N - 1)); 
        ans += all[random];
      }
      cout <<ans <<endl;
      flag = false;
    }
  }
  return 0;
}

