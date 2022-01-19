public class reverse_string {

	static void reverse(String str1) {

		class Local {

			void fun1(int n) {
				if (n<str1.length()) {
					fun1(n+1);
							System.out.print(args);
				}
			}
		}

		new Local().fun1(0);

	}

	public static void main(String args[]) {
		String str1 = "Prashanth";
		reverse(str1);
	}
}