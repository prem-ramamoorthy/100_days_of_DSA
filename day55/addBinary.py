def addBinary(a: str, b: str) -> str:
    result = []
    carry = 0
    i, j = len(a) - 1, len(b) - 1

    while i >= 0 or j >= 0 or carry:
        digit_a = int(a[i]) if i >= 0 else 0
        digit_b = int(b[j]) if j >= 0 else 0

        total = digit_a + digit_b + carry
        result.append(str(total % 2))  # binary digit
        carry = total // 2  # carry for next iteration

        i -= 1
        j -= 1

    return ''.join(reversed(result))

# Example usage
if __name__ == "__main__":
    a = "1010"
    b = "1011"
    print(addBinary(a, b))  # Output: "10101"