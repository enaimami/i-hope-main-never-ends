class Plant:
    def __init__(
        self, name: str, height: float, age: int, growth_rate: float
    ) -> None:
        self.name = name
        self.height = height
        self.age_in_days = age
        self.growth_rate = growth_rate

    def show(self) -> None:
        rounded_height = round(self.height, 1)
        print(f"{self.name}: {rounded_height}cm, {self.age_in_days} days old")

    def age(self) -> None:
        self.age_in_days = self.age_in_days + 1

    def grow(self) -> None:
        self.height = self.height + self.growth_rate


def ft_plant_factory() -> None:
    garden = [
        Plant("Rose", 25.0, 30, 1),
        Plant("Oak", 200.0, 365, 1.2),
        Plant("Cactus", 5.0, 90, 1.1),
        Plant("Sunflower", 80.0, 45, 0.3),
        Plant("Fern", 15.0, 120, 0.9)
    ]
    print("=== Plant Factory Output ===")
    for plant in garden:
        print("Created: ", end="")
        plant.show()


if __name__ == "__main__":
    ft_plant_factory()
