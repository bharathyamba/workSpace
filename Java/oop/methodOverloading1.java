class methodOverloading1{
	void sum(int a, long b){
		System.out.println(a+b);
	}
	void sum(int a,int b,long c){
		System.out.println(a+b+c);	
	}
	public static void main(String []args){
		methodOverloading1 o = new methodOverloading1();
		o.sum(1,323223123);
		o.sum(212,311,3);
	}
}
class OverloadingCalculation2{  
  void sum(int a,int b){System.out.println("int arg method invoked");}  
  void sum(long a,long b){System.out.println("long arg method invoked");}  
  
  public static void main(String args[]){  
  OverloadingCalculation2 obj=new OverloadingCalculation2();  
  obj.sum(20.9,20.9);//now int arg sum() method gets invoked  
  }  
}  

/*class OverloadingCalculation3{  
  void sum(int a,long b){System.out.println("a method invoked");}  
  void sum(long a,int b){System.out.println("b method invoked");}  
  
  public static void main(String args[]){  
  OverloadingCalculation3 obj=new OverloadingCalculation3();  
  obj.sum(20,20);//now ambiguity  
  }  
} */ 