package main
import "fmt"

func tampilkanBarisan(n int) {
	if n == 1 {
		fmt.Print(n, " ")
		return
	}

	fmt.Print(n, " ")
	tampilkanBarisan(n - 1)
	fmt.Print(n, " ")
}

func main() {
	var n int
	fmt.Scan(&n)
	tampilkanBarisan(n)
	fmt.Println()
}
