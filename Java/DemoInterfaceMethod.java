interface Circle
{
    // Characteristics  (public static final )
    float PI = 3.14f;    
    
    // Behaviours   (public abstract)
    float Area(float Radius);
    float Circumfarance(float Radius);
}

class Marvellous implements Circle
{
    // Error due to missing body of area ant circumfarance
}

class DemoInterfaceMethod
{
    public static void main(String A[])
    {
        Marvellous mobj = new Marvellous();
    }
}