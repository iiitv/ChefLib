// Code written by Monal
import java.io.*;
import java.util.*;
class CapitalMovement
	{
	static class FastReader
    {
        BufferedReader br;
        StringTokenizer st;
 
        public FastReader()
        {
            br = new BufferedReader(new
                     InputStreamReader(System.in));
        }
 
        String next()
        {
            while (st == null || !st.hasMoreElements())
            {
                try
                {
                    st = new StringTokenizer(br.readLine());
                }
                catch (IOException  e)
                {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }
 
        int nextInt()
        {
            return Integer.parseInt(next());
        }
 
        long nextLong()
        {
            return Long.parseLong(next());
        }
 
        double nextDouble()
        {
            return Double.parseDouble(next());
        }
 
        String nextLine()
        {
            String str = "";
            try
            {
                str = br.readLine();
            }
            catch (IOException e)
            {
                e.printStackTrace();
            }
            return str;
        }
    }
 
 
 
	
    public static void main(String[] args)throws Exception
    {
    int tc;
   FastReader scan=new FastReader();
   int n,tmp1,tmp2,ans;
	long max;
	tc=scan.nextInt();
HashMap<Integer, boolean[][]> map = new HashMap();
    while(tc--!=0)
    	{
	n=scan.nextInt();
    	long []popu=new long[n+1];
boolean[][] matrix=new boolean[n+1][n+1];
    	for(int i=1;i<n+1;i++)
    		popu[i]=scan.nextLong();
    	for(int i=0;i<n-1;i++)
    		{
		tmp1=scan.nextInt();
		tmp2=scan.nextInt();
    		matrix[tmp1][tmp2]=true;
    		matrix[tmp2][tmp1]=true;
    		matrix[i+1][i+1]=true;
    		}
    	matrix[n][n]=true;
    	/*for(i=1;i<n+1;i++)
    		{
    		for(j=1;j<n+1;j++)
    			printf("%d ",matrix[i][j]);
    		printf("\n");		
    		}
    	*/
    	for(int i=1;i<n+1;i++)
    		{
    		ans=0;
    		max=0;
    		for(int j=1;j<n+1;j++)
    			{
    			if(matrix[i][j]==false&&popu[j]>max)
    				{
    				ans=j;
    				max=popu[j];				
    				}
    			}
    		System.out.print(ans+" ");
    		}
    	System.out.println("");
	map.clear();
	matrix=null;	
    	}
    }
}
