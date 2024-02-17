//{ Driver Code Starts
//Initial Template for C#

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DriverCode
{

    class GFG
    {
        static void Main(string[] args)
        {
            int testcases;// Taking testcase as input
            testcases = Convert.ToInt32(Console.ReadLine());
            while (testcases-- > 0)// Looping through all testcases
            {
                int N = Convert.ToInt32(Console.ReadLine());
                int[] A = new int[N];
                string elements = Console.ReadLine().Trim();
                elements = elements + " " + "0";
                A = Array.ConvertAll(elements.Split(), int.Parse);
                Solution obj = new Solution();
                bool res = obj.isMaxHeap(A, N);
                if(res == true){
                    Console.Write(1);
                }
                else{
                    Console.Write(0);
                }
                Console.Write("\n");
          }

        }
    }
}

// } Driver Code Ends


//User function Template for C#

class Solution {
    public bool isMaxHeap(int[] arr, int n) {
        for(int i = 0; i < arr.Length / 2; ++i) {
            int left = 2 * i + 1;
            int right = 2 * i + 2;
            
            if(
                (left < arr.Length && arr[left] > arr[i])
                || (right < arr.Length && arr[right] > arr[i])
            ) {
                return false;
            }
        }
        
        return true;
    }
}