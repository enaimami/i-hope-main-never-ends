def ft_count_harvest_recursive() -> None:
    target = int(input("Days until harvest: "))

    def recurser(current: int) -> None:
        if current > target:
            print("Harvest time!")
            return
        print("Day", current)
        recurser(current + 1)

    recurser(1)
