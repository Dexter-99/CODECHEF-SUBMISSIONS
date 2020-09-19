import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

/**
 * FLOW016
 */
public class FLOW016 {

  public static void main(String[] args) throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    int t = Integer.parseInt(br.readLine());
    while (t-- > 0) {
      int a = Integer.parseInt(br.readLine());
      int b = Integer.parseInt(br.readLine());
      System.out.println(gcd(a, b));
      System.out.println(a * b / gcd(a, b));
    }
  }

  private static int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
  }
}