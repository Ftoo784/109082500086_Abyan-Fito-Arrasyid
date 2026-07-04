package main

import "fmt"

func main() {
	var berat, kg, gram, biayaKg, biayaGram, total int

	fmt.Print("Berat parsel (gram): ")
	fmt.Scan(&berat)

	kg = berat / 1000
	gram = berat % 1000

	biayaKg = kg * 10000

	if gram >= 500 {
		biayaGram = gram * 5
	} else {
		biayaGram = gram * 15
	}

	total = biayaKg + biayaGram

	if kg > 10 {
		total = biayaKg
	}

	fmt.Printf("Detail berat: %d kg + %d gr\n", kg, gram)
	fmt.Printf("Detail biaya: Rp. %d + Rp. %d\n", biayaKg, biayaGram)
	fmt.Printf("Total biaya: Rp. %d\n", total)
}
