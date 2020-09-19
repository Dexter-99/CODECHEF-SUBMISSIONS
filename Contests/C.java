
import java.util.Scanner;

/**
 * C
 */
class C {

  public static void main(String[] args) {
    Scanner sn = new Scanner(System.in);
    int t = sn.nextInt();
    while (t-- > 0) {
      int n = sn.nextInt();
      int a[] = new int[n];
      for (int i = 0; i < n; i++)
        a[i] = sn.nextInt();
      int max = Integer.MIN_VALUE;
      for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
          max = Math.max(max, res(a[i], a[j]));
        }
      }
      System.out.println(max);
    }
  }

  private static int res(int a, int b) {
    String x = Integer.toString(a, 2);
    String y = Integer.toString(b, 2);
    String XY = x + y;
    String YX = y + x;
    int _xy = Integer.parseInt(XY, 2);
    int _yx = Integer.parseInt(YX, 2);
    return _xy - _yx;
  }
}