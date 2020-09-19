import java.util.*;
import java.io.*;
// import java.math.BigInteger;

//ACCEPTED
class FLOW014 {
  public static void main(String[] args) {
    InputReader in = new InputReader(System.in);
    OutputWriter out = new OutputWriter(System.out);
    int t = in.readInt();
    while (t-- > 0) {
      int h = in.readInt();
      double cc = in.readDouble();
      int ten = in.readInt();
      boolean flag1 = h > 50;
      boolean flag2 = cc < 0.7;
      boolean flag3 = ten > 5600;
      if (flag1 && flag2 && flag3)
        out.printLine(10);
      else if (flag1 && flag2)
        out.printLine(9);
      else if (flag2 && flag3)
        out.printLine(8);
      else if (flag3 && flag1)
        out.printLine(7);
      else if (flag1 || flag2 || flag3)
        out.printLine(6);
      else
        out.printLine(5);

    }
  }
  // Check Prime :

  // private static boolean isPrime(int n) {
  // if (n < 2)
  // return false;
  // for (int i = 2; i <= Math.sqrt(n); i++) {
  // if (n % i == 0)
  // return false;
  // }
  // return true;
  // }

  // GCD :

  // private static int gcd(int a, int b) {
  // return b == 0 ? a : gcd(b, a % b);
  // }

  // Sieve :

  // private static void sieve() {
  // boolean primes[] = new boolean[maxN + 1];
  // for (int i = 0; i <= N; i++)
  // primes[i] = true;
  // primes[0] = false;
  // primes[1] = false;

  // for (int i = 2; i * i <= maxN; i++) {
  // if (primes[i]) {
  // for (int j = i * i; j <= maxN; j += i)
  // primes[j] = false;
  // }
  // }

  // }

  // Fast Exponentiation:

  // private static int exponent(int a, int n, int p) {
  // int res = 1;
  // a = a % p;
  // if (a == 0)
  // return 0;
  // while (n > 0) {
  // if ((n & 1) == 1) {
  // res = (res * a) % p;
  // }
  // a = (a * a) % p;
  // n >>= 1;
  // }

  // }

  // Factorize :

  // private static void factorize(int n) {
  // for (int i = 2; i <= Math.sqrt(n); i++) {
  // if (n % i == 0) {
  // int count = 0;
  // while (n % i == 0) {
  // count++;
  // n = n / i;
  // }
  // }
  // }
  // if (n != 1)
  // System.out.println(1);
  // }

  // Product of Factors:

  // private static int product(int n) {
  // {
  // int num = nFactors(n)/2;
  // int res=exponent(n,num,mod);
  // }

  // Number of Factors :

  // private static int nFactors(int n) {
  // int res = 1;
  // for (int i = 2; i <= Math.sqrt(n); i++) {
  // if (n % i == 0) {
  // int count = 0;
  // while (n % i == 0) {
  // count++;
  // n = n / i;
  // }
  // res *= (count + 1);
  // }
  // }
  // if (n != 1)
  // res *= 2;

  // return res;
  // }
}

class InputReader {
  private InputStream stream;
  private byte[] buf = new byte[1024];
  private int curChar;
  private int numChars;
  private SpaceCharFilter filter;

  public InputReader(InputStream stream) {
    this.stream = stream;
  }

  public int read() {
    if (numChars == -1) {
      throw new InputMismatchException();
    }
    if (curChar >= numChars) {
      curChar = 0;
      try {
        numChars = stream.read(buf);
      } catch (IOException e) {
        throw new InputMismatchException();
      }
      if (numChars <= 0) {
        return -1;
      }
    }
    return buf[curChar++];
  }

  public int readInt() {
    int c = read();
    while (isSpaceChar(c)) {
      c = read();
    }
    int sgn = 1;
    if (c == '-') {
      sgn = -1;
      c = read();
    }
    int res = 0;
    do {
      if (c < '0' || c > '9') {
        throw new InputMismatchException();
      }
      res *= 10;
      res += c - '0';
      c = read();
    } while (!isSpaceChar(c));
    return res * sgn;
  }

  public String readString() {
    int c = read();
    while (isSpaceChar(c)) {
      c = read();
    }
    StringBuilder res = new StringBuilder();
    do {
      res.appendCodePoint(c);
      c = read();
    } while (!isSpaceChar(c));
    return res.toString();
  }

  public double readDouble() {
    int c = read();
    while (isSpaceChar(c)) {
      c = read();
    }
    int sgn = 1;
    if (c == '-') {
      sgn = -1;
      c = read();
    }
    double res = 0;
    while (!isSpaceChar(c) && c != '.') {
      if (c == 'e' || c == 'E') {
        return res * Math.pow(10, readInt());
      }
      if (c < '0' || c > '9') {
        throw new InputMismatchException();
      }
      res *= 10;
      res += c - '0';
      c = read();
    }
    if (c == '.') {
      c = read();
      double m = 1;
      while (!isSpaceChar(c)) {
        if (c == 'e' || c == 'E') {
          return res * Math.pow(10, readInt());
        }
        if (c < '0' || c > '9') {
          throw new InputMismatchException();
        }
        m /= 10;
        res += (c - '0') * m;
        c = read();
      }
    }
    return res * sgn;
  }

  public long readLong() {
    int c = read();
    while (isSpaceChar(c)) {
      c = read();
    }
    int sgn = 1;
    if (c == '-') {
      sgn = -1;
      c = read();
    }
    long res = 0;
    do {
      if (c < '0' || c > '9') {
        throw new InputMismatchException();
      }
      res *= 10;
      res += c - '0';
      c = read();
    } while (!isSpaceChar(c));
    return res * sgn;
  }

  public boolean isSpaceChar(int c) {
    if (filter != null) {
      return filter.isSpaceChar(c);
    }
    return c == ' ' || c == '\n' || c == '\r' || c == '\t' || c == -1;
  }

  public String next() {
    return readString();
  }

  public interface SpaceCharFilter {
    public boolean isSpaceChar(int ch);
  }
}

class OutputWriter {
  private final PrintWriter writer;

  public OutputWriter(OutputStream outputStream) {
    writer = new PrintWriter(new BufferedWriter(new OutputStreamWriter(outputStream)));
  }

  public OutputWriter(Writer writer) {
    this.writer = new PrintWriter(writer);
  }

  public void print(Object... objects) {
    for (int i = 0; i < objects.length; i++) {
      if (i != 0) {
        writer.print(' ');
      }
      writer.print(objects[i]);
    }
    writer.flush();
  }

  public void printLine(Object... objects) {
    print(objects);
    writer.println();
    writer.flush();
  }

  public void close() {
    writer.close();
  }

  public void flush() {
    writer.flush();
  }
}
