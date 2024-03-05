using static Lab_1._8.Bill;
public class Tests
{
    [Test]
    public void Init_ValidArguments_ReturnsTrue()
    {

        // Arrange
        string t = "11:11:11";
        Time time = new();
        // Act
        var result = time.Init(t);

        // Assert
        Assert.IsTrue(result);
    }
    [Test]
    public void Init_ValidArguments_ReturnsFalse()
    {

        // Arrange
        string t = "11:11.11";
        Time time = new();
        // Act
        var result = time.Init(t);

        // Assert
        Assert.IsFalse(result);
    }
}