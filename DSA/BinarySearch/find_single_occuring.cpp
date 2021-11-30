// Problem Description

// Given a sorted array of integers A where every element appears twice except for one element which appears once, find and return this single element that appears only once.

// NOTE: Users are expected to solve this in O(log(N)) time.



// Problem Constraints

// 1 <= |A| <= 100000

// 1 <= A[i] <= 10^9



// Input Format

// The only argument given is the integer array A.



// Output Format

// Return the single element that appears only once.



// Example Input

// Input 1:

// A = [1, 1, 7]
// Input 2:

// A = [2, 3, 3]


// Example Output

// Output 1:

//  7
// Output 2:

//  2



int Solution::solve(vector<int> &A) {
    int n = A.size();
    int h = n-1;
    if(h==0)
        return A[0];
    if(A[0]!=A[1])
        return A[0];
    if(A[n-1]!=A[n-2])
        return A[n-1];
    
    int l =0;
    while(l<=h){
        int m = l+(h-l)/2;
        if(A[m] != A[m+1] && A[m] != A[m-1])
            return A[m];

        if((m%2==0 && A[m]==A[m+1])||(m%2==1 && A[m]==A[m-1])){
            l=m+1;
        }
        else{
            h=m-1;
        }
    }
    return -1;

    
}
