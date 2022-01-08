public class head_recursion {

	static void fun1(int n) {
		if (n>0) {
			fun1(n-1);
			System.out.println(n);
		}
	}

	public static void main(String args[]) {
		System.out.println("Head Recursion");
		fun1(3);
	}
}