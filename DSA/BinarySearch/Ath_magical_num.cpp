// Problem Description

// Given three positive integers A, B and C.

// Any positive integer is magical if it is divisible by either B or C.

// Return the Ath magical number. Since the answer may be very large, return it modulo 109 + 7.



// Problem Constraints

// 1 <= A <= 109

// 2 <= B, C <= 40000



// Input Format

// The first argument given is an integer A.

// The second argument given is an integer B.

// The third argument given is an integer C.



// Output Format

// Return the Ath magical number. Since the answer may be very large, return it modulo 109 + 7.



// Example Input

// Input 1:

//  A = 1
//  B = 2
//  C = 3
// Input 2:

//  A = 4
//  B = 2
//  C = 3


// Example Output

// Output 1:

//  2
// Output 2:

//  6






int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}
int Solution::solve(int A, int B, int C) {
    long res =0;
    long mod = 1e9+7;
    long l = 1;
    long h=1L*A*(min(B,C));
    long lcm = (1L*B*C)/gcd(B,C);
    while(l<=h){
        long m = l+(h-l)/2;
        long mg = m/B+m/C-(m/lcm);
        if(mg<A){
            //res = m;
            l=m+1;
        }
        else{
            res = m;
            h=m-1;
        }
    }
    return (int)(res%mod);
}
