namespace Lab_1_2;

[TestFixture]
public class Tests
{
    [Test]
    public void Init_ValidArguments_ReturnsTrue()
    {

        // Arrange
        double first = 1.5;
        double second = 3.5;

        Fraction fraction = new Fraction();

        // Act
        var result = fraction.Init(first, second);

        // Assert
        Assert.IsTrue(result);
    }

    [Test]
    public void Init_FirstValueGreaterThanSecond_ReturnsFalse()
    {
        // Arrange
        double first = 3.5;
        double second = 1.5;
        var floatRange = new Fraction();

        // Act
        var result = floatRange.Init(first, second);

        // Assert
        Assert.IsTrue(result);
    }
}
