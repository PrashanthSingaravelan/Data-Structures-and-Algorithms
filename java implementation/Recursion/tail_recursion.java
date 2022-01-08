public class tail_recursion {

	static void fun1(int n) {
		if (n>0) {
			System.out.println(n);
			fun1(n-1);
		}
	}

	public static void main(String args[]) {
		System.out.println("Tail Recursion");
		fun1(3);
	}
}