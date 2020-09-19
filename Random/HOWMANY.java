import java.util.Scanner;

/**
 * HOWMANY
 */
public class HOWMANY {

  public static void main(String[] args) {
    Scanner sn = new Scanner(System.in);
    int n = sn.nextInt();
    if (n == 0)
      System.out.println(1);
    else {
      int dig = (int) Math.floor(Math.log10(n) + 1);
      if (dig == 1)
        System.out.println(1);
      else if (dig == 2)
        System.out.println(2);
      else if (dig == 3)
        System.out.println(3);
      else
        System.out.println("More than 3 digits");
    }
  }
}