public class static_and_global_recursion {

	static int x=0;

	static int static_fun2(int n) {

		if (n>0){
			x++;
			return static_fun2(n-1) + x;
		}
		return 0;
	}

	static int local_fun1(int n) {

		if (n>0) {
			return local_fun1(n-1) + n;
		}
		return 0;
	}

	public static void main(String args[]) {

		int var1 = local_fun1(5);
		System.out.println(var1);

		int var2 = static_fun2(5);
		System.out.println(var2);
	}
}