def defangIPaddr( address: str) -> str:
        l= address.split(".")
        return "[.]".join(l)

print(defangIPaddr( "255.100.50.0" ))
