// Code written by Monal
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;
import java.util.StringTokenizer;
 
class Solution {
    static class FastReader
    {
        BufferedReader br;
        StringTokenizer st;
 
        public FastReader() {
            br = new BufferedReader(new
                     InputStreamReader(System.in));
        }
 
        int nextInt() {
            return Integer.parseInt(next());
        }
 
        long nextLong() {
            return Long.parseLong(next());
        }
 
        String next() {
            while (st == null || !st.hasMoreElements()) {
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException  e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }
 
    }
 
    public static void main(String[] args) throws Exception {
        FastReader scan=new FastReader();
        int tc=scan.nextInt();
        while (tc--!=0) {
            int n=scan.nextInt();
            int q=scan.nextInt();
            long[] arr = new long[n];
 
            for (int i=0;i<n;i++) {
                arr[i]=scan.nextLong();
            }
            long prev = arr[n-1];
            long count=0;
            long[] occ = new long[n];
            for(int i=n-1;i>=0;i--) {
                count=1;
                prev=arr[i];
                while (arr[i]==prev) {
                occ[i]=count;
                count++;
                i--;
                if (i<0)
                    break;
                }
                i++;
            }
 
            while (q--!=0) {
                int l=scan.nextInt();
                int r=scan.nextInt();
                int k=scan.nextInt();
                long answer=0;
                prev = arr[l-1];
                for (int i=l-1;i<r;i++) {
                    long tmp=occ[i];
                    if (i+tmp>r) {
                        tmp = tmp - occ[r];
                    }
                    if (tmp>=k) {
                        answer++;
                        i += (tmp-1);
                    }
                }
                System.out.println(answer);
            }
        }
    }
}
