import java.math.BigInteger;
import java.util.Scanner;

/**
 * Matrix
 */
public class Matrix {

  public static void main(String[] args) {
    Scanner sn = new Scanner(System.in);
    long n = sn.nextInt();
    long a = sn.nextInt();
    BigInteger m = new BigInteger("1000000007");
    BigInteger A = BigInteger.valueOf(a);
    BigInteger p = new BigInteger("0");
    BigInteger total = new BigInteger("0");
    // int p = 0;
    for (int i = 1; i <= n; i++) {
      p = (A.pow(2 * i - 1)).mod(m);
      total = (total.add(p)).mod(m);
      A = (A.multiply(p)).mod(m);
      // total = ((total % mod) + (p % mod)) % mod;
      // a = a * p;
    }
    System.out.println(total);
  }
}