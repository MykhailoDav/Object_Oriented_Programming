using System;
namespace Lab_1_4;
class Program
{
    static void Main(string[] args)
    {
        // Встановлюємо кодування консолі на UTF-8
        Console.OutputEncoding = System.Text.Encoding.UTF8;

        Rectangle rectangle1 = new();
        rectangle1.Read();
        Console.WriteLine("\n\t Rectangle 1)");
        rectangle1.Display("1");

        Rectangle rectangle2 = new();
        rectangle2.Read();
        Console.WriteLine("\n\t Rectangle 1)");
        rectangle2.Display("1");

        bool exit = false;
        while (!exit)
        {
            Console.WriteLine("\nМеню:");
            Console.WriteLine("1. Перемістити прямокутники");
            Console.WriteLine("2. Змінити розміри прямокутників");
            Console.WriteLine("3. Побудувати найменший прямокутник, що містить два задані прямокутники");
            Console.WriteLine("4. Побудувати прямокутник, який є спільною частиною двох прямокутників");
            Console.WriteLine("5. Вийти");
            Console.WriteLine("6. To string");
            Console.Write("Виберіть опцію: ");

            int choice;
            if (!int.TryParse(Console.ReadLine(), out choice))
            {
                Console.WriteLine("Некоректний ввід. Будь ласка, введіть число від 1 до 5.");
                continue;
            }

            switch (choice)
            {
                case 1:
                    Console.Write("Введіть зсув по X: ");
                    int deltaX = int.Parse(Console.ReadLine());
                    Console.Write("Введіть зсув по Y: ");
                    int deltaY = int.Parse(Console.ReadLine());
                    Console.WriteLine("\nПрямокутники переміщені;)\n");
                    rectangle1.Move(deltaX, deltaY);
                    rectangle1.Display("1");
                    rectangle2.Move(deltaX, deltaY);
                    rectangle2.Display("2");                    
                    break;
                case 2:
                    Console.Write("Введіть нову ширину для першого прямокутника: ");
                    int newWidth1 = int.Parse(Console.ReadLine());
                    Console.Write("Введіть нову висоту для першого прямокутника: ");
                    int newHeight1 = int.Parse(Console.ReadLine());
                    rectangle1.Resize(newWidth1, newHeight1);
                    rectangle1.Display("1");

                    Console.Write("Введіть нову ширину для другого прямокутника: ");
                    int newWidth2 = int.Parse(Console.ReadLine());
                    Console.Write("Введіть нову висоту для другого прямокутника: ");
                    int newHeight2 = int.Parse(Console.ReadLine());
                    rectangle2.Resize(newWidth2, newHeight2);
                    rectangle2.Display("2");                 
                    break;
                case 3:
                    Rectangle boundingRectangle = rectangle1.GetBoundingRectangle(rectangle2);
                    Console.WriteLine("Найменший прямокутник, який містить два задані прямокутники:");
                    Console.WriteLine($"X: {boundingRectangle.X}, Y: {boundingRectangle.Y}, Width: {boundingRectangle.Width}, Height: {boundingRectangle.Height}");
                    break;
                case 4:
                    Rectangle intersectionRectangle = rectangle1.GetIntersection(rectangle2);
                    if (intersectionRectangle == null)
                    {
                        Console.WriteLine("Прямокутники не перетинаються.");
                    }
                    else
                    {
                        Console.WriteLine("Прямокутник, який є спільною частиною двох прямокутників:");
                        Console.WriteLine($"X: {intersectionRectangle.X}, Y: {intersectionRectangle.Y}, Width: {intersectionRectangle.Width}, Height: {intersectionRectangle.Height}");
                    }
                    break;
                case 5:
                    exit = true;
                    Console.WriteLine("Дякую за використання програми!");
                    break;
                case 6:
                    Console.WriteLine( rectangle1.toString());
                    break;
                default:
                    Console.WriteLine("Вибрано неправильну опцію. Будь ласка, виберіть опцію зі списку.");
                    break;
            }
        }
    }
}
