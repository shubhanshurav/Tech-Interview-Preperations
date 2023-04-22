class Solution {
public:
    int mySqrt(int x) {
       // agar x = 0 ho to  
       if(x==0) return 0;

       long long s = 1;   // starting variable denoted by- s
       long long e = x;   // ending variable denoted - e
       long long ans;     // for storing the answer
       while(s<=e){
        // we can also use this [mid = (s+e)/2] for finding mid
        // but overflow ko rokne ke liye hmne [mid = s+(e-s)/2] iska use kiya

           long long mid = s + (e-s)/2;  //calculate mid
           if(mid*mid == x){  //agar mid^2 ,x ke brabar ho to mid return kr do
               return mid;
           }else if(mid*mid < x){  //agar chhota ho to ans var. me stor krke start ko mid+1 kr do
               ans = mid;
               s = mid + 1;
           }else{
               e = mid - 1;    // nhi to end ko mid-1 kr do
           }
       }
       return ans;
    }
};