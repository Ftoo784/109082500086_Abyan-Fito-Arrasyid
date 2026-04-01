package main

import "fmt"

func hitungSkor(waktu [8]int, soal *int, skor *int) {
	*soal = 0
	*skor = 0

	for i := 0; i < 8; i++ {
		if waktu[i] <= 300 {
			*soal++
			*skor += waktu[i]
		}
	}
}

func main() {
	var nama, pemenang string
	var waktu [8]int
	var soal, skor int
	var maxSoal, minSkor int
	var first = true

	for {
		fmt.Scan(&nama)
		if nama == "Selesai" {
			break
		}

		for i := 0; i < 8; i++ {
			fmt.Scan(&waktu[i])
		}

		hitungSkor(waktu, &soal, &skor)

		if first || soal > maxSoal || (soal == maxSoal && skor < minSkor) {
			first = false
			maxSoal = soal
			minSkor = skor
			pemenang = nama
		}
	}

	fmt.Println(pemenang, maxSoal, minSkor)
}
