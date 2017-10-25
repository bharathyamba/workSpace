class AdderParams {
	static int add(int a, int b){
		return a+b;
	}
	static int add(int a, int b, int c){
		return a+b+c;
	}
}


class AdderTypes{
	static int add(int a, int b){
		return a+b;
	}
	static double add(double a,double b){
		return a+b;
	}
}

class methodOverloading {
	public static void main(String []args){
		AdderParams a = new AdderParams();
		System.out.println(a.add(2,3));
		System.out.println(a.add(2,3,4));

		AdderTypes a1 = new AdderTypes();
		System.out.println(a1.add(4,9));
		System.out.println(a1.add(4.3,31.3));
	}
}

