// /* package codechef; // don't place package name! */

// import java.util.*;
// import java.lang.*;
// import java.io.*;

// /* Name of the class has to be "Main" only if the class is public. */
// class Codechads {
// public static void main(String[] args) throws java.lang.Exception {
// // your code goes here
// InputReader in = new InputReader(System.in);
// OutputWriter out = new OutputWriter(System.out);
// int t = in.readInt();
// while (t-- > 0) {
// int n = in.readInt();
// int q = in.readInt();

// int a[] = new int[2 * q];
// for (int i = 0; i < 2 * q; i++) {
// a[i] = in.readInt();
// }
// int curr = 0;
// long total = 0;
// for (int i = 0; i < 2 * q; i++) {
// total += Math.abs(curr - a[i]);
// curr = a[i];
// }
// out.printLine(total);
// }
// }
// }

// class InputReader {
// private InputStream stream;
// private byte[] buf = new byte[1024];
// private int curChar;
// private int numChars;
// private SpaceCharFilter filter;

// public InputReader(InputStream stream) {
// this.stream = stream;
// }

// public int read() {
// if (numChars == -1) {
// throw new InputMismatchException();
// }
// if (curChar >= numChars) {
// curChar = 0;
// try {
// numChars = stream.read(buf);
// } catch (IOException e) {
// throw new InputMismatchException();
// }
// if (numChars <= 0) {
// return -1;
// }
// }
// return buf[curChar++];
// }

// public int readInt() {
// int c = read();
// while (isSpaceChar(c)) {
// c = read();
// }
// int sgn = 1;
// if (c == '-') {
// sgn = -1;
// c = read();
// }
// int res = 0;
// do {
// if (c < '0' || c > '9') {
// throw new InputMismatchException();
// }
// res *= 10;
// res += c - '0';
// c = read();
// } while (!isSpaceChar(c));
// return res * sgn;
// }

// public String readString() {
// int c = read();
// while (isSpaceChar(c)) {
// c = read();
// }
// StringBuilder res = new StringBuilder();
// do {
// res.appendCodePoint(c);
// c = read();
// } while (!isSpaceChar(c));
// return res.toString();
// }

// public double readDouble() {
// int c = read();
// while (isSpaceChar(c)) {
// c = read();
// }
// int sgn = 1;
// if (c == '-') {
// sgn = -1;
// c = read();
// }
// double res = 0;
// while (!isSpaceChar(c) && c != '.') {
// if (c == 'e' || c == 'E') {
// return res * Math.pow(10, readInt());
// }
// if (c < '0' || c > '9') {
// throw new InputMismatchException();
// }
// res *= 10;
// res += c - '0';
// c = read();
// }
// if (c == '.') {
// c = read();
// double m = 1;
// while (!isSpaceChar(c)) {
// if (c == 'e' || c == 'E') {
// return res * Math.pow(10, readInt());
// }
// if (c < '0' || c > '9') {
// throw new InputMismatchException();
// }
// m /= 10;
// res += (c - '0') * m;
// c = read();
// }
// }
// return res * sgn;
// }

// public long readLong() {
// int c = read();
// while (isSpaceChar(c)) {
// c = read();
// }
// int sgn = 1;
// if (c == '-') {
// sgn = -1;
// c = read();
// }
// long res = 0;
// do {
// if (c < '0' || c > '9') {
// throw new InputMismatchException();
// }
// res *= 10;
// res += c - '0';
// c = read();
// } while (!isSpaceChar(c));
// return res * sgn;
// }

// public boolean isSpaceChar(int c) {
// if (filter != null) {
// return filter.isSpaceChar(c);
// }
// return c == ' ' || c == '\n' || c == '\r' || c == '\t' || c == -1;
// }

// public String next() {
// return readString();
// }

// public interface SpaceCharFilter {
// public boolean isSpaceChar(int ch);
// }
// }

// class OutputWriter {
// private final PrintWriter writer;

// public OutputWriter(OutputStream outputStream) {
// writer = new PrintWriter(new BufferedWriter(new
// OutputStreamWriter(outputStream)));
// }

// public OutputWriter(Writer writer) {
// this.writer = new PrintWriter(writer);
// }

// public void print(Object... objects) {
// for (int i = 0; i < objects.length; i++) {
// if (i != 0) {
// writer.print(' ');
// }
// writer.print(objects[i]);
// }
// writer.flush();
// }

// public void printLine(Object... objects) {
// print(objects);
// writer.println();
// writer.flush();
// }

// public void close() {
// writer.close();
// }

// public void flush() {
// writer.flush();
// }
// }
