import java.math.BigInteger;
import java.util.Scanner;

/**
 * GCD2
 */
public class GCD2 {

  public static void main(String[] args) {
    Scanner sn = new Scanner(System.in);
    int a = sn.nextInt();
    int b = sn.nextInt();
    System.out.println(gcd(BigInteger.valueOf(a), BigInteger.valueOf(b)));
  }

  private static BigInteger gcd(BigInteger a, BigInteger b) {
    return (b.compareTo(BigInteger.valueOf(0)) == 0) ? a : gcd(b, a.mod(b));
  }
}