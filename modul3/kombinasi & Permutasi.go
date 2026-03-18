package main

import "fmt"

func main() {
	var a, b, c, d int
	fmt.Scan(&a, &b, &c, &d)

	permutasiAC, faktorialC := 1, 1
	for i := 0; i < c; i++ {
		permutasiAC *= (a - i)
		faktorialC *= (i + 1)
	}

	permutasiBD, faktorialD := 1, 1
	for i := 0; i < d; i++ {
		permutasiBD *= (b - i)
		faktorialD *= (i + 1)
	}

	fmt.Println(permutasiAC, permutasiAC/faktorialC)
	fmt.Println(permutasiBD, permutasiBD/faktorialD)
}
