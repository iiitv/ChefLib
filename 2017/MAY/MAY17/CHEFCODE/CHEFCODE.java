// Code written by Monal
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;
import java.util.StringTokenizer;
import java.io.DataInputStream;
import java.util.Vector;
import java.math.BigInteger;
 
class ChefAndSubsequences1 {
    static class Reader {
        final private int BUFFER_SIZE = 1 << 16;
        private DataInputStream din;
        private byte[] buffer;
        private int bufferPointer, bytesRead;
 
        public Reader() {
            din = new DataInputStream(System.in);
            buffer = new byte[BUFFER_SIZE];
            bufferPointer = bytesRead = 0;
        }
 
        public Reader(String file_name) throws IOException {
            din = new DataInputStream(new FileInputStream(file_name));
            buffer = new byte[BUFFER_SIZE];
            bufferPointer = bytesRead = 0;
        }
 
        public String readLine() throws IOException {
            byte[] buf = new byte[64]; // line length
            int cnt = 0, c;
            while ((c = read()) != -1)
            {
                if (c == '\n')
                    break;
                buf[cnt++] = (byte) c;
            }
            return new String(buf, 0, cnt);
        }
 
        public int nextInt() throws IOException {
            int ret = 0;
            byte c = read();
            while (c <= ' ')
                c = read();
            boolean neg = (c == '-');
            if (neg)
                c = read();
            do {
                ret = ret * 10 + c - '0';
            }  while ((c = read()) >= '0' && c <= '9');
 
            if (neg)
                return -ret;
            return ret;
        }
 
        public long nextLong() throws IOException {
            long ret = 0;
            byte c = read();
            while (c <= ' ')
                c = read();
            boolean neg = (c == '-');
            if (neg)
                c = read();
            do {
                ret = ret * 10 + c - '0';
            }
            while ((c = read()) >= '0' && c <= '9');
            if (neg)
                return -ret;
            return ret;
        }
 
        public double nextDouble() throws IOException {
            double ret = 0, div = 1;
            byte c = read();
            while (c <= ' ')
                c = read();
            boolean neg = (c == '-');
            if (neg)
                c = read();
 
            do {
                ret = ret * 10 + c - '0';
            }
            while ((c = read()) >= '0' && c <= '9');
 
            if (c == '.') {
                while ((c = read()) >= '0' && c <= '9') {
                    ret += (c - '0') / (div *= 10);
                }
            }
 
            if (neg)
                return -ret;
            return ret;
        }
 
        private void fillBuffer() throws IOException {
            bytesRead = din.read(buffer, bufferPointer = 0, BUFFER_SIZE);
            if (bytesRead == -1)
                buffer[0] = -1;
        }
 
        private byte read() throws IOException {
            if (bufferPointer == bytesRead)
                fillBuffer();
            return buffer[bufferPointer++];
        }
 
        public void close() throws IOException {
            if (din == null)
                return;
            din.close();
        }
    }
    public static void main(String[] args) throws Exception {
        Reader scan = new Reader();
        int n;
        long k;
        n = scan.nextInt();
        k = scan.nextLong();
        BigInteger kb = BigInteger.valueOf(k);
        long answer = 0;
        Vector <BigInteger> products = new Vector <BigInteger> (); 
        BigInteger[] arr = new BigInteger[n];
        long temp;
        long prev1 = 0;
        for (int i = 0; i < n; ++i) {
            temp = scan.nextLong();
            arr[i] = BigInteger.valueOf(temp);
            if (arr[i].compareTo(BigInteger.ONE) == 0) {
                answer += prev1;
                for (int j = 0; j < products.size(); ++j) {
                    if (products.get(j).compareTo(kb) <= 0) {
                        answer++;
                        prev1++;
                    }
                }
                answer++;
                products.add(arr[i]);
            }
            else if (arr[i].compareTo(kb) <= 0) {
                int size = products.size();
                for (int j = 0; j < size; ++j) {
                    BigInteger tmp = arr[i].multiply(products.get(j));
                    if (tmp.compareTo(kb) <= 0) {
                        products.add(tmp);
                        answer++;
                    }
                }
                answer++;
                products.add(arr[i]);
            }
        }
        System.out.println(answer);
    }
}
