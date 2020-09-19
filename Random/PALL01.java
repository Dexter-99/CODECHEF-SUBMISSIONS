import java.util.Scanner;

/**
 * PALL01
 */
public class PALL01 {

  public static void main(String[] args) {
    Scanner sn = new Scanner(System.in);
    int n = sn.nextInt();
    String s = String.valueOf(n);
    if (isPal(s, 0, s.length() - 1))
      System.out.println("wins");
    else
      System.out.println("losses");
  }

  private static boolean isPal(String s, int st, int en) {
    if (st == en)
      return true;
    if (st > en)
      return true;
    if (s.charAt(st) != s.charAt(en))
      return false;
    else
      return isPal(s, st + 1, en - 1);
  }
}