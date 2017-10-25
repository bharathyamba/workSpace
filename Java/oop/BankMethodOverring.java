class Bank{
	int getRateofInterest(){
		return 0;
	}
}
class SBI extends Bank{
	int getRateofInterest(){
		return 7;
	}
}

class ICICI extends Bank{
	int getRateofInterest(){
		return 6;
	}
}

class AXIS extends Bank{
	int getRateofInterest(){
		return 5;
	}
}

class BankMethodOverriding{
	public static void main(String[] args) {
		SBI s = new SBI();
		ICICI i = new ICICI();
		AXIS a = new AXIS();
		System.out.println("SBI RateofInterest :: "+s.getRateofInterest());
		System.out.println("ICICI RateofInterest :: "+i.getRateofInterest());
		System.out.println("AXIS RateofInterest :: "+a.getRateofInterest());
	}
}