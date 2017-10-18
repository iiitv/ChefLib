import java.util.Scanner;

public class MINPERM {
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        int tc = inp.nextInt();
        while (tc-- != 0) {
            int n = inp.nextInt();
            int final_array[] = new int[n];
            for(int j=0; j<n-2; j++) {
                if(j%2==0)
                    final_array[j] = j+2;
                else
                    final_array[j] = j;
            }
            if(n%2==0)
                final_array[n-1] = n-1;
            else
                final_array[n-1] = n-2;
            final_array[n-2] = n;
            for(int j=0; j<n; j++)
                System.out.print(final_array[j]+" ");
            System.out.println();
        }
        inp.close();
    }
}
