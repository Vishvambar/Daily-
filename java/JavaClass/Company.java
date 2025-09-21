public class Company {
    public static void main(String args[]) {
    
           Manager M1 = new Manager("TCSION", 70000, "Pune" , "Manager");
           M1.calculateBonus();
           System.out.println("Manager Details : \n"+M1.emp_name+" "+M1.emp_salary+" "+M1.emp_address+" "+M1.emp_job_title+"\n");
           

           Developer D1 = new Developer("DEV", 45100, "Pune" , "Developer");
           System.out.println("Developer Details : \n"+D1.emp_name+" "+D1.emp_salary+" "+D1.emp_address+" "+D1.emp_job_title+"\n");
           
           Programmer P1 = new Programmer("PRO", 170000, "Pune" , "Manager");
           System.out.println("Programmer Details : \n"+P1.emp_name+" "+P1.emp_salary+" "+P1.emp_address+" "+P1.emp_job_title+"\n");
           
    }
}
