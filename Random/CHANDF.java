import java.util.Random;
import java.util.Scanner;

/**
 * CHANDF
 */
public class CHANDF {

  public static void main(String[] args) {
    Scanner sn = new Scanner(System.in);
    Random r = new Random();
    while (true) {
      long range = 10L;
      long x = (long) (r.nextDouble() * range);
      long y = (long) (r.nextDouble() * range);
      long index = -1;
      long max = Long.MIN_VALUE;
      for (long i = 0; i <= 100; i++) {
        long res = (x & i) * (y & i);
        if (res > max) {
          max = res;
          index = i;
        }
      }
      long temp1 = x;
      long temp2 = y;
      long ans = binary(temp1, temp2, 1000000000, 1000000050);
      System.out.println(x + " " + y + " " + index + " " + ans);
      if (index != ans)
        break;
      // System.out.println(x + " " + y + " " + index + " " + flag);
    }

    // binary(temp2, l, r);
  }

  private static long binary(long temp1, long temp2, long l, long r) {

    if (temp2 == 0 || temp1 == 0)
      return 0;
    long ans = temp1 | temp2;
    boolean flag = true;
    while (flag) {
      if (ans >= l && ans <= r)
        flag = false;
      else if (ans < l) {
        ans <<= 1;
      } else if (ans > r) {
        ans >>= 1;
      }
    }
    return ans;
  }

}