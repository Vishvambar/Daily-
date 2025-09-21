public class Manager extends Employee{

    public Manager (String name , double salary , String address , String job){
        super(name , salary , address, job);
        System.out.println("Constructor of manager class ");
        
    }
     public void calculateBonus(){
    double bonus = this.emp_salary*0.10;
    System.out.println("Bous is "+bonus);
 }


}