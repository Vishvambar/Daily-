package assignment8.assignment8;
public class Bird extends Animal 
 {

    @Override
    public void move() {
        System.out.println("Fly in the sky");
    }

    @Override
    public void makesound() {
        System.out.println("Chirp chirp");
    }
}
