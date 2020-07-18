import java.util.Scanner;

public class Main {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while (t-- != 0) {
			int x = sc.nextInt(), y = sc.nextInt();
			System.out.println(Math.max(0, (x - y)));
		}
		sc.close();
	}

}
