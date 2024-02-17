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
        let arr = new Array(n);
        let input_ar1 = readLine().split(' ').map(x=>parseInt(x));
        for(let i=0;i<n;i++){
            arr[i] = input_ar1[i];
        }
        let obj = new Solution();
        let res = obj.isMaxHeap(n,arr);
        if(res === true){
            console.log(1);
        }
        else{
            console.log(0);
        }
        
    }
}// } Driver Code Ends




// } Driver Code Ends


//User function Template for javascript


/**
 * @param {number} n
 * @param {number[]} arr
 * @returns {bool}
*/

class Solution{
    isMaxHeap(n,arr){
        for(let i = 0; i < arr.length / 2; ++i) {
            let left = 2 * i + 1;
            let right = 2 * i + 2;
            
            if(
                (left < arr.length && arr[left] > arr[i])
                || (right < arr.length && arr[right] > arr[i])
            ) {
                return false;
            }
        }
        
        return true;
    }
}
