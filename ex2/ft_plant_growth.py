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

def ft_show_growth() -> None:
    rose = plant("Rose",25.0,30,0.8)
    print("=== Garden Plant Growth ===")
    for i in range(1,7):


