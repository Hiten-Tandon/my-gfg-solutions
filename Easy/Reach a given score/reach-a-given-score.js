//{ Driver Code Starts
//Initial Template for javascript

'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });
    
    main();
});

function readLine() {
    return inputString[currentLine++];
}

function printList(res,n){
    let s="";
    for(let i=0;i<n;i++){
        s+=res[i];
        s+=" ";
    }
    console.log(s);
}


function main() {
    let t = parseInt(readLine());
    let i = 0;
    for(;i<t;i++)
    {
        let n = parseInt(readLine());
        let obj = new Solution();
        let res = obj.count(n);
        console.log(res);
        
    }
}// } Driver Code Ends





// } Driver Code Ends


//User function Template for javascript

/**
 * @param {number} n
 * @returns {number}
*/

class Solution{
    count(n){
        if(n < 3) {
            return 0;
        }
        
        const dp = Array(n + 1).fill(0);
        
        dp[0] = 1;
        
        for(let i = 3; i <= n; ++i) {
            dp[i] += dp[i - 3];
        }
        
        for(let i = 5; i <= n; ++i) {
            dp[i] += dp[i - 5];
        }
        
        for(let i = 10; i <= n; ++i) {
            dp[i] += dp[i - 10];
        }
        
        return dp[n];
    }
}

