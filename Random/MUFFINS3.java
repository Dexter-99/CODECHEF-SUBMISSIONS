import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

// import javax.naming.spi.ResolveResult;

/**
 * MUFFINS3
 */
public class MUFFINS3 {

  public static void main(String[] args) {
    Scanner sn = new Scanner(System.in);
    int n = sn.nextInt();
    HashMap<Integer, Integer> m = new HashMap<>();
    for (int i = 1; i <= n; i++) {
      m.put(n % i, i);
    }
    int res = -1;
    for (Map.Entry<Integer, Integer> e : m.entrySet()) {
      res = Math.max(res, e.getKey());
    }
    System.out.println(m.get(res));
  }
}