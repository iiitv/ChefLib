import java.util.*;

class KBIGNUMB{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		long t = s.nextLong();
		while(t>0){	
			String str = s.nextLine();
			long n = s.nextLong();
			long i;
			for(i=0;i<n;i++){
				str.concat(str);
			}
			System.out.println(str);
			t = t-1;
		}
		
	}
}