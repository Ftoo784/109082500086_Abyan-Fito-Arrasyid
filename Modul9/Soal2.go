package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)

	arr := make([]int, n)

	for i := 0; i < n; i++ {
		fmt.Scan(&arr[i])
	}

	fmt.Println("Semua:")
	for i := 0; i < n; i++ {
		fmt.Print(arr[i], " ")
	}

	fmt.Println("\nGenap:")
	for i := 0; i < n; i++ {
		if arr[i]%2 == 0 {
			fmt.Print(arr[i], " ")
		}
	}

	fmt.Println("\nGanjil:")
	for i := 0; i < n; i++ {
		if arr[i]%2 != 0 {
			fmt.Print(arr[i], " ")
		}
	}

	var x int
	fmt.Scan(&x)
	fmt.Println("\nKelipatan:")
	for i := 0; i < n; i++ {
		if i%x == 0 {
			fmt.Print(arr[i], " ")
		}
	}

	var del int
	fmt.Scan(&del)

	fmt.Println("\nSetelah hapus:")
	for i := 0; i < n; i++ {
		if i != del {
			fmt.Print(arr[i], " ")
		}
	}

	var sum int
	for i := 0; i < n; i++ {
		sum += arr[i]
	}
	fmt.Println("\nRata-rata:", sum/n)

	var cari, count int
	fmt.Scan(&cari)

	for i := 0; i < n; i++ {
		if arr[i] == cari {
			count++
		}
	}
	fmt.Println("Frekuensi:", count)
}
