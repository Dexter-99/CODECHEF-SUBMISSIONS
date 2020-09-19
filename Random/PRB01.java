import java.util.Scanner;

/**
 * PRB01
 */
public class PRB01 {

  static boolean prime[];

  public static void main(String[] args) {
    Scanner sn = new Scanner(System.in);
    int n = sn.nextInt();

    prime = new boolean[n + 1];
    sieve(n);
    if (prime[n] == true)
      System.out.println("yes");
    else
      System.out.println("no");
  }

  private static void sieve(int n) {
    for (int i = 0; i <= n; i++)
      prime[i] = true;

    prime[0] = false;
    prime[1] = false;

    for (int i = 2; i <= Math.sqrt(n); i++) {
      if (prime[i] == true) {
        for (int j = i * i; j <= n; j += i) {
          prime[j] = false;
        }
      }
    }
  }
}