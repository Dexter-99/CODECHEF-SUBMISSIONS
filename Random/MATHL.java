import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;

/**
 * MATHL
 */
public class MATHL {

  public static void main(String[] args) throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    int n = Integer.parseInt(br.readLine());
    BigInteger res = new BigInteger("1");
    BigInteger m = new BigInteger("1000000007");
    for (int i = 1; i <= n; i++) {

      int p = n + 1 - i;
      BigInteger prod = BigInteger.valueOf(i).pow(p);
      res = res.multiply(prod);
      res = res.mod(m);
    }
    System.out.println(res);
  }

}