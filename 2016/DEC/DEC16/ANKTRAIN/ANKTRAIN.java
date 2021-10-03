import java.io.BufferedReader;
import java.io.InputStreamReader;
 class RahulRashi {
	
	public static void main(String args[]) throws Exception {
		BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
		int t = Integer.parseInt(bf.readLine());
		while (t-- > 0) {
			
			int p= Integer.parseInt(bf.readLine());
			String ans = "";
			int n= p%8;
			if(n==0)
				ans = ((7+(p>8?8*(p/8-1):0))+"SL");
			else if(n==7)
				ans= ((8+(p>8?8*(p/8):0))+"SU");
			int tmp = (n>3?n-3:n+3) + (p>8?8*(p/8):0);
			if(n==1 || n==4) ans=tmp+"LB";
			if(n==2 || n==5) ans= tmp+"MB";
			if(n==3 || n==6) ans=tmp+"UB";
			System.out.println(ans);
			}
		}
}
