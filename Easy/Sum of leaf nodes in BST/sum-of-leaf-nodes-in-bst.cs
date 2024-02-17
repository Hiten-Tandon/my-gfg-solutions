//{ Driver Code Starts
//Initial Template for C#

using System;
using System.Collections;
public class GFG{
	static public void Main (){
		int testcases=Convert.ToInt32(Console.ReadLine());
		while(testcases-->0)
		{
		    Node root=null;
		    int sizeOfArray=Convert.ToInt32(Console.ReadLine());
		    int []arr=new int[sizeOfArray];
		    arr=Array.ConvertAll(Console.ReadLine().Trim().Split(),int.Parse);
		    
		    for(int i=0;i<sizeOfArray;i++)
		    {
		        root=Geeks.newNode(root,arr[i]);
		    }
	
		  Console.WriteLine(Geeks.sumOfLeafNodes(root));
		}
	}
}


public class Node
{
    public int data;
    public Node left;
    public Node right;
}

public class Geeks
{
    public static Node createNewNode(int value)
    {
        Node temp=new Node();
        temp.data=value;
        temp.left=null;
        temp.right=null;
        return temp;
    }
    static public Node newNode(Node root,int data)
    {
        if(root==null)
        root=createNewNode(data);
        else if(data<root.data)
        root.left=newNode(root.left,data);
        else
        root.right=newNode(root.right,data);
        
        return root;
    }

    
   
// } Driver Code Ends
//User function Template for C#

//Structure of node
/*
public class Node
{
    public int data;
    public Node left;
    public Node right;
}
*/

//Complete this function
public static int sumOfLeafNodes(Node root)
{
    if(root == null) {
        return 0;
    }
    
    if(root.left == null && root.right == null) {
        return root.data;
    }
    
    return sumOfLeafNodes(root.left) + sumOfLeafNodes(root.right);
}

//{ Driver Code Starts.

    
    
    
}
// } Driver Code Ends