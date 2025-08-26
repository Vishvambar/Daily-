
public class Employee {

    // all data members are non static

    String emp_name; // non static
    double emp_salary; // non static
    String emp_address; // non static
    String emp_job_title; // non static

    public Employee(String name,
            double salary,
            String address,
            String job_title) {

        this.emp_name = name;
        this.emp_salary = salary;
        this.emp_address = address;
        this.emp_job_title = job_title;
    }

 public void calculateBonus(){
    double bonus = this.emp_salary*0.05;
    System.out.println("Bous is "+bonus);
 }


 public void generatedReport(){
    System.out.println("Generated Report for Employee");
 }
}
