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

class Node{
    constructor(data){
        this.data = data;
        this.left = null;
        this.right = null;
    }
}

function newNode(root, data){
    if(root === null)
        root = new Node(data);
    else if(data < root.data)
        root.left = newNode(root.left, data);
    else
        root.right = newNode(root.right, data);
    return root;
}

function main() {
    let t = parseInt(readLine());
    let i = 0;
    for(;i<t;i++)
    {
        let n = parseInt(readLine());
        let input_ar1 = (readLine()).split(' ').map(x=>parseInt(x));
        let root = null;
        for(let i=0;i<n;i++){
            root = newNode(root, input_ar1[i]);
        }
        let obj = new Solution();
        console.log(obj.sumOfLeafNodes(root));
        
    }
}
// } Driver Code Ends


//User function Template for javascript
/**
 * @param {Node} root
 * @returns {number}
 */

class Solution {
    sumOfLeafNodes(root) {
        if(!root) {
            return 0;
        }
        
        if(!root.left && !root.right) {
            return root.data;
        }
        
        return this.sumOfLeafNodes(root.left) + this.sumOfLeafNodes(root.right);
    }
}