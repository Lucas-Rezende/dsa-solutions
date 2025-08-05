public class RomanToInteger (int value)
{
    public static void Main()
    {
        int id = 456; // Hardcoded value
        Console.WriteLine($"Using hardcoded ID: {id}");

        OuterClass outerInstance = new OuterClass("ExampleName", id);
        outerInstance.DisplayInfo();
    }
}

