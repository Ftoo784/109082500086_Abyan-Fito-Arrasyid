package main
import "fmt"

func cetakGanjil(n int) {
	if n <= 0 {
		return
	}

	cetakGanjil(n - 1)
	if n%2 != 0 {
		fmt.Printf("%d ", n)
	}
}

func main() {
	var n int
	fmt.Scan(&n)
	cetakGanjil(n)
	fmt.Println()
}
