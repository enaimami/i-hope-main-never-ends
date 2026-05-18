class Plant:
    def __init__(
        self, name: str, height: float, age: int, growth_rate: float
    ) -> None:
        self._name = name
        self._height = height
        self._age_in_days = age
        self._growth_rate = growth_rate

    def show(self) -> None:
        rounded_heigh = round(self._height, 1)
        print(f"{self._name}: {rounded_heigh}cm, {self._age_in_days} days old")

    def age(self) -> None:
        self._age_in_days = self._age_in_days + 1

    def grow(self) -> None:
        self._height = self._height + self._growth_rate
