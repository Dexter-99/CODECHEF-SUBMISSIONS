import java.util.Scanner;

/**
 * AMR15A
 */
public class AMR15A {

  public static void main(String[] args) {
    Scanner sn = new Scanner(System.in);
    int n = sn.nextInt();
    int a[] = new int[n];
    int eCount = 0, oCount = 0;
    for (int i = 0; i < n; i++) {
      a[i] = sn.nextInt();
      if (a[i] % 2 == 0)
        eCount++;
      else
        oCount++;
    }
    if (eCount > oCount)
      System.out.println("READY FOR BATTLE");
    else
      System.out.println("NOT READY");

  }
}