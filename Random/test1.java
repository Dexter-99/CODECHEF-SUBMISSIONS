import java.util.Scanner;

/**
 * test1
 */
public class test1 {

  public static void main(String[] args) {
    Scanner sn = new Scanner(System.in);
    int x = sn.nextInt();
    int k = sn.nextInt();
    int minx = (int) Math.pow(2, k);
    if (x < minx) {
      System.out.println(0);
    } else {
      if (primeFactors(x) >= k)
        System.out.println(1);
      else
        System.out.println(0);
    }

  }

  public static int primeFactors(int n) {
    int count = 0;
    for (int i = 2; i <= Math.sqrt(n); i++) {
      if (n % i == 0) {
        while (n % i == 0) {
          n = n / i;
          count++;
        }
      }
    }
    if (n != 1)
      count++;
    return count;
  }
}