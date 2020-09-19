import java.util.Scanner;

/**
 * DECINC
 */
public class DECINC {

  public static void main(String[] args) {
    Scanner sn = new Scanner(System.in);
    int n = sn.nextInt();
    if (n % 4 == 0)
      n++;
    else
      n--;
    System.out.println(n);
  }
}