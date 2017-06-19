import java.util.*;
import java.lang.*;
import java.math.BigInteger;

// Result = Partial Correct Answer (30 marks)
 
class CHEFCODE {
 
  public static BigInteger checkSub(long arr[], int n, long k) {
    // cout << opsize << endl;
    BigInteger pro = BigInteger.ONE;
    BigInteger count = BigInteger.ZERO;
    for (long counter = 1; counter < (long)Math.pow(2,n); counter++) {
        pro = BigInteger.ONE;
        for (int j = 0; j < n; j++) {
            if ((counter & (1<<j))>0)
                pro = pro.multiply(BigInteger.valueOf(arr[j]));
        }
        //System.out.print(pro + " ");
      if(BigInteger.valueOf(k).compareTo(pro) > 0) {
        count = count.add(BigInteger.ONE);
      }
    }
    return count.add(BigInteger.ONE);
}
 
  public static void main(String[] args) {
    int n;
    Scanner s = new Scanner(System.in);
    n = s.nextInt();
    long k;
    k = s.nextLong();
    long a[] = new long[n];
    int p = 0;
    int one = 0;
    for (int i=0; i < n ; i++) {
      long x = s.nextLong();
      if(x<=k && x!=1) {
        a[p] = x;
        p++;
      }
      else if(x==1)
        one++;
    }
    BigInteger base = new BigInteger("2");
    BigInteger power = base.pow(one);
    power = power.multiply((checkSub(a, p, k)));
    power = power.subtract(BigInteger.ONE);
    System.out.print(power);
  }
} 