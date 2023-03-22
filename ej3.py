def getDay(n):
    values = n.split('-')
    day = values[0]
    month = values[1]
    year = values[2]
    day = int(day)
    month = int(month)
    cent = int(year[:2])
    year = int(year[2:])
    print(day, month, year, cent)
    days = ["Sabado", "Domingo", "Lunes",
            "Martes", "Miercoles", "Jueves", "Viernes"]
    date = day + (((month+1)*26)//10) + year + (year//4) + (cent//4) - (2*cent)
    date = date % 7

    print(days[int(date)])


getDay("10-10-1995")