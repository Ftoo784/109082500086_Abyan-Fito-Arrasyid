package main

import "fmt"

func main() {
	var klubA, klubB string
	fmt.Print("Klub A : ")
	fmt.Scan(&klubA)
	fmt.Print("Klub B : ")
	fmt.Scan(&klubB)
	var skorA, skorB int
	var hasil []string
	i := 1
	for {
		fmt.Printf("Pertandingan %d : ", i)
		fmt.Scan(&skorA, &skorB)

		if skorA < 0 || skorB < 0 {
			break
		}

		if skorA > skorB {
			hasil = append(hasil, klubA)
		} else if skorB > skorA {
			hasil = append(hasil, klubB)
		} else {
			hasil = append(hasil, "Draw")
		}

		i++
	}
	for j := 0; j < len(hasil); j++ {
		fmt.Println("Hasil", j+1, ":", hasil[j])
	}

	fmt.Println("Pertandingan selesai")
}
