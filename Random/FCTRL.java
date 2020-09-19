import java.util.Scanner;

/**
 * FCTRL
 */
public class FCTRL {

  public static void main(String[] args) {
    Scanner sn = new Scanner(System.in);
    int n = sn.nextInt();
    System.out.println(trailing(n));
  }

  private static int trailing(int n) {
    int sum = 0;
    while (n != 0) {
      sum += n / 5;
      n = n / 5;
    }
    return sum;
  }
}