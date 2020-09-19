import java.util.Scanner;

/**
 * XORNEY
 */
public class XORNEY {

  public static void main(String[] args) {
    Scanner sn = new Scanner(System.in);
    int t = sn.nextInt();
    while (t-- > 0) {
      long l = sn.nextInt();
      long r = sn.nextInt();
      long xor = 0;
      for (long i = l; i <= r; i++)
        xor ^= i;
      if (xor % 2 == 0)
        System.out.println("EVEN");
      else
        System.out.println("ODD");
    }
  }
}