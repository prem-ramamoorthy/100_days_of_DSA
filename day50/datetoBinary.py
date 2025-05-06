def convertDateToBinary( date: str) -> str:
        l = date.split("-")
        l = [int(i) for i in l]
        result = []
        for i in l :
            s = ""
            num = i
            while (num > 0) :
                s = str(num % 2) + s
                num = num // 2
            
            result.append(s)
        return "-".join(result)

date = "2023-10-01"
binary_date = convertDateToBinary(date)
print(f"Binary date: {binary_date}") 