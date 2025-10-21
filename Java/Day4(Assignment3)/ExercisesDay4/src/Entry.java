
public class Entry {
	
	public static void main(String[] args) {
        Base base = new Base();
        base.parentMethod();

        Derived derived = new Derived();
        derived.childMethod();

        derived.parentMethod();
    }

}
