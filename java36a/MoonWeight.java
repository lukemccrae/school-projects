//Welcome to MoonWeight, the very best way to find out how much you would weigh on the moon!!
//To use this program, simply put your weight into the userWeight variable (keep the f in place).
//Compile your code in terminal with javac MoonWeight.java
//Then run this code with java MoonWeight!

// public class MoonWeight
// {
//   public static void main(final String[] args) {
//     //When User inputs their weight it is stored in userWeight
//     float userWeight = 160f;

//     //Store the percentage the moon will affect weight. This value will not change. 
//     final float moonGravity = 0.17f;

//     //Apply weight reduction!
//     float moonWeight = userWeight * moonGravity;

//     //Display message with new weight to user. 
//     System.out.println("Usually you weigh " + Math.round(userWeight) + "lbs, but since you're ON THE MOON, you only weigh " + moonWeight + "lbs. How cool is that?!?!");
//   }
// }

//Refactored code.
public class MoonWeight
{
  public static void main(final String[] args) {
    float userWeight = 160f;
    System.out.println("Usually you weigh " + Math.round(userWeight) + "lbs, but since you're ON THE MOON, you only weigh " + userWeight * 0.17f + "lbs. How cool is that?!?!");
  }
}