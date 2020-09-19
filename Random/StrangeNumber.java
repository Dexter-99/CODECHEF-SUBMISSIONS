import java.util.Scanner;

/**
 * StrangeNumber
 */
public class StrangeNumber {

  public static void main(String[] args) {
    Scanner sn = new Scanner(System.in);
    int n = sn.nextInt();
    // int k = sn.nextInt();
    // if (k <= Math.pow(2 ^ k)) {
    // system.out.println("0");
    // } else {

    // }
    boolean flag = true;
    for (int i = 1; i < n; i++) {
      int count = 0, primeCount = 0;
      // System.out.println(i + "yeh heh");
      for (int j = 1; j <= i; j++) {

        if (i % j == 0) {
          if (checkPrime(j)) {
            primeCount++;
          }

          count++;
        }
      }
      System.out.println(i + " " + count + " " + primeCount + " ");

    }
    System.out.println(flag);
  }

  public static boolean checkPrime(int n) {
    int count = 0;
    if (n > 1) {
      for (int i = 2; i <= n; i++)
        if (n % i == 0)
          count++;
      if (count > 1)
        return false;
      else
        return true;
    } else
      return false;
  }

  public static String StrangeNum(int x, int k) {
    String str = "";
    if (x <= k)
      str = "0";
    else if (x == 1 && k == 0)
      str = "1";
    else if (k == 1 && x > k)
      str = "1";
    else if (x >= k * 2)
      str = "1";
    else
      str = "-1";
    return str;

  }

}