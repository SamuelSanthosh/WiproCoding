import java.util.*;
import java.lang.*;
import java.io.*;

class Hello {
    static int kadanesAlgo(int a[],int N)
    {
        int max_so_far = Integer.MIN_VALUE,max_ending_here = 0;
        for(int i=0;i<N;i++)
        {
            max_ending_here += a[i];
            if(max_so_far < max_ending_here)
                max_so_far = max_ending_here;
            if(max_ending_here < 0)
                max_ending_here = 0;
            
        }
        return max_so_far;
    }
	public static void main (String[] args) {
		//code
		Scanner S = new Scanner(System.in);
		int T = S.nextInt();
		for(int i=0;i<T;i++)
		{
		    int N = S.nextInt();
		    int a[] = new int[N];
		    for(int j=0;j<N;j++)
		        a[j]=S.nextInt();
		    System.out.println(kadanesAlgo(a,N));      
		}
	}
}
