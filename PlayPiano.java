import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		for (int i = 0; i < t; i++) {
			String str = sc.nextLine();
			boolean c = false;
			char chr[] = str.toCharArray();
			int j=1;
			for (j = 0; j < str.length(); j = j + 2) {
				if (chr[j + 1] == chr[j]) {
					System.out.println("no");
					break;
				}
				else {
					c=true;
				}
			}
			if(c &&j==str.length()) {
				System.out.println("yes");
			}
		}
		sc.close();
	}
}
