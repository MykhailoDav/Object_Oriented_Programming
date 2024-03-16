namespace Lab_1._1;

public class Program
{
    static FloatRange MakeFloatRange(double first, double second)
    {
        return new FloatRange(first, second);
    }

    static void Main(string[] args)
    {
        FloatRange floatRange = new();
        FloatRange.Read(floatRange);
        FloatRange.Display(floatRange);
        double x;
        Console.Write("Enter number: ");
        x = Convert.ToDouble(Console.ReadLine());
        if (floatRange.RangeCheck(x))
        {
            Console.WriteLine("Number is in range");
        }
        else
        {
            Console.WriteLine("Number is not in range");
        }

        double firstValue;
        double secondValue;

        Console.Write("Enter first value: ");
        firstValue = Convert.ToDouble(Console.ReadLine());

        Console.Write("Enter second value: ");
        secondValue = Convert.ToDouble(Console.ReadLine());

        floatRange = MakeFloatRange(firstValue, secondValue);
        FloatRange.Display(floatRange);


        FloatRange incrementedFloatRange = floatRange.PrefixIncrement();
        incrementedFloatRange = floatRange++;
        Console.WriteLine("After increment:");
        Console.WriteLine(incrementedFloatRange);


        FloatRange decrementedFloatRange = floatRange.PrefixDecrement();
        decrementedFloatRange = floatRange--;
        Console.WriteLine("After decrement:");
        Console.WriteLine(decrementedFloatRange);

        FloatRange a = new(1, 5);
        FloatRange b = new(3, 4);
        FloatRange c = new(b);
        FloatRange y = null;
        y = a * (floatRange ^ 2) + b * floatRange + c;
        Console.WriteLine("Result: y = a*(x^2) + b*x + c = ");
        y.Display();

    }
}