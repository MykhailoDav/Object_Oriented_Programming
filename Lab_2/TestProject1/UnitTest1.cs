namespace Lab_1._1;


public class Tests
{
    [Test]
    public void Test1()
    {
        FloatRange f = new(1, 9);

        Assert.IsTrue(f.RangeCheck(5));
    }
}