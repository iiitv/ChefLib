import java.util.Scanner;

public class CHEFSUM {
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        int tc = inp.nextInt();
        while (tc-- != 0) {
            int n = inp.nextInt();
            long input_array[] = new long[n];
            long sub_array_sum[] = new long[n+1];
            long all_sums[] = new long[n];
            long total_sum = 0;
            for(int j = 0; j < n; j++) {
                input_array[j] = inp.nextInt();
                total_sum += input_array[j];
                sub_array_sum[j+1] = total_sum;
            }
            int min_index = 0;
            for(int j = 0; j < n; j++) {
                all_sums[j] = sub_array_sum[j+1] + (total_sum - sub_array_sum[j]);
                if(all_sums[min_index] > all_sums[j])
                    min_index = j;
            }
            System.out.println(min_index + 1);
        }
        sc.close();
    }
}
