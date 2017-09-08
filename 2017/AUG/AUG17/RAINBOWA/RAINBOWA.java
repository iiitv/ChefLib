import java.util.Scanner;

public class RAINBOWA {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T, N, bef, a;
        int flag, flag1;
        T = sc.nextInt();
        for (int z = 0; z < T; z++) {
            bef = 1;
            boolean[] reached = new boolean[7];
            for (int i = 0; i < 7; i++) {
                reached[i] = false;
            }
            flag = 0;
            N = sc.nextInt();
            String req = "";
            for (int i = 0; i < N; i++) {
                a = sc.nextInt();
                if (a > 7) {
                    flag = 1;
                }
                else
                    reached[a-1] = true;
                if (!reached[6] && a != bef && a != bef + 1) {
                    flag = 1;
                }
                req = req + a;
                bef = a;
            }
            flag1 = 0;
            for (int i = 0; i < 7; i++) {
                if (!reached[i]) {
                    flag1 = 1;
                    break;
                }
            }
            if (flag == 1 || flag1 == 1) {
                System.out.println("no");
            }
            else {
                for (int i = 0; i < req.length() / 2; ++i) {
                    if ( req.charAt(i) != req.charAt(req.length() - i - 1) ) {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 1) {
                    System.out.println("no");
                }
                else {
                    System.out.println("yes");
                }

            }
        }
    }
}

