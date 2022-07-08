class base{
    public void function(){
        System.out.println("This is base one class");
    } 
}
class inherit1 extends base{
    public void fn1(){
        super.function();
    }
}
public class inherit{
    public static void main(String[] args) {
        inherit1 int1 = new inherit1();
        int1.fn1();
    }
}